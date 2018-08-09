#ifndef DISPLAYPAGE_H
#define DISPLAYPAGE_H


using namespace Platform;
using namespace Windows::Devices;
#include <iostream>
#include <fstream>
using namespace std;
#include <QLabel>
#include <string>
#include <sstream> 
#include <QtWidgets/QDialog>
#include "ui_DisplayPage.h"
#include <QCloseEvent>

QT_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
	class DisplayPageOb;
}
QT_END_NAMESPACE
class DisplayPageOb : public QDialog
{
	Q_OBJECT

public:
	explicit DisplayPageOb(QWidget *parent = 0);
	~DisplayPageOb();
	void closeEvent(QCloseEvent *event);
	

private:
	Ui::DisplayPageOb *ui;

private slots:
	void scanPressed();
	void restart();
	void readTXT();
};

#endif 