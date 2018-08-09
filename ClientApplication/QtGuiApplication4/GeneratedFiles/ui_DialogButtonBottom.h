/********************************************************************************
** Form generated from reading UI file 'DialogButtonBottom.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBUTTONBOTTOM_H
#define UI_DIALOGBUTTONBOTTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientScanner
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *ClientScanner)
    {
        if (ClientScanner->objectName().isEmpty())
            ClientScanner->setObjectName(QStringLiteral("ClientScanner"));
        ClientScanner->resize(836, 532);
        ClientScanner->setStyleSheet(QStringLiteral(""));
        verticalLayoutWidget = new QWidget(ClientScanner);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 841, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"alternate-background-color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 0, 0);\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"selection-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);


        retranslateUi(ClientScanner);

        QMetaObject::connectSlotsByName(ClientScanner);
    } // setupUi

    void retranslateUi(QDialog *ClientScanner)
    {
        ClientScanner->setWindowTitle(QApplication::translate("ClientScanner", "SCANNER", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientScanner: public Ui_ClientScanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBUTTONBOTTOM_H
