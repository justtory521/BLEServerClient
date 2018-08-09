#ifndef QTGUIAPPLICATION_H
#define QTGUIAPPLICATION_H

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication4.h"
#include <iostream>
#include <string>
#include <sstream> 
#include <fstream>
#include <iomanip>
#include <map>
#include "BLEScanner.h"
#include "DialogButtonBottom.h"
using namespace Platform;
using namespace Windows::Devices;



QT_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
	class ClientApplication;
}
QT_END_NAMESPACE
class ClientApplication : public QMainWindow
{
	Q_OBJECT

public:
	explicit ClientApplication(QWidget *parent = 0);
	~ClientApplication();

private:
	Ui::ClientApplication *ui;
private slots:
	void modelPressed();
	void checkBoxFiltered();
	std::string ReadTXT(char filename[], int wordIndex,QString s);
	void closeEvent(QCloseEvent *event);

};

#endif 