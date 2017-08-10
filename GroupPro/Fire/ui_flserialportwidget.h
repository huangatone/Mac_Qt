/********************************************************************************
** Form generated from reading UI file 'flserialportwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLSERIALPORTWIDGET_H
#define UI_FLSERIALPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FLSerialportWidget
{
public:
    QGridLayout *gridLayout_2;
    QComboBox *serialPortInfoListBox;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *locationLabel;
    QLabel *vendorIDLabel;
    QLabel *productIDLabel;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FLSerialportWidget)
    {
        if (FLSerialportWidget->objectName().isEmpty())
            FLSerialportWidget->setObjectName(QStringLiteral("FLSerialportWidget"));
        FLSerialportWidget->resize(315, 229);
        gridLayout_2 = new QGridLayout(FLSerialportWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        serialPortInfoListBox = new QComboBox(FLSerialportWidget);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));

        gridLayout_2->addWidget(serialPortInfoListBox, 0, 0, 1, 1);

        pushButton = new QPushButton(FLSerialportWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/go-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        commandLinkButton = new QCommandLinkButton(FLSerialportWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/firelink/Resources/icons/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        gridLayout_2->addWidget(commandLinkButton, 1, 0, 1, 2);

        groupBox = new QGroupBox(FLSerialportWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        descriptionLabel = new QLabel(groupBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout->addWidget(descriptionLabel, 0, 0, 1, 1);

        manufacturerLabel = new QLabel(groupBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        gridLayout->addWidget(manufacturerLabel, 1, 0, 1, 1);

        serialNumberLabel = new QLabel(groupBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        gridLayout->addWidget(serialNumberLabel, 2, 0, 1, 1);

        locationLabel = new QLabel(groupBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        gridLayout->addWidget(locationLabel, 3, 0, 1, 1);

        vendorIDLabel = new QLabel(groupBox);
        vendorIDLabel->setObjectName(QStringLiteral("vendorIDLabel"));

        gridLayout->addWidget(vendorIDLabel, 4, 0, 1, 1);

        productIDLabel = new QLabel(groupBox);
        productIDLabel->setObjectName(QStringLiteral("productIDLabel"));

        gridLayout->addWidget(productIDLabel, 5, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(FLSerialportWidget);

        QMetaObject::connectSlotsByName(FLSerialportWidget);
    } // setupUi

    void retranslateUi(QWidget *FLSerialportWidget)
    {
        FLSerialportWidget->setWindowTitle(QApplication::translate("FLSerialportWidget", "FLSerialportWidget", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLSerialportWidget", "Refresh", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("FLSerialportWidget", "Serial port detail", Q_NULLPTR));
        groupBox->setTitle(QString());
        descriptionLabel->setText(QApplication::translate("FLSerialportWidget", "Description:", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("FLSerialportWidget", "Manufacturer: ", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("FLSerialportWidget", "Serial numbers: ", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("FLSerialportWidget", "Location:", Q_NULLPTR));
        vendorIDLabel->setText(QApplication::translate("FLSerialportWidget", "Vendor ID:", Q_NULLPTR));
        productIDLabel->setText(QApplication::translate("FLSerialportWidget", "Product ID:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLSerialportWidget: public Ui_FLSerialportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLSERIALPORTWIDGET_H
