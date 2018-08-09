#include "ServerModel.h"
//map bluetooth address => (device name,rssi value)
std::map<unsigned long long, std::pair<std::string, int>> addressToNameRSSI;
int empty1 = 0;
//map bluetooth address => data  value
std::map<unsigned long long, std::string> addressToDeviceData;
//pc map rssi and data 
std::map <std::string, double> mapPc0;
std::map <std::string, double> mapPc1;
std::map <std::string, double> mapPc2;
std::vector<std::string> filterList;
int countx = 0;
ServerModel sMoB;
ServerModel::ServerModel()
{


}

Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ ServerModel::ScannedDevices(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher, std::vector<std::string> tempList) {

	//initializing a Advertisement for Bluetooth
	filterList = tempList;

	bleAdvertisementWatcher->Received += ref new Windows::Foundation::TypedEventHandler<Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher ^, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs ^>(
		[bleAdvertisementWatcher](Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher ^watcher, Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs^ eventArgs) {

		bool checkManuData = true;
		if (eventArgs->Advertisement->ManufacturerData) {

			if (!(eventArgs->Advertisement->ManufacturerData->GetAt(0))) {
				checkManuData = false;
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
		if (checkManuData) {
			int rssiValue = 0;
			//char szBuffer[10];
			//unsigned short value = bleAdvertisementWatcher->AdvertisementFilter->Advertisement->ManufacturerData->GetAt(0)->CompanyId;
			//sprintf(szBuffer, "%02X%02X", HIBYTE(value), LOBYTE(value));

			//getting the device name
			Platform::String^  platformDeviceName = eventArgs->Advertisement->LocalName;
			std::wstring wDeviceName(platformDeviceName->Begin());
			std::string deviceName(wDeviceName.begin(), wDeviceName.end());

			//Getting RSSI Value
			rssiValue = (int)eventArgs->RawSignalStrengthInDBm;

			Platform::String^ platformdeviceData = Windows::Storage::Streams::DataReader::FromBuffer(eventArgs->Advertisement->ManufacturerData->GetAt(0)->Data)->ReadString(eventArgs->Advertisement->ManufacturerData->GetAt(0)->Data->Length);
			std::wstring wDeviceData(platformdeviceData->Begin());
			std::string deviceData(wDeviceData.begin(), wDeviceData.end());

			//Mapping RSSI Values With Addresses
			if (addressToNameRSSI.count((eventArgs->BluetoothAddress)) > 0) {
				addressToNameRSSI[eventArgs->BluetoothAddress] = std::make_pair(addressToNameRSSI[eventArgs->BluetoothAddress].first, (addressToNameRSSI[eventArgs->BluetoothAddress].second + rssiValue) / 2);
				addressToDeviceData[eventArgs->BluetoothAddress] = deviceData;

			}
			else {
				addressToNameRSSI[eventArgs->BluetoothAddress] = std::make_pair(deviceName, rssiValue);
				addressToDeviceData[eventArgs->BluetoothAddress] = deviceData;

			}
			//Getting RSSI Value 
			rssiValue = (int)eventArgs->RawSignalStrengthInDBm;



			//reading pc's rssi values for each device
			//char pathPc2[] = "C:\\xampp\\htdocs\\data2.txt";
			//char pathPc1[] = "C:\\xampp\\htdocs\\data1.txt";
			char pathPc1[] = "ResourceFiles\\data1.txt";
			char pathPc2[] = "ResourceFiles\\data2.txt";
			std::string spc2 = sMoB.ReadTXT(pathPc2);
			std::string spc1 = sMoB.ReadTXT(pathPc1);
			int ipc2 = 0;
			int ipc1 = 0;
			std::string pcid2 = "";
			std::string pcid1 = "";
			mapPc0[deviceData] = sMoB.calculateDistance(rssiValue);


			if (!(spc2._Equal(""))) {
				pcid2 = spc2.substr(0, spc2.find("/"));
				int pos = spc2.find("/");
				std::string ispc2 = spc2.substr(pos + 1);
				ipc2 = std::stoi(ispc2);
				mapPc2[pcid2] = sMoB.calculateDistance(ipc2);
			}
			if (!(spc1._Equal(""))) {
				pcid1 = spc1.substr(0, spc1.find("/"));
				ipc1 = std::stoi(spc1.substr(spc1.find("/") + 1));
				mapPc1[pcid1] = sMoB.calculateDistance(ipc1);
			}


			sMoB.printScannedDevices();
			sMoB.findRoomLocation();
		}
	});


	return  bleAdvertisementWatcher;

}
/*RSSI VALUE TO APPROXIMATE METER*/
double ServerModel::calculateDistance(int rssi) {
	auto txPower = -80;

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
/*Writing the readed devices to the file with their information*/
void ServerModel::printScannedDevices() {
	std::ofstream myfile;

	myfile.open("ResourceFiles\\rssiValueofDevice.txt");
	for (auto elem : addressToNameRSSI) {
		if (addressToDeviceData.count(elem.first) > 0)
		{
			std::string ps;
			ps.append("[");
			ps.append(addressToDeviceData.at(elem.first));
			ps.append("]		 pc0=");
			if (mapPc0.count(addressToDeviceData.at(elem.first))>0) {
				ps.append(std::to_string((int)(100 * mapPc0.at(addressToDeviceData.at(elem.first)))));
			}
			else {
				ps.append("0");
			}
			ps.append(" pc1=");
			if (mapPc1.count(addressToDeviceData.at(elem.first))>0) {
				ps.append(std::to_string((int)(100 * mapPc1.at(addressToDeviceData.at(elem.first)))));
			}
			else {
				ps.append("0");
			}
			ps.append(" pc2=");
			if (mapPc2.count(addressToDeviceData.at(elem.first))>0) {
				ps.append(std::to_string((int)(100 * mapPc2.at(addressToDeviceData.at(elem.first)))));
			}
			else {
				ps.append("0");
			}
			ps.append("		\n");
			myfile << ps;
		}
	}
	myfile.close();
}

/*Translating a long Bluetooth Address to specific format */
std::wstring ServerModel::formatBluetoothAddress(unsigned long long BluetoothAddress) {
	std::wostringstream ret;
	ret << std::hex << std::setfill(L'0')
		<< std::setw(2) << ((BluetoothAddress >> (5 * 8)) & 0xff) << ":"
		<< std::setw(2) << ((BluetoothAddress >> (4 * 8)) & 0xff) << ":"
		<< std::setw(2) << ((BluetoothAddress >> (3 * 8)) & 0xff) << ":"
		<< std::setw(2) << ((BluetoothAddress >> (2 * 8)) & 0xff) << ":"
		<< std::setw(2) << ((BluetoothAddress >> (1 * 8)) & 0xff) << ":"
		<< std::setw(2) << ((BluetoothAddress >> (0 * 8)) & 0xff);
	return ret.str();
}
void ServerModel::clearMaps() {
	mapPc0.clear();
	mapPc2.clear();
	mapPc1.clear();
	addressToDeviceData.clear();
	addressToNameRSSI.clear();
}
/*Reading the first Line From Text File*/
std::string ServerModel::ReadTXT(char filename[])
{
	std::fstream myfile(filename, std::ios_base::in);

	if (!myfile) {
		printf("File cannot be opened\n");
		return "";
	}

	std::string a;

	myfile >> a;
	myfile.close();
	return a;
}
/*Calculating the closeness of the devices to rooms*/
int ServerModel::findRoomLocation() {
	std::ofstream myfile;
	myfile.open("ResourceFiles\\locationInfo.txt");
	for (auto elem : addressToNameRSSI) {
		if (mapPc1.count(addressToDeviceData.at(elem.first)) > 0 && mapPc0.count(addressToDeviceData.at(elem.first)) > 0 && mapPc2.count(addressToDeviceData.at(elem.first)) > 0) {
			double pc0 = -1 * mapPc0.at(addressToDeviceData.at(elem.first));
			double pc1 = -1 * mapPc1.at(addressToDeviceData.at(elem.first));
			double pc2 = -1 * mapPc2.at(addressToDeviceData.at(elem.first));
			if (pc0 > pc1 & pc0 > pc2) {
				myfile << ("ROOM 0");
			}
			else if (pc1 >pc0 & pc1 > pc2) {
				myfile << ("ROOM 1");
			}
			else if (pc2 >pc0 & pc2 > pc1) {
				myfile << ("ROOM 2");
			}
			else if (pc0 == pc1 & pc0 > pc2) {
				myfile << ("BETWEEN ROOM 0 AND 1");
			}
			else if (pc2 == pc1 & pc1 > pc0) {
				myfile << ("BETWEEN ROOM 1 AND 2");
			}
			else if (pc0 == pc2 & pc2 > pc1) {
				myfile << ("BETWEEN ROOM 0 AND 2");
			}
			myfile << "\n";
		}
		else {
			myfile << ("ROOM ?");
			myfile << "\n";

		}
	}
	return 0;

}
