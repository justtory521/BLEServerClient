#include "ServerApplication.h"
#include "Settings.h"
#include "ui_Settings.h"
#include "ui_DisplayPage.h"
#include "DisplayPage.h"
BLEScanner *bleOb;
bool started = false;
bool stopped = true;
/*Assigning Actions To Widgets*/
ServerApplicationClass::ServerApplicationClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui->setupUi(this);
	connect(ui->StartButton, SIGNAL(released()), this, SLOT(modelPressed())); 
	connect(ui->Settings, SIGNAL(released()), this, SLOT(modelPressed()));
	connect(ui->StartButton, SIGNAL(pressed()), this, SLOT(modelClicked()));
	connect(ui->Settings, SIGNAL(pressed()), this, SLOT(modelClicked()));

}
void ServerApplicationClass::modelClicked() {
	QPushButton *p1 = (QPushButton*)sender();
	if (p1 == ui->StartButton) {
		ui->StartButton->setText(QApplication::translate("ServerApplicationClass", "", nullptr));
	}
	else if (p1 == ui->Settings) {
		ui->Settings->setText(QApplication::translate("ServerApplicationClass", "", nullptr));

	}
}
/*Actions Of Buttons*/
void ServerApplicationClass::modelPressed() {
	QPushButton *p1 = (QPushButton*)sender();
	if (p1 == ui->StartButton) {
		if (started) {
			stopped = true;
			started = false;
			std::vector<std::string> p21;
			bleOb->startBLE("Stop", 0, p21);
			p1->setText(QApplication::translate("ServerApplicationClass", "START", nullptr));
			std::ofstream myfile;
			myfile.open("ResourceFiles\\rssiValueofDevice.txt");
			myfile.close();
			myfile.open("ResourceFiles\\locationInfo.txt");
			myfile.close();

			return;
		}else{
			p1->setText(QApplication::translate("ServerApplicationClass", "STOP", nullptr));

		std::string re = "Server";
		ifstream in("ResourceFiles\\FilterInfo.txt");
		std::string str;
		std::string b="";
		
		

		bool filtered = false;
		std::vector<std::string> id;
		int count = 1;
		while (std::getline(in, str)) {	//getting the filter values 
			if (count == 1)
			{
				b = str;
				count = count + 1;
			}
			else if (b._Equal("filtered")) {	//if filtered, get the filter name
				id.push_back(str);;
				filtered = true;
			}
		}

		bleOb->startBLE(re, filtered, id);	//start the bluetooth process

		started = true;
		stopped = false;
		//starting the display of  results window
		DisplayPageOb w;
		w.show();
		w.exec();

		}
	}
	else if (p1 == ui->Settings) {	//starting the settings window
		ui->Settings->setText(QApplication::translate("ServerApplicationClass", "SETTINGS", nullptr));

		std::ofstream outfile;


		Dialog we;
		we.show();
		we.exec();
		
	}

}

/*Safe Closing*/
void ServerApplicationClass::closeEvent(QCloseEvent *event)	
{

		std::ofstream myfile;
		myfile.open("ResourceFiles\\FilterInfo.txt");
		myfile.close();
		myfile.open("ResourceFiles\\rssiValueofDevice.txt");
		myfile.close();
		myfile.open("ResourceFiles\\locationInfo.txt");
		myfile.close();
		exit(0);
		event->accept();
	
	
}