#include "ClientModel.h"
#include <math.h>
ClientModel clientOBJ;
std::map<unsigned long long, std::pair<std::string, int>> adresstoNameRSSI;
std::map<unsigned long long, std::string> adresstoData;
std::vector<std::string> filterList;

ClientModel::ClientModel()
{


}
Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ ClientModel::ScannedDevices(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher,std::vector<std::string> filterMAP) {
	//initializing a Advertisement for Bluetooth
	filterList = filterMAP;
	bleAdvertisementWatcher->Received += ref new Windows::Foundation::TypedEventHandler<Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher ^, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs ^>(
		[bleAdvertisementWatcher](Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher ^watcher, Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs^ eventArgs) {
		int rssiValue = 0;
		bool accesibleForFilter = true;
		if (eventArgs->Advertisement->ManufacturerData) {
			if (!(eventArgs->Advertisement->ManufacturerData->GetAt(0))) {
				accesibleForFilter = false;
				return;
			}
			unsigned short value = eventArgs->Advertisement->ManufacturerData->GetAt(0)->CompanyId;
			char shortToCharBuffer[10];
			sprintf(shortToCharBuffer, "0x%02X%02X", HIBYTE(value), LOBYTE(value));
			std::string eventCompanyID = shortToCharBuffer;

			if (filterList.size() != 0 && !(std::find(filterList.begin(), filterList.end(), eventCompanyID) != filterList.end())) {
				return;
			}

		}
		if (accesibleForFilter) {

			Platform::String^  platformDeviceName = eventArgs->Advertisement->LocalName;
			std::wstring wDeviceName(platformDeviceName->Begin());
			std::string deviceName(wDeviceName.begin(), wDeviceName.end());

			//Getting RSSI Value
			rssiValue = (int)eventArgs->RawSignalStrengthInDBm;

			Platform::String^ platformdeviceData = Windows::Storage::Streams::DataReader::FromBuffer(eventArgs->Advertisement->ManufacturerData->GetAt(0)->Data)->ReadString(eventArgs->Advertisement->ManufacturerData->GetAt(0)->Data->Length);
			std::wstring wDeviceData(platformdeviceData->Begin());
			std::string deviceData(wDeviceData.begin(), wDeviceData.end());

			//Mapping RSSI Values With Addresses
			if (adresstoNameRSSI.count((eventArgs->BluetoothAddress)) > 0) {
				adresstoNameRSSI[eventArgs->BluetoothAddress] = std::make_pair(adresstoNameRSSI[eventArgs->BluetoothAddress].first, (adresstoNameRSSI[eventArgs->BluetoothAddress].second + rssiValue) / 2);
				adresstoData[eventArgs->BluetoothAddress] = deviceData;

			}else {
				adresstoNameRSSI[eventArgs->BluetoothAddress] = std::make_pair(deviceName, rssiValue);
				adresstoData[eventArgs->BluetoothAddress] = deviceData;

			}
			clientOBJ.printScannedDevices();


			char fileName[] = "data2";
			/*Making a HTTP Request to Server to inform RSSI Value for special Address*/
			char *ipvalue = "172.25.65.50";
			char *sendingData = new char[deviceData.length() + 1];
			strcpy(sendingData, deviceData.c_str());
			RSSIRequestV(ipvalue, rssiValue, fileName, sendingData);
		}
	});


	return  bleAdvertisementWatcher;

}
 double ClientModel::calculateDistance(int rssi) {

	 int txPower = -80; //hard coded power value. Usually ranges between -59 to -65

		if (rssi == 0) {
			return -1.0;
		}

	double ratio = rssi * 1.0 / txPower;
	if (ratio < 1.0) {
		return pow(ratio, 10);
	}
	else {
		double distance = (0.89976)*pow(ratio, 7.7095) + 0.111;
		return distance;
	}
}
void ClientModel::clearMap() {
	adresstoNameRSSI.clear();
}
int ClientModel::clientCount() {
	return adresstoNameRSSI.size();
}
/*Printing all the scanned devices RSSI and Address Information*/
void ClientModel::printScannedDevices() {
	std::ofstream myfile;
	myfile.open("resultList.txt");

	for (auto deviceElem : adresstoNameRSSI) {		
		myfile << adresstoData.at(deviceElem.first)+" ";
		myfile << " It's address =  ";
		myfile << deviceElem.first;
		myfile << "  RssiValue=  "<< deviceElem.second.second;
		myfile << " Device Name: " << deviceElem.second.first;
		myfile << "Device distance: " << calculateDistance(deviceElem.second.second);
		myfile << " meter";
		myfile << "\n";
	}
	myfile.close();
}

