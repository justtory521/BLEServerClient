#include "BLEScanner.h"


ClientModel clientObj;
Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher;
bool foundCompany;
BLEScanner::BLEScanner()
{
}




std::vector<std::string> BLEScanner::initializeWatcher(bool filtered, std::vector<std::string>  companyName) {
	bleAdvertisementWatcher = ref new Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher();
	boolean searchID = 0;
	//Open Scanning Mode
	std::string filename = "List.txt";
	std::vector<std::string> tempList;
	searchForCompanyId("", filename, searchID);
	bleAdvertisementWatcher->ScanningMode = Bluetooth::Advertisement::BluetoothLEScanningMode::Active;
	bool decision = filtered;
	if (decision) {
		int size = 0;
		for (int i = 0; i<companyName.size(); i++) {
			//Filtering the special device in Bluetooth Device Scanning
			std::string company = companyName.at(i);
			searchID = 1;
			std::string companyId = searchForCompanyId(company, filename, searchID);
			unsigned int translatedCompanyID;
			std::stringstream nonTranslatedCompanyID;
			nonTranslatedCompanyID << std::hex << companyId;
			nonTranslatedCompanyID >> translatedCompanyID;

			if (!foundCompany) {
				printf("initalizing error!! Cannot find the company!!\n");

			}
			else {
				tempList.push_back(companyId);
				/*Bluetooth::Advertisement::BluetoothLEManufacturerData^ manufacturerData = ref new Bluetooth::Advertisement::BluetoothLEManufacturerData();
				manufacturerData->CompanyId = translatedCompanyID;
				bleAdvertisementWatcher->AdvertisementFilter->Advertisement->ManufacturerData->Append(manufacturerData);*/
				//char szBuffer[10];
				//unsigned short value = bleAdvertisementWatcher->AdvertisementFilter->Advertisement->ManufacturerData->GetAt(size)->CompanyId;
				//sprintf(szBuffer, "%02X%02X", HIBYTE(value), LOBYTE(value));
				//myfile << szBuffer;
				//myfile << "\n";
				size++;
			}
		}

	}
	return tempList;
}
int BLEScanner::startBLE(std::string State,bool filtered, std::vector<std::string>  companyName) {
	if (State._Equal("Client")) {
		std::vector<std::string> tempList =initializeWatcher(filtered,companyName);
		/*Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher1 = clientObj.ScannedDevices(bleAdvertisementWatcher, tempList);
		bleAdvertisementWatcher1->Start();*/
		 bleAdvertisementWatcher = clientObj.ScannedDevices(bleAdvertisementWatcher, tempList);
		bleAdvertisementWatcher->Start();
		/*Starting SCAN MODE*/
		int wait;
		std::cin >> wait;
		
	}else if (State._Equal("Stop")) {
		BleStop(bleAdvertisementWatcher);

	}
	else {
		printf("Don't remember you!\n");

	}
	return 0;
}
void BLEScanner::BleStop(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher1) {
	if (!bleAdvertisementWatcher1) {
		return;
	}
	else {
		bleAdvertisementWatcher1->Stop();
		clientObj.clearMap();
	}
}
int BLEScanner::clientCount() { return clientObj.clientCount(); }
std::string BLEScanner::searchForCompanyId(std::string company, std::string filename, bool searchID) {
	std::ifstream file;
	file.open(filename);
	if (!file.is_open()) return "";

	std::string word;
	std::string value;
	while (file >> word)
	{

		if (searchID == 0) {
			std::cout << word << " ";
			file >> word;
			file >> word;
			std::cout << word << std::endl;

		}
		if (searchID == 1 && word._Equal(company)) {
			printf("Succesful!! Found the company\n");
			file >> value;
			file >> value;
			foundCompany = true;
			return value;
		}
	}
	foundCompany = false;
	return "";
}
BLEScanner::~BLEScanner()
{
}
