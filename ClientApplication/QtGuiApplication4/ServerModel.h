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
using namespace Platform;
using namespace Windows::Devices;
class ServerModel
{
public:
	ServerModel();
	void printScannedDevices(std::map<unsigned long long, std::pair<std::string, int>> p3);
	std::wstring formatBluetoothAddress(unsigned long long BluetoothAddress);
	Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ ScannedDevices(Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher^ bleAdvertisementWatcher);
	int ServerModel::ReadTXT(char filename[]);
	int ServerModel::findRoomLocation(int pc0, int pc1, int pc2);
};