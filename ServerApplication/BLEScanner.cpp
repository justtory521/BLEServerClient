#include "BLEScanner.h"
ServerModel ServerModelObject;
Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher;
bool foundCompany;

BLEScanner::BLEScanner()
{
}



/*initialize the watcher as filtered or non filtered*/
std::vector<std::string> BLEScanner::initializeWatcher(bool filtered, std::vector<std::string>  companyName) {
	bleAdvertisementWatcher = ref new Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher();
	boolean searchID = 0;
	//Open Scanning Mode
	std::string fileName = "ResourceFiles\\List.txt";
	std::vector<std::string> temp;
	searchForCompanyId("", fileName, searchID);
	bleAdvertisementWatcher->ScanningMode = Bluetooth::Advertisement::BluetoothLEScanningMode::Active;
	bool decision = filtered;
	if (decision) {
		int size = 0;
		for (int i = 0; i<companyName.size(); i++) {
			//Filtering the special device in Bluetooth Device Scanning
			std::string company = companyName.at(i);
			searchID = 1;
			std::string companyId = searchForCompanyId(company, fileName, searchID);
			unsigned int translatedCompanyID;
			std::stringstream ss;
			ss << std::hex << companyId;
			ss >> translatedCompanyID;

			if (!foundCompany) {
				printf("initalizing error!! Cannot find the company!!\n");

			}
			else {
				temp.push_back(companyId);
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
	return temp;
}
int BLEScanner::startBLE(std::string State, bool filtered, std::vector<std::string> re) {
	if (State._Equal("Server")) {
		std::vector<std::string> temp = initializeWatcher(filtered, re);
		Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher1 = ServerModelObject.ScannedDevices(bleAdvertisementWatcher, temp);	//adding lambda function to watcher

		bleAdvertisementWatcher1->Start(); //starting the lambda function

										   /*Starting SCAN MODE*/
		int wait;
		std::cin >> wait;
	}
	else if (State._Equal("Stop")) {
		BleStop(bleAdvertisementWatcher);

	}
	else {
		printf("Don't remember you!\n");

	}
	return 0;
}
/*Stopping the Watcher*/
void BLEScanner::BleStop(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher1) {
	if (!bleAdvertisementWatcher1) {
		return;
	}
	else {
		bleAdvertisementWatcher1->Stop();
		ServerModelObject.clearMaps();

	}
}
/*Searching the id of Company Filter*/
std::string BLEScanner::searchForCompanyId(std::string company, std::string fileName, bool searchID) {
	std::ifstream file;
	file.open(fileName);
	if (!file.is_open()) return "";

	std::string word;
	std::string value;
	while (file >> word)
	{
		if (searchID == 0) {
			std::cout << word << " ";
			file >> word;
			std::cout << word << std::endl;

		}
		if (searchID == 1 && word._Equal(company)) {
			file >> value;
			printf("Succesful!! Found the company\n");
			file >> value;
			foundCompany = true;
			return value;
		}
		else {
			file >> value;
			file >> value;

		}
	}
	foundCompany = false;
	return "";
}
BLEScanner::~BLEScanner()
{
}
