#pragma once
#include <map>
#include <iostream>
#include <Windows.Devices.Bluetooth.h>
#include <Windows.Devices.Bluetooth.Advertisement.h>
#include <wrl/event.h>
#include "RSSIRequestV.h"
#include "ClientModel.h"
#include "ServerModel.h"
#include <string>
#include <sstream> 
#include <fstream>
#include <iomanip>
#include <vector>
using namespace Platform;
using namespace Windows::Devices;
class BLEScanner
{

public:
	BLEScanner();

	std::vector<std::string> initializeWatcher(bool filtered, std::vector<std::string>  companyName);
	int BLEScanner::startBLE(std::string State, bool filtered,  std::vector<std::string>  companyName);
	std::string searchForCompanyId(std::string company, std::string filename, bool searchID);
	~BLEScanner();
	int clientCount();
	void BleStop(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher1);

};

