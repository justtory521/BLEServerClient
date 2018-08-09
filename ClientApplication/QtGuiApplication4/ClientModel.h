#pragma once
#include <map>
#include <iostream>
#include <Windows.Devices.Bluetooth.h>
#include <Windows.Devices.Bluetooth.Advertisement.h>
#include <wrl/event.h>
#include "RSSIRequestV.h"
#include <string>
#include <sstream> 
#include <fstream>
#include <iomanip>
#include <vector>
using namespace Platform;
using namespace Windows::Devices;
class ClientModel
{
public:

	
	ClientModel();
	void ClientModel::clearMap();
	int clientCount();
	void printScannedDevices();
	Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ ScannedDevices(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher,std::vector<std::string> filterMAP);
	double ClientModel::calculateDistance(int rssi);
};