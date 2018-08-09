#pragma once

#include "ui_ServerApplication.h"
#include <QtWidgets/QMainWindow>
#include <iostream>
#include <string>
#include <sstream> 
#include <fstream>
#include <iomanip>
#include <QCloseEvent>
#include <qmessagebox.h>

#include <map>
using namespace std;
#include "BLEScanner.h"
class ServerApplicationClass : public QMainWindow
{
	Q_OBJECT

public:
	ServerApplicationClass(QWidget *parent = Q_NULLPTR);

private:
	Ui::ServerApplicationClass *ui;
private slots:
	void modelPressed();
	void modelClicked();
	void ServerApplicationClass::closeEvent(QCloseEvent *event);

};
