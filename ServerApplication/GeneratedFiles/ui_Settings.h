/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QCheckBox *filterBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *secretLabel;
    QPushButton *addNewFilter;
    QTextEdit *deviceGroupText;
    QLabel *groupIDLabel;
    QLabel *deviceGroupLabel;
    QTextEdit *memberText;
    QTextEdit *idText;
    QLabel *memberNameLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *deleteImg;
    QLineEdit *addImg;
    QLineEdit *middleLine;
    QLabel *groupListLabel;
    QLabel *selectedGroupLabel;
    QTextEdit *deleteFilterText;
    QPushButton *deleteFilter;
    QLabel *selectedFilterImg;
    QTextEdit *addFilterText;
    QLabel *filterListImg;
    QPushButton *addFilter;
    QPushButton *openAddFilterScreen;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(842, 651);
        QIcon icon;
        icon.addFile(QStringLiteral("../../40daeb43b2e3e20941ee95abdf84a311.png"), QSize(), QIcon::Normal, QIcon::On);
        Dialog->setWindowIcon(icon);
        Dialog->setStyleSheet(QLatin1String("#Dialog {background-color: qlineargradient(spread:pad, x1:0.044, y1:1, x2:1, y2:0, stop:0 rgba(3, 21, 32, 255), stop:1 rgba(255, 255, 255, 255));}\n"
"\n"
"\n"
"\n"
"\n"
""));
        filterBox = new QCheckBox(Dialog);
        filterBox->setObjectName(QStringLiteral("filterBox"));
        filterBox->setGeometry(QRect(40, 10, 111, 31));
        filterBox->setToolTipDuration(-8);
        filterBox->setStyleSheet(QLatin1String("font: 14pt \"Niagara Solid\";\n"
"color: rgb(0, 255, 255);"));
        gridLayoutWidget_2 = new QWidget(Dialog);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 490, 721, 158));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        secretLabel = new QLabel(gridLayoutWidget_2);
        secretLabel->setObjectName(QStringLiteral("secretLabel"));

        gridLayout_2->addWidget(secretLabel, 2, 1, 1, 1);

        addNewFilter = new QPushButton(gridLayoutWidget_2);
        addNewFilter->setObjectName(QStringLiteral("addNewFilter"));
        addNewFilter->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:1, y1:0.966, x2:0, y2:1, stop:0.238806 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_2->addWidget(addNewFilter, 2, 0, 1, 1);

        deviceGroupText = new QTextEdit(gridLayoutWidget_2);
        deviceGroupText->setObjectName(QStringLiteral("deviceGroupText"));
        deviceGroupText->setEnabled(true);
        deviceGroupText->setMaximumSize(QSize(300, 70));
        deviceGroupText->setStyleSheet(QLatin1String("\n"
"                background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"              "));

        gridLayout_2->addWidget(deviceGroupText, 1, 0, 1, 1);

        groupIDLabel = new QLabel(gridLayoutWidget_2);
        groupIDLabel->setObjectName(QStringLiteral("groupIDLabel"));
        groupIDLabel->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:1, y2:0, stop:0 rgba(27, 93, 62, 255), stop:1 rgba(255, 255, 255, 255));\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: rgb(0, 255, 255);              "));

        gridLayout_2->addWidget(groupIDLabel, 0, 5, 1, 1);

        deviceGroupLabel = new QLabel(gridLayoutWidget_2);
        deviceGroupLabel->setObjectName(QStringLiteral("deviceGroupLabel"));
        deviceGroupLabel->setStyleSheet(QLatin1String("\n"
"background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:1, y2:0, stop:0 rgba(27, 93, 62, 255), stop:1 rgba(255, 255, 255, 255));\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: rgb(0, 255, 255);              "));

        gridLayout_2->addWidget(deviceGroupLabel, 0, 0, 1, 1);

        memberText = new QTextEdit(gridLayoutWidget_2);
        memberText->setObjectName(QStringLiteral("memberText"));
        memberText->setMaximumSize(QSize(300, 70));
        memberText->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"              "));

        gridLayout_2->addWidget(memberText, 1, 1, 1, 1);

        idText = new QTextEdit(gridLayoutWidget_2);
        idText->setObjectName(QStringLiteral("idText"));
        idText->setMaximumSize(QSize(300, 70));
        idText->setStyleSheet(QLatin1String("\n"
"                background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"              "));

        gridLayout_2->addWidget(idText, 1, 5, 1, 1);

        memberNameLabel = new QLabel(gridLayoutWidget_2);
        memberNameLabel->setObjectName(QStringLiteral("memberNameLabel"));
        memberNameLabel->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:1, y2:0, stop:0 rgba(27, 93, 62, 255), stop:1 rgba(255, 255, 255, 255));\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: rgb(0, 255, 255);              "));

        gridLayout_2->addWidget(memberNameLabel, 0, 1, 1, 1);

        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 50, 721, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        deleteImg = new QLineEdit(gridLayoutWidget);
        deleteImg->setObjectName(QStringLiteral("deleteImg"));
        deleteImg->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:1, y2:0, stop:0 rgba(27, 93, 62, 255), stop:1 rgba(255, 255, 255, 255));\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: rgb(0, 255, 255);              "));
        deleteImg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        deleteImg->setReadOnly(true);

        gridLayout->addWidget(deleteImg, 4, 1, 1, 1);

        addImg = new QLineEdit(gridLayoutWidget);
        addImg->setObjectName(QStringLiteral("addImg"));
        addImg->setStyleSheet(QLatin1String("\n"
"          background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:1, y2:0, stop:0 rgba(27, 93, 62, 255), stop:1 rgba(255, 255, 255, 255));\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"              \n"
"color: rgb(0, 255, 255);"));
        addImg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        addImg->setReadOnly(true);

        gridLayout->addWidget(addImg, 4, 0, 1, 1);

        middleLine = new QLineEdit(gridLayoutWidget);
        middleLine->setObjectName(QStringLiteral("middleLine"));
        middleLine->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 8pt \"Microsoft New Tai Lue\";"));
        middleLine->setAlignment(Qt::AlignCenter);
        middleLine->setReadOnly(true);

        gridLayout->addWidget(middleLine, 2, 0, 1, 2);

        groupListLabel = new QLabel(gridLayoutWidget);
        groupListLabel->setObjectName(QStringLiteral("groupListLabel"));
        groupListLabel->setEnabled(true);
        groupListLabel->setMinimumSize(QSize(0, 130));
        groupListLabel->setStyleSheet(QLatin1String("background-color: rgb(211, 211, 211);\n"
"                font: 14pt \"MS Shell Dlg 2\";\n"
"              "));

        gridLayout->addWidget(groupListLabel, 1, 0, 1, 1);

        selectedGroupLabel = new QLabel(gridLayoutWidget);
        selectedGroupLabel->setObjectName(QStringLiteral("selectedGroupLabel"));
        selectedGroupLabel->setMinimumSize(QSize(0, 130));
        selectedGroupLabel->setStyleSheet(QLatin1String("background-color: rgb(211, 211, 211);\n"
"\n"
"              "));

        gridLayout->addWidget(selectedGroupLabel, 1, 1, 1, 1);

        deleteFilterText = new QTextEdit(gridLayoutWidget);
        deleteFilterText->setObjectName(QStringLiteral("deleteFilterText"));
        deleteFilterText->setMaximumSize(QSize(16777215, 50));
        deleteFilterText->setStyleSheet(QLatin1String("\n"
"                background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"              "));

        gridLayout->addWidget(deleteFilterText, 5, 1, 1, 1);

        deleteFilter = new QPushButton(gridLayoutWidget);
        deleteFilter->setObjectName(QStringLiteral("deleteFilter"));
        deleteFilter->setMinimumSize(QSize(356, 0));
        deleteFilter->setMaximumSize(QSize(240, 16777215));
        deleteFilter->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:1, y1:0.966, x2:0, y2:1, stop:0.238806 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout->addWidget(deleteFilter, 10, 1, 1, 1);

        selectedFilterImg = new QLabel(gridLayoutWidget);
        selectedFilterImg->setObjectName(QStringLiteral("selectedFilterImg"));
        selectedFilterImg->setMinimumSize(QSize(350, 0));
        selectedFilterImg->setMaximumSize(QSize(40000, 40000));
        selectedFilterImg->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:1, y2:0, stop:0 rgba(27, 93, 62, 255), stop:1 rgba(255, 255, 255, 255));\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: rgb(0, 255, 255);              "));
        selectedFilterImg->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(selectedFilterImg, 0, 1, 1, 1);

        addFilterText = new QTextEdit(gridLayoutWidget);
        addFilterText->setObjectName(QStringLiteral("addFilterText"));
        addFilterText->setMaximumSize(QSize(16777215, 50));
        addFilterText->setStyleSheet(QLatin1String("\n"
"                background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0.199005 rgba(194, 212, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
"              "));

        gridLayout->addWidget(addFilterText, 5, 0, 1, 1);

        filterListImg = new QLabel(gridLayoutWidget);
        filterListImg->setObjectName(QStringLiteral("filterListImg"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filterListImg->sizePolicy().hasHeightForWidth());
        filterListImg->setSizePolicy(sizePolicy);
        filterListImg->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.512, y1:1, x2:1, y2:0, stop:0 rgba(27, 93, 62, 255), stop:1 rgba(255, 255, 255, 255));\n"
"                font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"color: rgb(0, 255, 255);              "));
        filterListImg->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(filterListImg, 0, 0, 1, 1);

        addFilter = new QPushButton(gridLayoutWidget);
        addFilter->setObjectName(QStringLiteral("addFilter"));
        addFilter->setMinimumSize(QSize(356, 0));
        addFilter->setMaximumSize(QSize(240, 16777215));
        addFilter->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:1, y1:0.966, x2:0, y2:1, stop:0.238806 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout->addWidget(addFilter, 10, 0, 1, 1);

        openAddFilterScreen = new QPushButton(Dialog);
        openAddFilterScreen->setObjectName(QStringLiteral("openAddFilterScreen"));
        openAddFilterScreen->setGeometry(QRect(0, 460, 240, 31));
        openAddFilterScreen->setMaximumSize(QSize(240, 16777215));
        openAddFilterScreen->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.044, y1:1, x2:1, y2:0, stop:0 rgba(0, 0, 127, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Settings", nullptr));
        filterBox->setText(QApplication::translate("Dialog", "FILTER", nullptr));
        secretLabel->setText(QString());
        addNewFilter->setText(QApplication::translate("Dialog", "Add New Filter Family", nullptr));
        deviceGroupText->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupIDLabel->setText(QApplication::translate("Dialog", "GROUP ID", nullptr));
        deviceGroupLabel->setText(QApplication::translate("Dialog", "DEVICE GROUP", nullptr));
        memberText->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        idText->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        memberNameLabel->setText(QApplication::translate("Dialog", "MEMBER NAME", nullptr));
        deleteImg->setText(QApplication::translate("Dialog", "DELETE", nullptr));
        addImg->setText(QApplication::translate("Dialog", "ADD", nullptr));
        middleLine->setText(QApplication::translate("Dialog", "ENTER A GROUP NAME", nullptr));
        groupListLabel->setText(QString());
        selectedGroupLabel->setText(QString());
        deleteFilter->setText(QApplication::translate("Dialog", "DELETE FILTER", nullptr));
        selectedFilterImg->setText(QApplication::translate("Dialog", "SELECTED FILTERS", nullptr));
        filterListImg->setText(QApplication::translate("Dialog", "FILTER LIST", nullptr));
        addFilter->setText(QApplication::translate("Dialog", "ADD FILTER", nullptr));
        openAddFilterScreen->setText(QApplication::translate("Dialog", "ADDING NEW FILTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
