/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication4.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION4_H
#define UI_QTGUIAPPLICATION4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientApplication
{
public:
    QAction *actionEXIT;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *selectedFilter;
    QLabel *filterList_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *selectFilter;
    QLabel *filterList;
    QLabel *selectedList;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *deleteFilter;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_5;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QPushButton *selectFilterBtn;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *deleteButton;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *filterBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *start;
    QPushButton *stop;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *consoleLayer;

    void setupUi(QMainWindow *ClientApplication)
    {
        if (ClientApplication->objectName().isEmpty())
            ClientApplication->setObjectName(QStringLiteral("ClientApplication"));
        ClientApplication->resize(967, 811);
        ClientApplication->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(157, 187, 190, 255), stop:1 rgba(255, 255, 255, 255));"));
        ClientApplication->setIconSize(QSize(50, 50));
        actionEXIT = new QAction(ClientApplication);
        actionEXIT->setObjectName(QStringLiteral("actionEXIT"));
        centralWidget = new QWidget(ClientApplication);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(210, 90, 531, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        selectedFilter = new QLabel(gridLayoutWidget);
        selectedFilter->setObjectName(QStringLiteral("selectedFilter"));
        selectedFilter->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.9, y1:1, x2:1, y2:0, stop:0 rgba(82, 150, 69, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(selectedFilter, 0, 1, 1, 1);

        filterList_2 = new QLabel(gridLayoutWidget);
        filterList_2->setObjectName(QStringLiteral("filterList_2"));
        filterList_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(filterList_2, 0, 0, 1, 1);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 480, 271, 124));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        selectFilter = new QTextEdit(verticalLayoutWidget);
        selectFilter->setObjectName(QStringLiteral("selectFilter"));
        selectFilter->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(selectFilter);

        filterList = new QLabel(centralWidget);
        filterList->setObjectName(QStringLiteral("filterList"));
        filterList->setGeometry(QRect(210, 50, 261, 41));
        filterList->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(7, 55, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Fixedsys\";\n"
"font: 8pt \"Goudy Stout\";"));
        selectedList = new QLabel(centralWidget);
        selectedList->setObjectName(QStringLiteral("selectedList"));
        selectedList->setGeometry(QRect(470, 50, 271, 41));
        selectedList->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(7, 55, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Fixedsys\";\n"
"font: 8pt \"Goudy Stout\";"));
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(480, 480, 261, 124));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        deleteFilter = new QTextEdit(verticalLayoutWidget_2);
        deleteFilter->setObjectName(QStringLiteral("deleteFilter"));
        deleteFilter->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(deleteFilter);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(210, 450, 271, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setStyleSheet(QLatin1String("background-color: rgb(198, 198, 164);\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_4);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(480, 450, 261, 31));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setStyleSheet(QLatin1String("background-color: rgb(198, 198, 164);\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"             \n"
"color: rgb(0, 0, 0);"));
        lineEdit_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(lineEdit_5);

        verticalLayoutWidget_5 = new QWidget(centralWidget);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(210, 600, 271, 30));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        selectFilterBtn = new QPushButton(verticalLayoutWidget_5);
        selectFilterBtn->setObjectName(QStringLiteral("selectFilterBtn"));
        selectFilterBtn->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(39, 55, 142, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(198, 198, 164);"));

        verticalLayout_5->addWidget(selectFilterBtn);

        verticalLayoutWidget_6 = new QWidget(centralWidget);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(480, 600, 261, 30));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        deleteButton = new QPushButton(verticalLayoutWidget_6);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(39, 55, 142, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(198, 198, 164);"));

        verticalLayout_6->addWidget(deleteButton);

        verticalLayoutWidget_7 = new QWidget(centralWidget);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(210, 10, 261, 31));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        filterBox = new QCheckBox(verticalLayoutWidget_7);
        filterBox->setObjectName(QStringLiteral("filterBox"));
        filterBox->setStyleSheet(QLatin1String("font: 14pt \"Niagara Solid\";\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(157, 187, 190, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(198, 198, 164);"));

        verticalLayout_7->addWidget(filterBox);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(210, 640, 531, 59));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        start = new QPushButton(horizontalLayoutWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(198, 198, 164);"));

        horizontalLayout->addWidget(start);

        stop = new QPushButton(horizontalLayoutWidget);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(39, 55, 142, 255), stop:1 rgba(255, 255, 255, 255));\n"
"background-color: rgb(198, 198, 164);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(stop);

        verticalLayoutWidget_9 = new QWidget(centralWidget);
        verticalLayoutWidget_9->setObjectName(QStringLiteral("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(210, 700, 531, 71));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        consoleLayer = new QLabel(verticalLayoutWidget_9);
        consoleLayer->setObjectName(QStringLiteral("consoleLayer"));
        consoleLayer->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_9->addWidget(consoleLayer);

        ClientApplication->setCentralWidget(centralWidget);

        retranslateUi(ClientApplication);
        QObject::connect(start, SIGNAL(released()), ClientApplication, SLOT(show()));

        QMetaObject::connectSlotsByName(ClientApplication);
    } // setupUi

    void retranslateUi(QMainWindow *ClientApplication)
    {
        ClientApplication->setWindowTitle(QApplication::translate("ClientApplication", "Client Application", nullptr));
        actionEXIT->setText(QApplication::translate("ClientApplication", "EXIT", nullptr));
        selectedFilter->setText(QString());
        filterList_2->setText(QString());
        filterList->setText(QApplication::translate("ClientApplication", "Filter List", nullptr));
        selectedList->setText(QApplication::translate("ClientApplication", "    Selected List", nullptr));
        lineEdit_4->setText(QApplication::translate("ClientApplication", "SELECT", nullptr));
        lineEdit_5->setText(QApplication::translate("ClientApplication", "DELETE", nullptr));
        selectFilterBtn->setText(QApplication::translate("ClientApplication", "SELECT FILTER", nullptr));
        deleteButton->setText(QApplication::translate("ClientApplication", "DELETE FILTER", nullptr));
        filterBox->setText(QApplication::translate("ClientApplication", "GROUP FILTER", nullptr));
        start->setText(QApplication::translate("ClientApplication", "START", nullptr));
        stop->setText(QApplication::translate("ClientApplication", "RESTART", nullptr));
        consoleLayer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientApplication: public Ui_ClientApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION4_H
