#include "DialogButtonBottom.h"
#include "ui_DialogButtonBottom.h"
#include <qtimer.h>
#include <QCloseEvent>
bool work = true;

ClientScanner::ClientScanner(QWidget *parent) :
	QDialog(parent),	ui(new Ui::ClientScanner)
{
	ui->setupUi(this);
	scanPressed();
}

ClientScanner::~ClientScanner()
{
	delete ui;
}

void ClientScanner::scanPressed() {
	//ui->label->setText("");
	ifstream in("resultList.txt");
	std::string tempResultList;
	std::string resultList;
	while (std::getline(in, tempResultList)) {
		resultList.append(tempResultList);
		resultList.append("\n");
	}
	QString qResultList = QString::fromLocal8Bit(resultList.c_str());
	ui->label->setText(qResultList);
	if (work)
		QTimer::singleShot(1, this, SLOT(scanPressed()));
}
/*Safe Closing*/
void ClientScanner::closeEvent(QCloseEvent *event)
{

	std::ofstream myfile;
	myfile.open("resultList.txt");
	myfile.close();
	event->accept();


}
