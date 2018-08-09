#include "QtGuiApplication4.h"
#include "ui_QtGuiApplication4.h"
#include <qstring.h>
#include <qmessagebox.h>
std::vector<std::string> groupList;
std::vector<std::string> selectedGroupList;
QString filter;
bool started = false;
BLEScanner *ble;

bool stopped = true;
#include <QCloseEvent>

ClientApplication::ClientApplication(QWidget *parent) :QMainWindow(parent), ui(new Ui::ClientApplication)
{

	ui->setupUi(this);
	connect(ui->filterBox, SIGNAL(toggled(bool)), this, SLOT(checkBoxFiltered())); //filter check
	connect(ui->start, SIGNAL(released()), this, SLOT(modelPressed()));	//start
	connect(ui->stop, SIGNAL(released()), this, SLOT(modelPressed()));	//restart
	connect(ui->deleteButton, SIGNAL(released()), this, SLOT(modelPressed())); //filter button
	connect(ui->selectFilterBtn, SIGNAL(released()), this, SLOT(modelPressed())); //filter button

}

ClientApplication::~ClientApplication()
{
	delete ui;
}
char *ipValue;

void ClientApplication::modelPressed() {
	QPushButton *p1 = (QPushButton*)sender();
	if (p1 == ui->selectFilterBtn) {
		std::string temp = ui->selectFilter->toPlainText().QString::toStdString().c_str();
		if (std::find(selectedGroupList.begin(), selectedGroupList.end(), temp) != selectedGroupList.end() || std::find(groupList.begin(), groupList.end(), temp) == groupList.end()) {		//if group name already exists
			ui->consoleLayer->setText("Filter Adding Failed!!");

		}
		else {
			selectedGroupList.push_back(temp);

			std::string b;
			for (int i = 0; i < selectedGroupList.size(); i++) {
				b.append(selectedGroupList.at(i));
				b.append("\n");
			}
			ui->consoleLayer->setText(ui->selectFilter->toPlainText() + " group filter selected!!");
			ui->selectedFilter->setText(QString::fromLocal8Bit(b.c_str()));
		}

	}
	else if (p1 == ui->start) {

		if (started) {
			stopped = true;
			started = false;
			std::vector<std::string> blankList;
			ble->startBLE("Stop", 0, blankList);
			p1->setText(QApplication::translate("ClientApplication", "START", nullptr));
	

			return;
		}
		else {
			p1->setText(QApplication::translate("ClientApplication", "STOP", nullptr));
			std::string userType = "Client";
			std::vector<std::string> id=selectedGroupList;
			bool filtered = ui->filterBox->isChecked();
			

			ble->startBLE(userType, filtered, id);	//start the bluetooth process

			started = true;
			stopped = false;
			//starting the display of  results window
			ClientScanner w;
			w.show();
			w.exec();
		}
	}
	else if (p1 == ui->stop) {
		std::ofstream ofs;
		ofs.open("resultList.txt", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
		ui->start->released();
	}
	else if(p1 == ui->deleteButton) {

		auto it = std::find(selectedGroupList.begin(), selectedGroupList.end(), ui->deleteFilter->toPlainText().QString::toStdString().c_str());

		if (it == selectedGroupList.end())
		{
			// name not in vector
		}
		else
		{
			std::string updatedList;
			selectedGroupList.erase(it);
			for (int i = 0; i < selectedGroupList.size(); i++) {
				updatedList.append(selectedGroupList.at(i));
				updatedList.append("\n");
			}
			ui->selectedFilter->setText(QString::fromLocal8Bit(updatedList.c_str()));
		}
	}


}
int count2 = 0;
void ClientApplication::checkBoxFiltered() {
	QCheckBox *p1 = (QCheckBox*)sender();
	if (p1->isChecked() && p1 == ui->filterBox) {
		QString listOfGroupsAsString = QString::fromLocal8Bit(ReadTXT("List.txt", 1, "").c_str());
		ui->filterList_2->setText(listOfGroupsAsString);
		ui->consoleLayer->setText("Showing filters list!!");
	}
	else {
		ui->filterList_2->setText("");
		ui->selectedFilter->setText("");
		ipValue = "";
		filter = "";
		groupList.clear();
		ui->consoleLayer->setText("Filter mode off!!");
		selectedGroupList.clear();
	}


}
std::string ClientApplication::ReadTXT(char filename[], int wordIndex, QString s)
{
	std::fstream myfile(filename, std::ios_base::in);
	if (!myfile) {
		printf("File cannot be opened\n");
		return "";
	}
	std::string tempWord;
	std::string tempSelectedList;
	std::string findText = s.QString::toStdString().c_str();

	while (myfile >> tempWord) {
		if (wordIndex == 1) {
			if (std::find(groupList.begin(), groupList.end(), tempWord) != groupList.end()) {
				myfile >> tempWord;
				myfile >> tempWord;
			}
			else {
				tempSelectedList.append(tempWord);
				groupList.push_back(tempWord);
				tempSelectedList.append("\n");
				myfile >> tempWord;
				myfile >> tempWord;
			}
		}

	}
	myfile.close();
	return tempSelectedList;
}
void ClientApplication::closeEvent(QCloseEvent *event)
{
	std::ofstream ofs;
	ofs.open("resultList.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	event->accept();
	
}