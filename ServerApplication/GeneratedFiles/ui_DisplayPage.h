/********************************************************************************
** Form generated from reading UI file 'DisplayPage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYPAGE_H
#define UI_DISPLAYPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayPageOb
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QDialog *DisplayPageOb)
    {
        if (DisplayPageOb->objectName().isEmpty())
            DisplayPageOb->setObjectName(QStringLiteral("DisplayPageOb"));
        DisplayPageOb->resize(1215, 631);
        QIcon icon;
        icon.addFile(QStringLiteral("../../40daeb43b2e3e20941ee95abdf84a311.png"), QSize(), QIcon::Normal, QIcon::Off);
        DisplayPageOb->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(DisplayPageOb);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 70, 981, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 20pt \"MS Shell Dlg 2\";\n"
"selection-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(DisplayPageOb);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 961, 71));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.954726, y1:1, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_3 = new QLabel(DisplayPageOb);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(920, 0, 421, 71));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.954726, y1:1, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_4 = new QLabel(DisplayPageOb);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(980, 70, 361, 561));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 20pt \"MS Shell Dlg 2\";\n"
"selection-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        line_3 = new QFrame(DisplayPageOb);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(260, 0, 20, 71));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(DisplayPageOb);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(910, 0, 20, 71));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        retranslateUi(DisplayPageOb);

        QMetaObject::connectSlotsByName(DisplayPageOb);
    } // setupUi

    void retranslateUi(QDialog *DisplayPageOb)
    {
        DisplayPageOb->setWindowTitle(QApplication::translate("DisplayPageOb", "DISPLAY PAGE", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("DisplayPageOb", "DEVICE			DISTANCE VALUE(CM)", nullptr));
        label_3->setText(QApplication::translate("DisplayPageOb", "LOCATION", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DisplayPageOb: public Ui_DisplayPageOb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYPAGE_H
