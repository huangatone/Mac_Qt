/********************************************************************************
** Form generated from reading UI file 'flstartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLSTARTPAGE_H
#define UI_FLSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FLStartPage
{
public:
    QGridLayout *gridLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_9;
    QLabel *label_9;
    QPushButton *btnOTA;
    QLabel *imgLabel_7;
    QListWidget *listWidget_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLabel *imgLabel_5;
    QPushButton *btnWM;
    QListWidget *listWidget_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *imgLabel_2;
    QListWidget *listWidget_2;
    QLabel *label_4;
    QPushButton *btnUDT;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QPushButton *btnCJ;
    QLabel *imgLabel_1;
    QPushButton *btnOJ;
    QLabel *label_8;
    QListWidget *listWidget;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLabel *imgLabel_4;
    QPushButton *btnNM;
    QLabel *label_7;
    QComboBox *channelBox;
    QListWidget *listWidget_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QLabel *imgLabel_6;
    QPushButton *btnSS;
    QListWidget *listWidget_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QListWidget *listWidget_3;
    QLabel *label_3;
    QLabel *imgLabel_3;
    QPushButton *btnZDT;
    QLabel *imgLogo;

    void setupUi(QWidget *FLStartPage)
    {
        if (FLStartPage->objectName().isEmpty())
            FLStartPage->setObjectName(QStringLiteral("FLStartPage"));
        FLStartPage->resize(1492, 776);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FLStartPage->sizePolicy().hasHeightForWidth());
        FLStartPage->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(FLStartPage);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        scrollArea = new QScrollArea(FLStartPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1390, 650));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(191, 0));
        gridLayout_9 = new QGridLayout(groupBox_7);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 47));
        label_9->setFrameShape(QFrame::WinPanel);
        label_9->setWordWrap(true);
        label_9->setMargin(2);

        gridLayout_9->addWidget(label_9, 0, 0, 1, 1);

        btnOTA = new QPushButton(groupBox_7);
        btnOTA->setObjectName(QStringLiteral("btnOTA"));

        gridLayout_9->addWidget(btnOTA, 2, 0, 1, 1);

        imgLabel_7 = new QLabel(groupBox_7);
        imgLabel_7->setObjectName(QStringLiteral("imgLabel_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(imgLabel_7->sizePolicy().hasHeightForWidth());
        imgLabel_7->setSizePolicy(sizePolicy1);
        imgLabel_7->setMaximumSize(QSize(180, 180));
        imgLabel_7->setMouseTracking(true);
        imgLabel_7->setScaledContents(true);
        imgLabel_7->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(imgLabel_7, 1, 0, 1, 1);

        listWidget_7 = new QListWidget(groupBox_7);
        listWidget_7->setObjectName(QStringLiteral("listWidget_7"));
        listWidget_7->setEnabled(false);
        listWidget_7->setFrameShape(QFrame::NoFrame);

        gridLayout_9->addWidget(listWidget_7, 3, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 1, 6, 1, 1);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(191, 0));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 47));
        label->setFrameShape(QFrame::WinPanel);
        label->setWordWrap(true);
        label->setMargin(2);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        imgLabel_5 = new QLabel(groupBox_5);
        imgLabel_5->setObjectName(QStringLiteral("imgLabel_5"));
        sizePolicy1.setHeightForWidth(imgLabel_5->sizePolicy().hasHeightForWidth());
        imgLabel_5->setSizePolicy(sizePolicy1);
        imgLabel_5->setMaximumSize(QSize(180, 180));
        imgLabel_5->setMouseTracking(true);
        imgLabel_5->setScaledContents(true);

        gridLayout_5->addWidget(imgLabel_5, 1, 0, 1, 1);

        btnWM = new QPushButton(groupBox_5);
        btnWM->setObjectName(QStringLiteral("btnWM"));

        gridLayout_5->addWidget(btnWM, 2, 0, 1, 1);

        listWidget_5 = new QListWidget(groupBox_5);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));
        listWidget_5->setFrameShape(QFrame::NoFrame);

        gridLayout_5->addWidget(listWidget_5, 3, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 1, 4, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(191, 0));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        imgLabel_2 = new QLabel(groupBox_2);
        imgLabel_2->setObjectName(QStringLiteral("imgLabel_2"));
        sizePolicy1.setHeightForWidth(imgLabel_2->sizePolicy().hasHeightForWidth());
        imgLabel_2->setSizePolicy(sizePolicy1);
        imgLabel_2->setMaximumSize(QSize(180, 180));
        imgLabel_2->setMouseTracking(true);
        imgLabel_2->setScaledContents(true);

        gridLayout_2->addWidget(imgLabel_2, 1, 0, 1, 1);

        listWidget_2 = new QListWidget(groupBox_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setFrameShape(QFrame::NoFrame);

        gridLayout_2->addWidget(listWidget_2, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setWordWrap(true);
        label_4->setMargin(2);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        btnUDT = new QPushButton(groupBox_2);
        btnUDT->setObjectName(QStringLiteral("btnUDT"));

        gridLayout_2->addWidget(btnUDT, 2, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_1 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        groupBox_1->setMinimumSize(QSize(191, 420));
        gridLayout = new QGridLayout(groupBox_1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(groupBox_1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFrameShape(QFrame::WinPanel);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setWordWrap(true);
        label_5->setMargin(2);

        gridLayout->addWidget(label_5, 1, 0, 1, 2);

        btnCJ = new QPushButton(groupBox_1);
        btnCJ->setObjectName(QStringLiteral("btnCJ"));

        gridLayout->addWidget(btnCJ, 5, 0, 1, 1);

        imgLabel_1 = new QLabel(groupBox_1);
        imgLabel_1->setObjectName(QStringLiteral("imgLabel_1"));
        sizePolicy1.setHeightForWidth(imgLabel_1->sizePolicy().hasHeightForWidth());
        imgLabel_1->setSizePolicy(sizePolicy1);
        imgLabel_1->setMinimumSize(QSize(0, 0));
        imgLabel_1->setMaximumSize(QSize(180, 180));
        imgLabel_1->setMouseTracking(true);
        imgLabel_1->setScaledContents(true);

        gridLayout->addWidget(imgLabel_1, 2, 0, 1, 2);

        btnOJ = new QPushButton(groupBox_1);
        btnOJ->setObjectName(QStringLiteral("btnOJ"));

        gridLayout->addWidget(btnOJ, 5, 1, 1, 1);

        label_8 = new QLabel(groupBox_1);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        listWidget = new QListWidget(groupBox_1);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(0, 0));
        listWidget->setMaximumSize(QSize(16777215, 500));
        listWidget->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(listWidget, 7, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_1, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(191, 0));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(0, 47));
        label_2->setFrameShape(QFrame::WinPanel);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        label_2->setMargin(2);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 2);

        imgLabel_4 = new QLabel(groupBox_4);
        imgLabel_4->setObjectName(QStringLiteral("imgLabel_4"));
        sizePolicy1.setHeightForWidth(imgLabel_4->sizePolicy().hasHeightForWidth());
        imgLabel_4->setSizePolicy(sizePolicy1);
        imgLabel_4->setMaximumSize(QSize(180, 180));
        imgLabel_4->setMouseTracking(true);
        imgLabel_4->setScaledContents(true);

        gridLayout_4->addWidget(imgLabel_4, 1, 0, 1, 2);

        btnNM = new QPushButton(groupBox_4);
        btnNM->setObjectName(QStringLiteral("btnNM"));

        gridLayout_4->addWidget(btnNM, 2, 0, 1, 2);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label_7, 3, 0, 1, 1);

        channelBox = new QComboBox(groupBox_4);
        channelBox->setObjectName(QStringLiteral("channelBox"));

        gridLayout_4->addWidget(channelBox, 3, 1, 1, 1);

        listWidget_4 = new QListWidget(groupBox_4);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setMaximumSize(QSize(16777215, 500));
        listWidget_4->setFrameShape(QFrame::NoFrame);

        gridLayout_4->addWidget(listWidget_4, 4, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_4, 1, 3, 1, 1);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(191, 0));
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 47));
        label_6->setFrameShape(QFrame::WinPanel);
        label_6->setWordWrap(true);
        label_6->setMargin(2);

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        imgLabel_6 = new QLabel(groupBox_6);
        imgLabel_6->setObjectName(QStringLiteral("imgLabel_6"));
        sizePolicy1.setHeightForWidth(imgLabel_6->sizePolicy().hasHeightForWidth());
        imgLabel_6->setSizePolicy(sizePolicy1);
        imgLabel_6->setMaximumSize(QSize(180, 180));
        imgLabel_6->setMouseTracking(true);
        imgLabel_6->setPixmap(QPixmap(QString::fromUtf8(":/firelink/Resources/icons/wifi-4.png")));
        imgLabel_6->setScaledContents(true);
        imgLabel_6->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(imgLabel_6, 1, 0, 1, 1);

        btnSS = new QPushButton(groupBox_6);
        btnSS->setObjectName(QStringLiteral("btnSS"));

        gridLayout_6->addWidget(btnSS, 2, 0, 1, 1);

        listWidget_6 = new QListWidget(groupBox_6);
        listWidget_6->setObjectName(QStringLiteral("listWidget_6"));
        listWidget_6->setFrameShape(QFrame::NoFrame);

        gridLayout_6->addWidget(listWidget_6, 3, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_6, 1, 5, 1, 1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(191, 320));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        listWidget_3 = new QListWidget(groupBox_3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setFrameShape(QFrame::NoFrame);

        gridLayout_3->addWidget(listWidget_3, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::WinPanel);
        label_3->setWordWrap(true);
        label_3->setMargin(2);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        imgLabel_3 = new QLabel(groupBox_3);
        imgLabel_3->setObjectName(QStringLiteral("imgLabel_3"));
        sizePolicy1.setHeightForWidth(imgLabel_3->sizePolicy().hasHeightForWidth());
        imgLabel_3->setSizePolicy(sizePolicy1);
        imgLabel_3->setMaximumSize(QSize(180, 180));
        imgLabel_3->setMouseTracking(true);
        imgLabel_3->setScaledContents(true);

        gridLayout_3->addWidget(imgLabel_3, 1, 0, 1, 1);

        btnZDT = new QPushButton(groupBox_3);
        btnZDT->setObjectName(QStringLiteral("btnZDT"));

        gridLayout_3->addWidget(btnZDT, 2, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_3, 1, 2, 1, 1);

        imgLogo = new QLabel(scrollAreaWidgetContents);
        imgLogo->setObjectName(QStringLiteral("imgLogo"));
        imgLogo->setEnabled(true);
        sizePolicy2.setHeightForWidth(imgLogo->sizePolicy().hasHeightForWidth());
        imgLogo->setSizePolicy(sizePolicy2);
        imgLogo->setFrameShadow(QFrame::Raised);
        imgLogo->setPixmap(QPixmap(QString::fromUtf8(":/firelink/graphics/logo.png")));
        imgLogo->setScaledContents(true);

        gridLayout_8->addWidget(imgLogo, 0, 0, 1, 7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_7->addWidget(scrollArea, 1, 0, 1, 1);


        retranslateUi(FLStartPage);
        QObject::connect(btnWM, SIGNAL(clicked()), FLStartPage, SLOT(onWM()));
        QObject::connect(btnNM, SIGNAL(clicked()), FLStartPage, SLOT(onNM()));
        QObject::connect(btnUDT, SIGNAL(clicked()), FLStartPage, SLOT(onUDT()));
        QObject::connect(btnZDT, SIGNAL(clicked()), FLStartPage, SLOT(onZDT()));
        QObject::connect(btnCJ, SIGNAL(clicked()), FLStartPage, SLOT(onCJ()));
        QObject::connect(btnOJ, SIGNAL(clicked()), FLStartPage, SLOT(onOJ()));

        QMetaObject::connectSlotsByName(FLStartPage);
    } // setupUi

    void retranslateUi(QWidget *FLStartPage)
    {
        FLStartPage->setWindowTitle(QApplication::translate("FLStartPage", "FLStartPage", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("FLStartPage", "OTA", Q_NULLPTR));
        label_9->setText(QApplication::translate("FLStartPage", "Configuration hardware via OTA", Q_NULLPTR));
        btnOTA->setText(QApplication::translate("FLStartPage", "Launch", Q_NULLPTR));
        imgLabel_7->setText(QString());
        groupBox_5->setTitle(QApplication::translate("FLStartPage", "Wireless Spectrum Monitor", Q_NULLPTR));
        label->setText(QApplication::translate("FLStartPage", "Shows signal  levels in WiFi and ZigBee bands.", Q_NULLPTR));
        imgLabel_5->setText(QApplication::translate("FLStartPage", "Image Label 5", Q_NULLPTR));
        btnWM->setText(QApplication::translate("FLStartPage", "Launch", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FLStartPage", "USB Debug Terminal", Q_NULLPTR));
        imgLabel_2->setText(QApplication::translate("FLStartPage", "Image Label 2", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLStartPage", "Text log and debug commands. Connect to ZC/WIO using USB cable.", Q_NULLPTR));
        btnUDT->setText(QApplication::translate("FLStartPage", "Launch", Q_NULLPTR));
        groupBox_1->setTitle(QApplication::translate("FLStartPage", "Job configurator", Q_NULLPTR));
        label_5->setText(QApplication::translate("FLStartPage", "Create/Edit and download Job File. Connect to ZC using USB cable.", Q_NULLPTR));
        btnCJ->setText(QApplication::translate("FLStartPage", "Create Job", Q_NULLPTR));
        imgLabel_1->setText(QApplication::translate("FLStartPage", "Image Label 1", Q_NULLPTR));
        btnOJ->setText(QApplication::translate("FLStartPage", "Open Job", Q_NULLPTR));
        label_8->setText(QApplication::translate("FLStartPage", "Recently Job", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("FLStartPage", "ZigBee Network Monitor", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLStartPage", "ZigBee Network Monitor using FreeScale USB dongle.\n"
"", Q_NULLPTR));
        imgLabel_4->setText(QApplication::translate("FLStartPage", "Image Label 4", Q_NULLPTR));
        btnNM->setText(QApplication::translate("FLStartPage", "Launch", Q_NULLPTR));
        label_7->setText(QApplication::translate("FLStartPage", "Channel", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("FLStartPage", "Site survery", Q_NULLPTR));
        label_6->setText(QApplication::translate("FLStartPage", "Shows signal  levels in WiFi and ZigBee bands.", Q_NULLPTR));
        imgLabel_6->setText(QString());
        btnSS->setText(QApplication::translate("FLStartPage", "Launch", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("FLStartPage", "ZigBee Debug Terminal", Q_NULLPTR));
        label_3->setText(QApplication::translate("FLStartPage", "Add virtual devices and get network statistics using Mircom NS-100.", Q_NULLPTR));
        imgLabel_3->setText(QApplication::translate("FLStartPage", "Image Label 3", Q_NULLPTR));
        btnZDT->setText(QApplication::translate("FLStartPage", "Launch", Q_NULLPTR));
        imgLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FLStartPage: public Ui_FLStartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLSTARTPAGE_H
