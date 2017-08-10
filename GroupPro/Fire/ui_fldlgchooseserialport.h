/********************************************************************************
** Form generated from reading UI file 'fldlgchooseserialport.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLDLGCHOOSESERIALPORT_H
#define UI_FLDLGCHOOSESERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FLDlgChooseSerialPort
{
public:
    QGridLayout *gridLayout;
    QGroupBox *serialPortInfoBox;
    QVBoxLayout *verticalLayout;
    QComboBox *serialPortInfoListBox;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *locationLabel;
    QLabel *vendorIDLabel;
    QLabel *productIDLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *FLDlgChooseSerialPort)
    {
        if (FLDlgChooseSerialPort->objectName().isEmpty())
            FLDlgChooseSerialPort->setObjectName(QStringLiteral("FLDlgChooseSerialPort"));
        FLDlgChooseSerialPort->resize(400, 273);
        gridLayout = new QGridLayout(FLDlgChooseSerialPort);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        serialPortInfoBox = new QGroupBox(FLDlgChooseSerialPort);
        serialPortInfoBox->setObjectName(QStringLiteral("serialPortInfoBox"));
        verticalLayout = new QVBoxLayout(serialPortInfoBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        serialPortInfoListBox = new QComboBox(serialPortInfoBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));

        verticalLayout->addWidget(serialPortInfoListBox);

        descriptionLabel = new QLabel(serialPortInfoBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        verticalLayout->addWidget(descriptionLabel);

        manufacturerLabel = new QLabel(serialPortInfoBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        verticalLayout->addWidget(manufacturerLabel);

        serialNumberLabel = new QLabel(serialPortInfoBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        verticalLayout->addWidget(serialNumberLabel);

        locationLabel = new QLabel(serialPortInfoBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        verticalLayout->addWidget(locationLabel);

        vendorIDLabel = new QLabel(serialPortInfoBox);
        vendorIDLabel->setObjectName(QStringLiteral("vendorIDLabel"));

        verticalLayout->addWidget(vendorIDLabel);

        productIDLabel = new QLabel(serialPortInfoBox);
        productIDLabel->setObjectName(QStringLiteral("productIDLabel"));

        verticalLayout->addWidget(productIDLabel);


        gridLayout->addWidget(serialPortInfoBox, 0, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        pushButton = new QPushButton(FLDlgChooseSerialPort);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(FLDlgChooseSerialPort);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 3, 1, 1);


        retranslateUi(FLDlgChooseSerialPort);

        QMetaObject::connectSlotsByName(FLDlgChooseSerialPort);
    } // setupUi

    void retranslateUi(QDialog *FLDlgChooseSerialPort)
    {
        FLDlgChooseSerialPort->setWindowTitle(QApplication::translate("FLDlgChooseSerialPort", "Choose a Port", Q_NULLPTR));
        serialPortInfoBox->setTitle(QApplication::translate("FLDlgChooseSerialPort", "Select Serial Port", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("FLDlgChooseSerialPort", "Description:", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("FLDlgChooseSerialPort", "Manufacturer: ", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("FLDlgChooseSerialPort", "Serial numbers: ", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("FLDlgChooseSerialPort", "Location:", Q_NULLPTR));
        vendorIDLabel->setText(QApplication::translate("FLDlgChooseSerialPort", "Vendor ID:", Q_NULLPTR));
        productIDLabel->setText(QApplication::translate("FLDlgChooseSerialPort", "Product ID:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLDlgChooseSerialPort", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FLDlgChooseSerialPort", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLDlgChooseSerialPort: public Ui_FLDlgChooseSerialPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLDLGCHOOSESERIALPORT_H
