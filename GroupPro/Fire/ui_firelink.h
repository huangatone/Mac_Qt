/********************************************************************************
** Form generated from reading UI file 'firelink.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRELINK_H
#define UI_FIRELINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FireLinkClass
{
public:
    QAction *actionNew_Job;
    QAction *actionSave_Job;
    QAction *actionSave_Job_As;
    QAction *actionDelete_Job;
    QAction *actionExit;
    QAction *actionOpen_Job;
    QAction *actionConnect;
    QAction *actionSendJob;
    QAction *actionUpdateFirmware;
    QAction *actionUsbDebug;
    QAction *actionFloor;
    QAction *actionEdit;
    QAction *actionDelete;
    QAction *actionAdd;
    QAction *actionAbout;
    QAction *actionZigbeedebug;
    QAction *actionWIO;
    QAction *actionZigbee_debug;
    QAction *actionWirelessMonitor;
    QAction *actionZigbeeMonitor;
    QAction *actionSS;
    QAction *actionJobManager;
    QAction *actionOTA;
    QAction *actionOpen_Job_2;
    QAction *actionClean_recent_job;
    QAction *actionPCAP;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FireLinkClass)
    {
        if (FireLinkClass->objectName().isEmpty())
            FireLinkClass->setObjectName(QStringLiteral("FireLinkClass"));
        FireLinkClass->resize(980, 793);
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/sys-stat-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        FireLinkClass->setWindowIcon(icon);
        actionNew_Job = new QAction(FireLinkClass);
        actionNew_Job->setObjectName(QStringLiteral("actionNew_Job"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/firelink/Resources/icons/add-folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Job->setIcon(icon1);
        actionSave_Job = new QAction(FireLinkClass);
        actionSave_Job->setObjectName(QStringLiteral("actionSave_Job"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/firelink/Resources/icons/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_Job->setIcon(icon2);
        actionSave_Job_As = new QAction(FireLinkClass);
        actionSave_Job_As->setObjectName(QStringLiteral("actionSave_Job_As"));
        actionSave_Job_As->setIcon(icon2);
        actionDelete_Job = new QAction(FireLinkClass);
        actionDelete_Job->setObjectName(QStringLiteral("actionDelete_Job"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/firelink/Resources/icons/remove-folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Job->setIcon(icon3);
        actionExit = new QAction(FireLinkClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/firelink/Resources/icons/zone-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionOpen_Job = new QAction(FireLinkClass);
        actionOpen_Job->setObjectName(QStringLiteral("actionOpen_Job"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/firelink/Resources/icons/open-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Job->setIcon(icon5);
        actionConnect = new QAction(FireLinkClass);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/firelink/Resources/icons/connect-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon6);
        actionSendJob = new QAction(FireLinkClass);
        actionSendJob->setObjectName(QStringLiteral("actionSendJob"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/firelink/Resources/icons/dialog-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSendJob->setIcon(icon7);
        actionUpdateFirmware = new QAction(FireLinkClass);
        actionUpdateFirmware->setObjectName(QStringLiteral("actionUpdateFirmware"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/firelink/Resources/icons/firmware_update.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUpdateFirmware->setIcon(icon8);
        actionUsbDebug = new QAction(FireLinkClass);
        actionUsbDebug->setObjectName(QStringLiteral("actionUsbDebug"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/firelink/Resources/icons/terminal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsbDebug->setIcon(icon9);
        actionFloor = new QAction(FireLinkClass);
        actionFloor->setObjectName(QStringLiteral("actionFloor"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/firelink/Resources/icons/floor-plan-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFloor->setIcon(icon10);
        actionEdit = new QAction(FireLinkClass);
        actionEdit->setObjectName(QStringLiteral("actionEdit"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/firelink/Resources/icons/Pencil-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit->setIcon(icon11);
        actionDelete = new QAction(FireLinkClass);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/firelink/Resources/icons/close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon12);
        actionAdd = new QAction(FireLinkClass);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/firelink/Resources/icons/add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon13);
        actionAbout = new QAction(FireLinkClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/firelink/Resources/icons/about-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon14);
        actionZigbeedebug = new QAction(FireLinkClass);
        actionZigbeedebug->setObjectName(QStringLiteral("actionZigbeedebug"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/firelink/Resources/icons/corr-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZigbeedebug->setIcon(icon15);
        actionWIO = new QAction(FireLinkClass);
        actionWIO->setObjectName(QStringLiteral("actionWIO"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/firelink/Resources/icons/wio-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWIO->setIcon(icon16);
        actionZigbee_debug = new QAction(FireLinkClass);
        actionZigbee_debug->setObjectName(QStringLiteral("actionZigbee_debug"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/firelink/Resources/icons/zigbee-test-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZigbee_debug->setIcon(icon17);
        actionWirelessMonitor = new QAction(FireLinkClass);
        actionWirelessMonitor->setObjectName(QStringLiteral("actionWirelessMonitor"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/firelink/Resources/icons/wireless.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWirelessMonitor->setIcon(icon18);
        actionZigbeeMonitor = new QAction(FireLinkClass);
        actionZigbeeMonitor->setObjectName(QStringLiteral("actionZigbeeMonitor"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/firelink/Resources/icons/network-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZigbeeMonitor->setIcon(icon19);
        actionSS = new QAction(FireLinkClass);
        actionSS->setObjectName(QStringLiteral("actionSS"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/firelink/Resources/icons/wifi-4.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSS->setIcon(icon20);
        actionJobManager = new QAction(FireLinkClass);
        actionJobManager->setObjectName(QStringLiteral("actionJobManager"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/firelink/Resources/icons/file-manager-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJobManager->setIcon(icon21);
        actionOTA = new QAction(FireLinkClass);
        actionOTA->setObjectName(QStringLiteral("actionOTA"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/firelink/Resources/icons/OTA_logo_400x400.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOTA->setIcon(icon22);
        actionOpen_Job_2 = new QAction(FireLinkClass);
        actionOpen_Job_2->setObjectName(QStringLiteral("actionOpen_Job_2"));
        actionOpen_Job_2->setIcon(icon5);
        actionClean_recent_job = new QAction(FireLinkClass);
        actionClean_recent_job->setObjectName(QStringLiteral("actionClean_recent_job"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/firelink/Resources/icons/paint-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClean_recent_job->setIcon(icon23);
        actionPCAP = new QAction(FireLinkClass);
        actionPCAP->setObjectName(QStringLiteral("actionPCAP"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/firelink/Resources/icons/network-play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPCAP->setIcon(icon24);
        centralWidget = new QWidget(FireLinkClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        FireLinkClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FireLinkClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 980, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        FireLinkClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FireLinkClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(42, 42));
        FireLinkClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FireLinkClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FireLinkClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Job);
        menuFile->addAction(actionOpen_Job_2);
        menuFile->addAction(actionSave_Job);
        menuFile->addAction(actionSave_Job_As);
        menuFile->addAction(actionDelete_Job);
        menuFile->addAction(actionClean_recent_job);
        menuFile->addAction(actionExit);
        menuView->addAction(actionJobManager);
        menuView->addAction(actionUsbDebug);
        menuView->addAction(actionZigbee_debug);
        menuView->addAction(actionWirelessMonitor);
        menuView->addAction(actionZigbeeMonitor);
        menuView->addAction(actionSS);
        menuEdit->addAction(actionAdd);
        menuEdit->addAction(actionEdit);
        menuEdit->addAction(actionDelete);
        menuHelp->addAction(actionAbout);
        mainToolBar->addAction(actionJobManager);
        mainToolBar->addAction(actionUsbDebug);
        mainToolBar->addAction(actionZigbee_debug);
        mainToolBar->addAction(actionZigbeeMonitor);
        mainToolBar->addAction(actionWirelessMonitor);
        mainToolBar->addAction(actionSS);
        mainToolBar->addAction(actionOTA);
        mainToolBar->addAction(actionPCAP);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);

        retranslateUi(FireLinkClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FireLinkClass);
    } // setupUi

    void retranslateUi(QMainWindow *FireLinkClass)
    {
        FireLinkClass->setWindowTitle(QApplication::translate("FireLinkClass", "FireLink", Q_NULLPTR));
        actionNew_Job->setText(QApplication::translate("FireLinkClass", "New Job", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew_Job->setToolTip(QApplication::translate("FireLinkClass", "Create New Job", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave_Job->setText(QApplication::translate("FireLinkClass", "Save Job", Q_NULLPTR));
        actionSave_Job_As->setText(QApplication::translate("FireLinkClass", "Save Job As", Q_NULLPTR));
        actionDelete_Job->setText(QApplication::translate("FireLinkClass", "Delete Job", Q_NULLPTR));
        actionExit->setText(QApplication::translate("FireLinkClass", "Exit", Q_NULLPTR));
        actionOpen_Job->setText(QApplication::translate("FireLinkClass", "Open_Job", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen_Job->setToolTip(QApplication::translate("FireLinkClass", "Open a job", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConnect->setText(QApplication::translate("FireLinkClass", "Connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("FireLinkClass", "Connect to Zigbee or WIO", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSendJob->setText(QApplication::translate("FireLinkClass", "SendJob", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSendJob->setToolTip(QApplication::translate("FireLinkClass", "Send a Job", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUpdateFirmware->setText(QApplication::translate("FireLinkClass", "UpdateFirmware", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUpdateFirmware->setToolTip(QApplication::translate("FireLinkClass", "Update Firmware", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUsbDebug->setText(QApplication::translate("FireLinkClass", "USB Debug Terminal", Q_NULLPTR));
        actionFloor->setText(QApplication::translate("FireLinkClass", "Floor View", Q_NULLPTR));
        actionEdit->setText(QApplication::translate("FireLinkClass", "Edit", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("FireLinkClass", "Delete", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("FireLinkClass", "Add", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("FireLinkClass", "About", Q_NULLPTR));
        actionZigbeedebug->setText(QApplication::translate("FireLinkClass", "Zigbee", Q_NULLPTR));
        actionWIO->setText(QApplication::translate("FireLinkClass", "WIO", Q_NULLPTR));
        actionZigbee_debug->setText(QApplication::translate("FireLinkClass", "ZigBee Debug Terminal", Q_NULLPTR));
        actionWirelessMonitor->setText(QApplication::translate("FireLinkClass", "Wireless Spectrum Monitor", Q_NULLPTR));
        actionZigbeeMonitor->setText(QApplication::translate("FireLinkClass", "Network Monitor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZigbeeMonitor->setToolTip(QApplication::translate("FireLinkClass", "Network Monitor", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSS->setText(QApplication::translate("FireLinkClass", "SS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSS->setToolTip(QApplication::translate("FireLinkClass", "Site survey", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionJobManager->setText(QApplication::translate("FireLinkClass", "JobManager", Q_NULLPTR));
        actionOTA->setText(QApplication::translate("FireLinkClass", "OTA", Q_NULLPTR));
        actionOpen_Job_2->setText(QApplication::translate("FireLinkClass", "Open Job", Q_NULLPTR));
        actionClean_recent_job->setText(QApplication::translate("FireLinkClass", "Clean recent job", Q_NULLPTR));
        actionPCAP->setText(QApplication::translate("FireLinkClass", "PCAP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPCAP->setToolTip(QApplication::translate("FireLinkClass", "Network Monitor (Recorded)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FireLinkClass", "Tab 1", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("FireLinkClass", "Job", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("FireLinkClass", "View", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("FireLinkClass", "Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("FireLinkClass", "Help", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("FireLinkClass", "MainBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FireLinkClass: public Ui_FireLinkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRELINK_H
