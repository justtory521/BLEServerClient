#include "Settings.h"
#include "ServerApplication.h"
#include "qtimer.h"
std::vector<std::string> groupList;
std::vector<std::string> groupList1;
bool check = false;

/*Assigning Actions To Widgets*/
Dialog::Dialog(QWidget *parent) :
	QDialog(parent), ui(new Ui::Dialog)
{
	ui->setupUi(this);
	ui->deviceGroupLabel->hide();
	ui->groupIDLabel->hide();
	ui->memberNameLabel->hide();
	ui->deviceGroupText->hide();
	ui->idText->hide();
	ui->memberText->hide();
	ui->addNewFilter->hide();

	connect(ui->addFilter, SIGNAL(released()), this, SLOT(modelPressed()));
	connect(ui->filterBox, SIGNAL(toggled(bool)), this, SLOT(checkBoxFiltered()));
	connect(ui->deleteFilter, SIGNAL(released()), this, SLOT(modelPressed()));
	connect(ui->addNewFilter, SIGNAL(released()), this, SLOT(modelPressed()));
	connect(ui->openAddFilterScreen, SIGNAL(released()), this, SLOT(modelPressed()));
}
/*Action of filterBox*/
void Dialog::checkBoxFiltered() {
	QCheckBox *p1 = (QCheckBox*)sender();
	if (p1->isChecked() && p1 == ui->filterBox) {	//if filter mode selected
		QString qs = QString::fromLocal8Bit(ReadTXT("ResourceFiles\\List.txt", 1, "").c_str());		//showing the list of filter groups.
		ui->groupListLabel->setText(qs);
	}
	else {
		ui->groupListLabel->setText("NON-FILTER MODE");
		groupList.clear();
		groupList1.clear();
	}

}
/*Filter Button Action*/
void Dialog::modelPressed() {
	QPushButton *p1 = (QPushButton*)sender();
	 if (p1 == ui->addFilter) {	//save the selected filter
		 std::string temp=ui->addFilterText->toPlainText().QString::toStdString().c_str();
		 if (!ui->filterBox->isChecked() || std::find(groupList1.begin(), groupList1.end(), temp) != groupList1.end() || std::find(groupList.begin(), groupList.end(), temp) == groupList.end()) {		//if group name already exists
		 
		 }
		 else {
			 groupList1.push_back(temp);
			 std::string b;
			 for (int i = 0; i < groupList1.size(); i++) {
				 b.append(groupList1.at(i));
				 b.append("\n");
			 }
			 ui->selectedGroupLabel->setText(QString::fromLocal8Bit(b.c_str()));
			 std::ofstream myfile;
			 myfile.open("ResourceFiles\\FilterInfo.txt");
			 if (ui->filterBox->isChecked() && groupList1.size()>0) {
				 myfile << "filtered\n";
				 QString qs1 = ui->addFilterText->toPlainText();
				 for (int i = 0; i < groupList1.size(); i++) {
					 myfile << groupList1.at(i);
					 myfile << "\n";
				 }
				 
			 }
			 else {
				 myfile << "non-filter\n";
			 }
		 }
		
	 }if (p1 == ui->openAddFilterScreen) {
		 ui->deviceGroupLabel->show();
		 ui->groupIDLabel->show();
		 ui->memberNameLabel->show();
		 ui->memberText->show();
		 ui->deviceGroupText->show();
		 ui->idText->show();
		 ui->addNewFilter->show();


	 }
	 else 	 if (p1 == ui->addNewFilter) {	//save the selected filter
		 if (!check) {
			 check = true;
			 QTimer::singleShot(1, ui->secretLabel, &QLabel::show);
			 std::ofstream file("ResourceFiles\\List.txt", std::ios_base::in | std::ios::out | std::ios::app);
			 file.seekp(EOF, ios::end);
			 QString deviceNameText = ui->deviceGroupText->toPlainText();
			 QString memberNameText = ui->memberText->toPlainText();
			 QString IdText = ui->idText->toPlainText();
			 QString mesg ="New Filter Family Added" ;
			 if (deviceNameText.QString::toStdString()._Equal("") || memberNameText.QString::toStdString()._Equal("") || IdText.QString::toStdString()._Equal("")) {
				 mesg = "Cannot ADD Empty";
			 }else{
			 file << '\n';
			 file << deviceNameText.QString::toStdString();
			 file << " ";
			 file << memberNameText.QString::toStdString();
			 file << " ";
			 file << IdText.QString::toStdString();
			 }


			 QFont font = ui->secretLabel->font();
			 font.setPointSize(12);
			 font.setBold(true);
			 ui->secretLabel->setStyleSheet("QLabel { background-color : red; color : blue; }");
			 ui->secretLabel->setFont(font);
			 ui->secretLabel->setText(mesg);
			 ui->deviceGroupText->setText("");
			 ui->memberText->setText("");
			 ui->idText->setText("");
			 QTimer::singleShot(500, ui->secretLabel, &QLabel::hide);
			 QTimer::singleShot(500, this, &Dialog::ActionSlot);

			 /*
			 ui->gridLayout_2->removeWidget(label5);

			 delete label5;
			 */
		 }

	 }
	 else if (p1 == ui->deleteFilter) {
		 auto it = std::find(groupList1.begin(), groupList1.end(), ui->deleteFilterText->toPlainText().QString::toStdString().c_str());

		 if (it == groupList1.end())
		 {
			 // name not in vector
		 }
		 else
		 {
			 std::string b;
			 groupList1.erase(it);
			 for (int i = 0; i < groupList1.size(); i++) {
				 b.append(groupList1.at(i));
				 b.append("\n");
			 }
			 ui->selectedGroupLabel->setText(QString::fromLocal8Bit(b.c_str()));
			 std::ofstream myfile;
			 myfile.open("ResourceFiles\\FilterInfo.txt");
			 if (ui->filterBox->isChecked() && groupList1.size()>0) {
				 myfile << "filtered\n";
				 QString qs1 = ui->addFilterText->toPlainText();
				 for (int i = 0; i < groupList1.size(); i++) {
					 myfile << groupList1.at(i);
					 myfile << "\n";
				 }

			 }
			 else {
				 myfile << "non-filter\n";
			 }
		 }
	 }

}
void Dialog::ActionSlot() {

	check = false;
}
/*Reading the list of Groups from File*/
std::string Dialog::ReadTXT(char filename[], int wordIndex, QString s)
{
	std::fstream myfile(filename, std::ios_base::in);
	if (!myfile) {
		printf("File cannot be opened\n");
		return "";
	}
	std::string a;
	std::string b;
	std::string findText = s.QString::toStdString().c_str();

	while (myfile >> a) {
		if (wordIndex == 1) {	//group filter
			if (std::find(groupList.begin(), groupList.end(), a) != groupList.end()) {		//if group name already exists
				myfile >> a;
				myfile >> a;
			}
			else {
				b.append(a);		//adding the filter group name
				groupList.push_back(a);
				b.append("\n");
				myfile >> a;
				myfile >> a;
			}
		}
	
	}
	myfile.close();
	return b;
}
/*Safe Closing*/
void Dialog::closeEvent(QCloseEvent *event)
{

		groupList.clear();
		groupList1.clear();
		event->accept();
	}
\