#pragma once
#include <windows.h>
#include <string>
#include <stdio.h>
#include <winsock.h>
#pragma warning(disable:4996)
using std::string;
#pragma comment(lib,"ws2_32.lib")

class RSSIRequestV
{
public:
	RSSIRequestV();
	RSSIRequestV::RSSIRequestV(char ipd1[], int RSSIValue, char fileName[], char* id);
	void RSSIRequestV::mParseUrl(char *mUrl, string &serverName, string &filepath, string &filename);
	SOCKET RSSIRequestV::connectToServer(char *szServerName, WORD portNum);
	int RSSIRequestV::getHeaderLength(char *content);
	char *RSSIRequestV::readUrl2(char *szUrl, long &bytesReturnedOut, char **headerOut);
};

