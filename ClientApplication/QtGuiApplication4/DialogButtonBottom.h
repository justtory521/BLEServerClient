#ifndef DIALOGBUTTONBOTTOM_H
#define DIALOGBUTTONBOTTOM_H


using namespace Platform;
using namespace Windows::Devices;
#include <iostream>
#include <fstream>
using namespace std;
#include <QLabel>
#include <string>
#include <sstream> 
#include <QtWidgets/QDialog>
#include "ui_DialogButtonBottom.h"

QT_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui {
	class ClientScanner;
}
QT_END_NAMESPACE
class ClientScanner : public QDialog
{
	Q_OBJECT

public:
	explicit ClientScanner(QWidget *parent = 0);
	~ClientScanner();
private:
	Ui::ClientScanner *ui;

private slots:
	void scanPressed();
	void closeEvent(QCloseEvent *event);

};

#endif 