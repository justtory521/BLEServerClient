#pragma once
#include <map>
#include <iostream>
#include <Windows.Devices.Bluetooth.h>
#include <Windows.Devices.Bluetooth.Advertisement.h>
#include <wrl/event.h>
#include "ServerModel.h"
#include <string>
#include <sstream> 
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;
using namespace Platform;
using namespace Windows::Devices;
class BLEScanner
{
	
public:
	BLEScanner();
	std::vector<std::string> BLEScanner::initializeWatcher(bool filtered, std::vector<std::string>  companyName);
	std::string searchForCompanyId(std::string company, std::string filename, bool searchID);
	~BLEScanner();
	int serverCount();
	void BleStop(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher1);
	int BLEScanner::startBLE(std::string State, bool filtered, std::vector<std::string> re);
};

