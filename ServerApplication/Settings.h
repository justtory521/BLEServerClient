#ifndef SETTINGS_H
#define SETTINGS_H


using namespace Platform;
using namespace Windows::Devices;
#include <iostream>
#include <fstream>
using namespace std;
#include <QLabel>
#include <string>
#include <sstream> 
#include <QtWidgets/QDialog>
#include "ui_Settings.h"

QT_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
	class Dialog;
}
QT_END_NAMESPACE
class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = Q_NULLPTR);

private:
	Ui::Dialog *ui;
private slots:
	void modelPressed();
	void Dialog::ActionSlot();
	void checkBoxFiltered();
	std::string ReadTXT(char filename[], int wordIndex, QString s);
	void closeEvent(QCloseEvent *event);
};
#endif 