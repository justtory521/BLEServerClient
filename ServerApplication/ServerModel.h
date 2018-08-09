#pragma once
#include <map>
#include <iostream>
#include <Windows.Devices.Bluetooth.h>
#include <Windows.Devices.Bluetooth.Advertisement.h>
#include <wrl/event.h>
#include <string>
#include <sstream> 
#include <fstream>
#include <iomanip>
#include <vector>
using namespace Platform;
using namespace Windows::Devices;
class ServerModel
{

public:



	ServerModel();
	void printScannedDevices();
	std::wstring formatBluetoothAddress(unsigned long long BluetoothAddress);
	Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ ScannedDevices(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher, std::vector<std::string> re);
	std::string ReadTXT(char filename[]);
	double calculateDistance(int rssi);
	int findRoomLocation();
	void ServerModel::clearMaps();
};