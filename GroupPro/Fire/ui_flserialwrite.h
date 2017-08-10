/********************************************************************************
** Form generated from reading UI file 'flserialwrite.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLSERIALWRITE_H
#define UI_FLSERIALWRITE_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FLDlgSerialWrite
{
public:
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_login;
    QPushButton *pushButton_2;
    QGroupBox *serialPortInfoBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *serialPortInfoListBox;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *locationLabel;
    QLabel *vendorIDLabel;
    QLabel *productIDLabel;

    void setupUi(QDialog *FLDlgSerialWrite)
    {
        if (FLDlgSerialWrite->objectName().isEmpty())
            FLDlgSerialWrite->setObjectName(QStringLiteral("FLDlgSerialWrite"));
        FLDlgSerialWrite->resize(461, 294);
        gridLayout = new QGridLayout(FLDlgSerialWrite);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        progressBar = new QProgressBar(FLDlgSerialWrite);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 2, 1, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 2);

        lineEdit = new QLineEdit(FLDlgSerialWrite);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 3);

        label = new QLabel(FLDlgSerialWrite);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton = new QPushButton(FLDlgSerialWrite);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);

        label_login = new QLabel(FLDlgSerialWrite);
        label_login->setObjectName(QStringLiteral("label_login"));

        gridLayout->addWidget(label_login, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(FLDlgSerialWrite);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 3, 1, 1);

        serialPortInfoBox = new QGroupBox(FLDlgSerialWrite);
        serialPortInfoBox->setObjectName(QStringLiteral("serialPortInfoBox"));
        verticalLayout_2 = new QVBoxLayout(serialPortInfoBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        serialPortInfoListBox = new QComboBox(serialPortInfoBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));

        verticalLayout_2->addWidget(serialPortInfoListBox);

        descriptionLabel = new QLabel(serialPortInfoBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        verticalLayout_2->addWidget(descriptionLabel);

        manufacturerLabel = new QLabel(serialPortInfoBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        verticalLayout_2->addWidget(manufacturerLabel);

        serialNumberLabel = new QLabel(serialPortInfoBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        verticalLayout_2->addWidget(serialNumberLabel);

        locationLabel = new QLabel(serialPortInfoBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        verticalLayout_2->addWidget(locationLabel);

        vendorIDLabel = new QLabel(serialPortInfoBox);
        vendorIDLabel->setObjectName(QStringLiteral("vendorIDLabel"));

        verticalLayout_2->addWidget(vendorIDLabel);

        productIDLabel = new QLabel(serialPortInfoBox);
        productIDLabel->setObjectName(QStringLiteral("productIDLabel"));

        verticalLayout_2->addWidget(productIDLabel);


        gridLayout->addWidget(serialPortInfoBox, 0, 0, 1, 4);


        retranslateUi(FLDlgSerialWrite);

        QMetaObject::connectSlotsByName(FLDlgSerialWrite);
    } // setupUi

    void retranslateUi(QDialog *FLDlgSerialWrite)
    {
        FLDlgSerialWrite->setWindowTitle(QApplication::translate("FLDlgSerialWrite", "FLSerialWrite", Q_NULLPTR));
        label->setText(QApplication::translate("FLDlgSerialWrite", "Password:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLDlgSerialWrite", "OK", Q_NULLPTR));
        label_login->setText(QApplication::translate("FLDlgSerialWrite", "Login...", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FLDlgSerialWrite", "Cancel", Q_NULLPTR));
        serialPortInfoBox->setTitle(QApplication::translate("FLDlgSerialWrite", "Select Serial Port", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("FLDlgSerialWrite", "Description:", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("FLDlgSerialWrite", "Manufacturer: ", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("FLDlgSerialWrite", "Serial numbers: ", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("FLDlgSerialWrite", "Location:", Q_NULLPTR));
        vendorIDLabel->setText(QApplication::translate("FLDlgSerialWrite", "Vendor ID:", Q_NULLPTR));
        productIDLabel->setText(QApplication::translate("FLDlgSerialWrite", "Product ID:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLDlgSerialWrite: public Ui_FLDlgSerialWrite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLSERIALWRITE_H
