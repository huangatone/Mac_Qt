/********************************************************************************
** Form generated from reading UI file 'flserialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLSERIALWIDGET_H
#define UI_FLSERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FLSerialWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *serialPortInfoBox;
    QGridLayout *gridLayout_2;
    QPushButton *pbFresh;
    QLabel *vendorIDLabel;
    QLabel *productIDLabel;
    QLabel *manufacturerLabel;
    QLabel *descriptionLabel;
    QLabel *locationLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *serialNumberLabel;
    QPushButton *pushButton_5;
    QComboBox *serialPortInfoListBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FLSerialWidget)
    {
        if (FLSerialWidget->objectName().isEmpty())
            FLSerialWidget->setObjectName(QStringLiteral("FLSerialWidget"));
        FLSerialWidget->resize(334, 214);
        gridLayout = new QGridLayout(FLSerialWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, -1);
        serialPortInfoBox = new QGroupBox(FLSerialWidget);
        serialPortInfoBox->setObjectName(QStringLiteral("serialPortInfoBox"));
        gridLayout_2 = new QGridLayout(serialPortInfoBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pbFresh = new QPushButton(serialPortInfoBox);
        pbFresh->setObjectName(QStringLiteral("pbFresh"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbFresh->sizePolicy().hasHeightForWidth());
        pbFresh->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/go-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFresh->setIcon(icon);

        gridLayout_2->addWidget(pbFresh, 7, 1, 1, 1);

        vendorIDLabel = new QLabel(serialPortInfoBox);
        vendorIDLabel->setObjectName(QStringLiteral("vendorIDLabel"));

        gridLayout_2->addWidget(vendorIDLabel, 5, 0, 1, 3);

        productIDLabel = new QLabel(serialPortInfoBox);
        productIDLabel->setObjectName(QStringLiteral("productIDLabel"));

        gridLayout_2->addWidget(productIDLabel, 6, 0, 1, 3);

        manufacturerLabel = new QLabel(serialPortInfoBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        gridLayout_2->addWidget(manufacturerLabel, 2, 0, 1, 3);

        descriptionLabel = new QLabel(serialPortInfoBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout_2->addWidget(descriptionLabel, 1, 0, 1, 3);

        locationLabel = new QLabel(serialPortInfoBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        gridLayout_2->addWidget(locationLabel, 4, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(189, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 7, 0, 1, 1);

        serialNumberLabel = new QLabel(serialPortInfoBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        gridLayout_2->addWidget(serialNumberLabel, 3, 0, 1, 3);

        pushButton_5 = new QPushButton(serialPortInfoBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/firelink/Resources/icons/corr-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);

        gridLayout_2->addWidget(pushButton_5, 7, 2, 1, 1);

        serialPortInfoListBox = new QComboBox(serialPortInfoBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));

        gridLayout_2->addWidget(serialPortInfoListBox, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 0, 1, 1);


        gridLayout->addWidget(serialPortInfoBox, 0, 0, 1, 1);


        retranslateUi(FLSerialWidget);

        QMetaObject::connectSlotsByName(FLSerialWidget);
    } // setupUi

    void retranslateUi(QWidget *FLSerialWidget)
    {
        FLSerialWidget->setWindowTitle(QApplication::translate("FLSerialWidget", "FLSerialWidget", Q_NULLPTR));
        serialPortInfoBox->setTitle(QApplication::translate("FLSerialWidget", "Select Serial Port", Q_NULLPTR));
        pbFresh->setText(QApplication::translate("FLSerialWidget", "Fresh", Q_NULLPTR));
        vendorIDLabel->setText(QApplication::translate("FLSerialWidget", "Vendor ID:", Q_NULLPTR));
        productIDLabel->setText(QApplication::translate("FLSerialWidget", "Product ID:", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("FLSerialWidget", "Manufacturer: ", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("FLSerialWidget", "Description:", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("FLSerialWidget", "Location:", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("FLSerialWidget", "Serial numbers: ", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("FLSerialWidget", "Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLSerialWidget: public Ui_FLSerialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLSERIALWIDGET_H
