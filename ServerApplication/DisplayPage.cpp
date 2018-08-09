#include "DisplayPage.h"
#include "ui_DisplayPage.h"
#include "QTimer";

bool displaymode = false;

/*Assigning Actions To Widgets*/
DisplayPageOb::DisplayPageOb(QWidget *parent) :
	QDialog(parent), ui(new Ui::DisplayPageOb)
{
	ui->setupUi(this);
	readTXT();
}
/*Destructor*/
DisplayPageOb::~DisplayPageOb()
{
	displaymode = false;
	delete ui;
}
/*Function of EXIT Button*/
void DisplayPageOb::restart() {
	std::ofstream infoFilesOb;
	infoFilesOb.open("ResourceFiles\\rssiValueofDevice.txt");
	infoFilesOb.close();
	infoFilesOb.open("ResourceFiles\\locationInfo.txt");
	infoFilesOb.close();
	close();
}
/*DISPLAY BUTTON RELEASED*/
void DisplayPageOb::scanPressed() {
	//if (!displaymode) {
		//displaymode = true;
		readTXT();
	
}
/*Reading and Printing the context of file*/
void DisplayPageOb::readTXT() {
	ifstream in("ResourceFiles\\rssiValueofDevice.txt");
	std::string strRssi;
	std::string strRssi1;
	ifstream in1("ResourceFiles\\locationInfo.txt");
	std::string strLocation;
	std::string strLocation1;
	while (std::getline(in, strRssi) && std::getline(in1, strLocation)) {  //reading the rssi and room values
		strRssi1.append(strRssi);
		strLocation1.append(strLocation);
		strRssi1.append("\n");
		strLocation1.append("\n");
	}

	QString rssiQstr = QString::fromLocal8Bit(strRssi1.c_str());
	QString locationQstr = QString::fromLocal8Bit(strLocation1.c_str());

	ui->label->setText(rssiQstr);				//printing the values*/
	ui->label_4->setText(locationQstr);
	QTimer::singleShot(0.1, this, SLOT(scanPressed()));  	//printing constantly without pressing the button again
	
}
void DisplayPageOb::closeEvent(QCloseEvent *event)
{

	event->accept();
}
