/********************************************************************************
** Form generated from reading UI file 'ServerApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERAPPLICATION_H
#define UI_SERVERAPPLICATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerApplicationClass
{
public:
    QWidget *centralWidget;
    QPushButton *StartButton;
    QPushButton *Settings;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *ServerApplicationClass)
    {
        if (ServerApplicationClass->objectName().isEmpty())
            ServerApplicationClass->setObjectName(QStringLiteral("ServerApplicationClass"));
        ServerApplicationClass->resize(882, 668);
        QIcon icon;
        icon.addFile(QStringLiteral("../../40daeb43b2e3e20941ee95abdf84a311.png"), QSize(), QIcon::Normal, QIcon::On);
        ServerApplicationClass->setWindowIcon(icon);
        ServerApplicationClass->setStyleSheet(QStringLiteral("border-image: url(:/newPrefix/Bluetooth-Transparent-Background.png);"));
        centralWidget = new QWidget(ServerApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        StartButton = new QPushButton(centralWidget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(230, 330, 331, 81));
        StartButton->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"border-image: url(:/ServerApplication/GreenRoundedButton.png);"));
        Settings = new QPushButton(centralWidget);
        Settings->setObjectName(QStringLiteral("Settings"));
        Settings->setGeometry(QRect(230, 420, 331, 81));
        Settings->setStyleSheet(QStringLiteral("border-image: url(:/ServerApplication/GreenRoundedButton.png);font: 12pt \"MS Shell Dlg 2\";"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(430, 570, 451, 101));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/ServerApplication/logo_web-01.png);"));
        ServerApplicationClass->setCentralWidget(centralWidget);

        retranslateUi(ServerApplicationClass);

        QMetaObject::connectSlotsByName(ServerApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *ServerApplicationClass)
    {
        ServerApplicationClass->setWindowTitle(QApplication::translate("ServerApplicationClass", "Bluetooth Server", nullptr));
        StartButton->setText(QApplication::translate("ServerApplicationClass", "START", nullptr));
        Settings->setText(QApplication::translate("ServerApplicationClass", "SETTINGS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerApplicationClass: public Ui_ServerApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERAPPLICATION_H
