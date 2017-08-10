/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "flfloorview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionQuit;
    QAction *actionConfigure;
    QAction *actionAbout;
    QAction *actionClearAll;
    QWidget *mainWidget;
    QGridLayout *mainLayout;
    QSplitter *splitter;
    QTabWidget *frameWidget;
    QWidget *trafficTab;
    QGridLayout *trafficLayout;
    QTableWidget *trafficView;
    QWidget *nwkInfoTab;
    QGridLayout *nwkLayout;
    QTableWidget *nwkInfoView;
    QWidget *macFrameTab;
    QGridLayout *macLayout;
    QTableWidget *macFrameView;
    QWidget *ztcFrameTab;
    QGridLayout *ztcLayout;
    QTableWidget *ztcFrameView;
    QWidget *tab;
    QGridLayout *gridLayout;
    FLFloorView *widget;
    QTabWidget *tabWidget2;
    QWidget *rawTab;
    QGridLayout *rawLayout;
    QTableWidget *rawView;
    QStatusBar *statusBar;
    QDockWidget *deviceDockWidget;
    QWidget *deviceLayout;
    QGridLayout *gridLayout_2;
    QTableWidget *deviceView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QDockWidget *networkDockWidget;
    QWidget *networkWidget;
    QGridLayout *networkLayout;
    QTreeView *networkView;
    QDockWidget *propertyDockWidget;
    QWidget *propertyWidget;
    QGridLayout *propertyLayout;
    QTableView *propertyView;
    QDockWidget *frameDecodeDockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *frameDecodeLayout;
    QSplitter *frameDecodeSplitter;
    QTreeWidget *frameDecodeView;
    QTableWidget *frameHexView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 800);
        MainWindow->setDockNestingEnabled(true);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/connect-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConnect->setIcon(icon);
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/firelink/Resources/icons/disconnect-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDisconnect->setIcon(icon1);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/firelink/Resources/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QStringLiteral("actionConfigure"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/firelink/Resources/icons/job-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/firelink/Resources/icons/dev-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionClearAll = new QAction(MainWindow);
        actionClearAll->setObjectName(QStringLiteral("actionClearAll"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/firelink/Resources/icons/selection.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearAll->setIcon(icon5);
        mainWidget = new QWidget(MainWindow);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainLayout = new QGridLayout(mainWidget);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(mainWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frameWidget = new QTabWidget(splitter);
        frameWidget->setObjectName(QStringLiteral("frameWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameWidget->sizePolicy().hasHeightForWidth());
        frameWidget->setSizePolicy(sizePolicy);
        frameWidget->setLayoutDirection(Qt::LeftToRight);
        frameWidget->setAutoFillBackground(false);
        frameWidget->setTabPosition(QTabWidget::North);
        frameWidget->setTabShape(QTabWidget::Rounded);
        frameWidget->setElideMode(Qt::ElideNone);
        frameWidget->setDocumentMode(false);
        frameWidget->setTabsClosable(false);
        frameWidget->setMovable(true);
        frameWidget->setTabBarAutoHide(true);
        trafficTab = new QWidget();
        trafficTab->setObjectName(QStringLiteral("trafficTab"));
        trafficLayout = new QGridLayout(trafficTab);
        trafficLayout->setSpacing(6);
        trafficLayout->setContentsMargins(11, 11, 11, 11);
        trafficLayout->setObjectName(QStringLiteral("trafficLayout"));
        trafficLayout->setContentsMargins(0, 0, 0, 0);
        trafficView = new QTableWidget(trafficTab);
        if (trafficView->columnCount() < 11)
            trafficView->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        trafficView->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        trafficView->setObjectName(QStringLiteral("trafficView"));
        trafficView->setFrameShape(QFrame::StyledPanel);
        trafficView->setFrameShadow(QFrame::Plain);
        trafficView->setLineWidth(1);
        trafficView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        trafficView->setAlternatingRowColors(true);
        trafficView->setSelectionMode(QAbstractItemView::SingleSelection);
        trafficView->setSelectionBehavior(QAbstractItemView::SelectRows);
        trafficView->setShowGrid(false);
        trafficView->setGridStyle(Qt::NoPen);
        trafficView->horizontalHeader()->setCascadingSectionResizes(false);
        trafficView->horizontalHeader()->setDefaultSectionSize(60);
        trafficView->horizontalHeader()->setHighlightSections(false);
        trafficView->horizontalHeader()->setMinimumSectionSize(20);
        trafficView->horizontalHeader()->setStretchLastSection(true);
        trafficView->verticalHeader()->setVisible(false);
        trafficView->verticalHeader()->setDefaultSectionSize(20);
        trafficView->verticalHeader()->setHighlightSections(false);
        trafficView->verticalHeader()->setMinimumSectionSize(20);

        trafficLayout->addWidget(trafficView, 0, 0, 1, 1);

        frameWidget->addTab(trafficTab, QString());
        nwkInfoTab = new QWidget();
        nwkInfoTab->setObjectName(QStringLiteral("nwkInfoTab"));
        nwkLayout = new QGridLayout(nwkInfoTab);
        nwkLayout->setSpacing(6);
        nwkLayout->setContentsMargins(11, 11, 11, 11);
        nwkLayout->setObjectName(QStringLiteral("nwkLayout"));
        nwkLayout->setContentsMargins(0, 0, 0, 0);
        nwkInfoView = new QTableWidget(nwkInfoTab);
        if (nwkInfoView->columnCount() < 13)
            nwkInfoView->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(8, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(9, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(10, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(11, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        nwkInfoView->setHorizontalHeaderItem(12, __qtablewidgetitem23);
        nwkInfoView->setObjectName(QStringLiteral("nwkInfoView"));
        nwkInfoView->setFrameShape(QFrame::StyledPanel);
        nwkInfoView->setFrameShadow(QFrame::Plain);
        nwkInfoView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        nwkInfoView->setAlternatingRowColors(true);
        nwkInfoView->setSelectionMode(QAbstractItemView::SingleSelection);
        nwkInfoView->setSelectionBehavior(QAbstractItemView::SelectRows);
        nwkInfoView->setShowGrid(false);
        nwkInfoView->setGridStyle(Qt::NoPen);
        nwkInfoView->horizontalHeader()->setDefaultSectionSize(60);
        nwkInfoView->horizontalHeader()->setHighlightSections(false);
        nwkInfoView->horizontalHeader()->setMinimumSectionSize(20);
        nwkInfoView->horizontalHeader()->setStretchLastSection(true);
        nwkInfoView->verticalHeader()->setVisible(false);
        nwkInfoView->verticalHeader()->setDefaultSectionSize(20);
        nwkInfoView->verticalHeader()->setHighlightSections(false);
        nwkInfoView->verticalHeader()->setMinimumSectionSize(20);

        nwkLayout->addWidget(nwkInfoView, 0, 0, 1, 1);

        frameWidget->addTab(nwkInfoTab, QString());
        macFrameTab = new QWidget();
        macFrameTab->setObjectName(QStringLiteral("macFrameTab"));
        macLayout = new QGridLayout(macFrameTab);
        macLayout->setSpacing(6);
        macLayout->setContentsMargins(11, 11, 11, 11);
        macLayout->setObjectName(QStringLiteral("macLayout"));
        macLayout->setContentsMargins(0, 0, 0, 0);
        macFrameView = new QTableWidget(macFrameTab);
        if (macFrameView->columnCount() < 13)
            macFrameView->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(7, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(8, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(9, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(10, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(11, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        macFrameView->setHorizontalHeaderItem(12, __qtablewidgetitem36);
        macFrameView->setObjectName(QStringLiteral("macFrameView"));
        macFrameView->setFrameShape(QFrame::StyledPanel);
        macFrameView->setFrameShadow(QFrame::Plain);
        macFrameView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        macFrameView->setAlternatingRowColors(true);
        macFrameView->setSelectionMode(QAbstractItemView::SingleSelection);
        macFrameView->setSelectionBehavior(QAbstractItemView::SelectRows);
        macFrameView->setShowGrid(false);
        macFrameView->setGridStyle(Qt::NoPen);
        macFrameView->horizontalHeader()->setDefaultSectionSize(60);
        macFrameView->horizontalHeader()->setHighlightSections(false);
        macFrameView->horizontalHeader()->setMinimumSectionSize(20);
        macFrameView->horizontalHeader()->setStretchLastSection(true);
        macFrameView->verticalHeader()->setVisible(false);
        macFrameView->verticalHeader()->setDefaultSectionSize(20);
        macFrameView->verticalHeader()->setHighlightSections(false);
        macFrameView->verticalHeader()->setMinimumSectionSize(20);

        macLayout->addWidget(macFrameView, 0, 0, 1, 1);

        frameWidget->addTab(macFrameTab, QString());
        ztcFrameTab = new QWidget();
        ztcFrameTab->setObjectName(QStringLiteral("ztcFrameTab"));
        ztcLayout = new QGridLayout(ztcFrameTab);
        ztcLayout->setSpacing(6);
        ztcLayout->setContentsMargins(11, 11, 11, 11);
        ztcLayout->setObjectName(QStringLiteral("ztcLayout"));
        ztcLayout->setContentsMargins(0, 0, 0, 0);
        ztcFrameView = new QTableWidget(ztcFrameTab);
        if (ztcFrameView->columnCount() < 8)
            ztcFrameView->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(6, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        ztcFrameView->setHorizontalHeaderItem(7, __qtablewidgetitem44);
        ztcFrameView->setObjectName(QStringLiteral("ztcFrameView"));
        ztcFrameView->setFrameShape(QFrame::StyledPanel);
        ztcFrameView->setFrameShadow(QFrame::Plain);
        ztcFrameView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ztcFrameView->setAlternatingRowColors(true);
        ztcFrameView->setSelectionMode(QAbstractItemView::SingleSelection);
        ztcFrameView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ztcFrameView->setShowGrid(false);
        ztcFrameView->setGridStyle(Qt::NoPen);
        ztcFrameView->horizontalHeader()->setDefaultSectionSize(60);
        ztcFrameView->horizontalHeader()->setHighlightSections(false);
        ztcFrameView->horizontalHeader()->setMinimumSectionSize(20);
        ztcFrameView->horizontalHeader()->setStretchLastSection(true);
        ztcFrameView->verticalHeader()->setVisible(false);
        ztcFrameView->verticalHeader()->setDefaultSectionSize(20);
        ztcFrameView->verticalHeader()->setHighlightSections(false);
        ztcFrameView->verticalHeader()->setMinimumSectionSize(20);

        ztcLayout->addWidget(ztcFrameView, 0, 0, 1, 1);

        frameWidget->addTab(ztcFrameTab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        widget = new FLFloorView(tab);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        frameWidget->addTab(tab, QString());
        splitter->addWidget(frameWidget);
        tabWidget2 = new QTabWidget(splitter);
        tabWidget2->setObjectName(QStringLiteral("tabWidget2"));
        rawTab = new QWidget();
        rawTab->setObjectName(QStringLiteral("rawTab"));
        rawLayout = new QGridLayout(rawTab);
        rawLayout->setSpacing(0);
        rawLayout->setContentsMargins(11, 11, 11, 11);
        rawLayout->setObjectName(QStringLiteral("rawLayout"));
        rawLayout->setContentsMargins(0, 0, 0, 0);
        rawView = new QTableWidget(rawTab);
        if (rawView->columnCount() < 6)
            rawView->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        rawView->setHorizontalHeaderItem(0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        rawView->setHorizontalHeaderItem(1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        rawView->setHorizontalHeaderItem(2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        rawView->setHorizontalHeaderItem(3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        rawView->setHorizontalHeaderItem(4, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        rawView->setHorizontalHeaderItem(5, __qtablewidgetitem50);
        rawView->setObjectName(QStringLiteral("rawView"));
        rawView->setFrameShape(QFrame::StyledPanel);
        rawView->setFrameShadow(QFrame::Plain);
        rawView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        rawView->setAlternatingRowColors(true);
        rawView->setSelectionMode(QAbstractItemView::SingleSelection);
        rawView->setSelectionBehavior(QAbstractItemView::SelectRows);
        rawView->setShowGrid(false);
        rawView->setGridStyle(Qt::NoPen);
        rawView->setSortingEnabled(false);
        rawView->setWordWrap(true);
        rawView->horizontalHeader()->setVisible(false);
        rawView->horizontalHeader()->setDefaultSectionSize(60);
        rawView->horizontalHeader()->setHighlightSections(false);
        rawView->horizontalHeader()->setMinimumSectionSize(1);
        rawView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        rawView->horizontalHeader()->setStretchLastSection(true);
        rawView->verticalHeader()->setVisible(false);
        rawView->verticalHeader()->setCascadingSectionResizes(false);
        rawView->verticalHeader()->setDefaultSectionSize(20);
        rawView->verticalHeader()->setMinimumSectionSize(0);

        rawLayout->addWidget(rawView, 0, 0, 1, 1);

        tabWidget2->addTab(rawTab, QString());
        splitter->addWidget(tabWidget2);

        mainLayout->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(mainWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        deviceDockWidget = new QDockWidget(MainWindow);
        deviceDockWidget->setObjectName(QStringLiteral("deviceDockWidget"));
        deviceDockWidget->setMinimumSize(QSize(140, 141));
        deviceDockWidget->setFloating(false);
        deviceLayout = new QWidget();
        deviceLayout->setObjectName(QStringLiteral("deviceLayout"));
        gridLayout_2 = new QGridLayout(deviceLayout);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        deviceView = new QTableWidget(deviceLayout);
        if (deviceView->columnCount() < 2)
            deviceView->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        deviceView->setHorizontalHeaderItem(0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        deviceView->setHorizontalHeaderItem(1, __qtablewidgetitem52);
        if (deviceView->rowCount() < 13)
            deviceView->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(2, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(3, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(4, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(5, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(6, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(7, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(8, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(9, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(10, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(11, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        deviceView->setVerticalHeaderItem(12, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        deviceView->setItem(0, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        deviceView->setItem(1, 0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        deviceView->setItem(2, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        deviceView->setItem(3, 0, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        deviceView->setItem(4, 0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        deviceView->setItem(5, 0, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        deviceView->setItem(6, 0, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        deviceView->setItem(7, 0, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        deviceView->setItem(8, 0, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        deviceView->setItem(9, 0, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        deviceView->setItem(10, 0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        deviceView->setItem(11, 0, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        deviceView->setItem(12, 0, __qtablewidgetitem78);
        deviceView->setObjectName(QStringLiteral("deviceView"));
        deviceView->setFrameShape(QFrame::StyledPanel);
        deviceView->setFrameShadow(QFrame::Plain);
        deviceView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        deviceView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        deviceView->setAlternatingRowColors(true);
        deviceView->setSelectionMode(QAbstractItemView::NoSelection);
        deviceView->setShowGrid(false);
        deviceView->setGridStyle(Qt::NoPen);
        deviceView->setSortingEnabled(false);
        deviceView->horizontalHeader()->setDefaultSectionSize(120);
        deviceView->horizontalHeader()->setHighlightSections(false);
        deviceView->horizontalHeader()->setMinimumSectionSize(1);
        deviceView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        deviceView->horizontalHeader()->setStretchLastSection(true);
        deviceView->verticalHeader()->setVisible(false);
        deviceView->verticalHeader()->setDefaultSectionSize(20);

        gridLayout_2->addWidget(deviceView, 0, 0, 1, 3);

        pushButton = new QPushButton(deviceLayout);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setIcon(icon);

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(deviceLayout);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIcon(icon3);

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        deviceDockWidget->setWidget(deviceLayout);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), deviceDockWidget);
        networkDockWidget = new QDockWidget(MainWindow);
        networkDockWidget->setObjectName(QStringLiteral("networkDockWidget"));
        networkDockWidget->setMinimumSize(QSize(140, 140));
        networkDockWidget->setFloating(false);
        networkWidget = new QWidget();
        networkWidget->setObjectName(QStringLiteral("networkWidget"));
        networkLayout = new QGridLayout(networkWidget);
        networkLayout->setSpacing(6);
        networkLayout->setContentsMargins(11, 11, 11, 11);
        networkLayout->setObjectName(QStringLiteral("networkLayout"));
        networkLayout->setContentsMargins(1, 1, 1, 1);
        networkView = new QTreeView(networkWidget);
        networkView->setObjectName(QStringLiteral("networkView"));
        networkView->setEnabled(true);
        networkView->header()->setVisible(false);

        networkLayout->addWidget(networkView, 0, 0, 1, 1);

        networkDockWidget->setWidget(networkWidget);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), networkDockWidget);
        propertyDockWidget = new QDockWidget(MainWindow);
        propertyDockWidget->setObjectName(QStringLiteral("propertyDockWidget"));
        propertyDockWidget->setMinimumSize(QSize(140, 150));
        propertyDockWidget->setFloating(false);
        propertyWidget = new QWidget();
        propertyWidget->setObjectName(QStringLiteral("propertyWidget"));
        propertyLayout = new QGridLayout(propertyWidget);
        propertyLayout->setSpacing(6);
        propertyLayout->setContentsMargins(11, 11, 11, 11);
        propertyLayout->setObjectName(QStringLiteral("propertyLayout"));
        propertyLayout->setContentsMargins(1, 1, 1, 1);
        propertyView = new QTableView(propertyWidget);
        propertyView->setObjectName(QStringLiteral("propertyView"));

        propertyLayout->addWidget(propertyView, 1, 0, 1, 1);

        propertyDockWidget->setWidget(propertyWidget);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), propertyDockWidget);
        frameDecodeDockWidget = new QDockWidget(MainWindow);
        frameDecodeDockWidget->setObjectName(QStringLiteral("frameDecodeDockWidget"));
        frameDecodeDockWidget->setMinimumSize(QSize(300, 307));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        frameDecodeLayout = new QGridLayout(dockWidgetContents);
        frameDecodeLayout->setSpacing(0);
        frameDecodeLayout->setContentsMargins(11, 11, 11, 11);
        frameDecodeLayout->setObjectName(QStringLiteral("frameDecodeLayout"));
        frameDecodeLayout->setContentsMargins(0, 0, 0, 0);
        frameDecodeSplitter = new QSplitter(dockWidgetContents);
        frameDecodeSplitter->setObjectName(QStringLiteral("frameDecodeSplitter"));
        frameDecodeSplitter->setFrameShape(QFrame::NoFrame);
        frameDecodeSplitter->setFrameShadow(QFrame::Plain);
        frameDecodeSplitter->setOrientation(Qt::Vertical);
        frameDecodeSplitter->setChildrenCollapsible(false);
        frameDecodeView = new QTreeWidget(frameDecodeSplitter);
        frameDecodeView->headerItem()->setText(0, QString());
        frameDecodeView->setObjectName(QStringLiteral("frameDecodeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameDecodeView->sizePolicy().hasHeightForWidth());
        frameDecodeView->setSizePolicy(sizePolicy1);
        frameDecodeView->setMinimumSize(QSize(0, 80));
        frameDecodeView->setFrameShape(QFrame::StyledPanel);
        frameDecodeView->setFrameShadow(QFrame::Sunken);
        frameDecodeView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        frameDecodeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        frameDecodeView->setAlternatingRowColors(true);
        frameDecodeView->setIndentation(15);
        frameDecodeSplitter->addWidget(frameDecodeView);
        frameDecodeView->header()->setVisible(false);
        frameDecodeView->header()->setMinimumSectionSize(80);
        frameDecodeView->header()->setProperty("showSortIndicator", QVariant(false));
        frameDecodeView->header()->setStretchLastSection(true);
        frameHexView = new QTableWidget(frameDecodeSplitter);
        if (frameHexView->columnCount() < 3)
            frameHexView->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        frameHexView->setHorizontalHeaderItem(0, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        frameHexView->setHorizontalHeaderItem(1, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        frameHexView->setHorizontalHeaderItem(2, __qtablewidgetitem81);
        frameHexView->setObjectName(QStringLiteral("frameHexView"));
        frameHexView->setMinimumSize(QSize(60, 0));
        frameHexView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        frameHexView->setAlternatingRowColors(true);
        frameHexView->setSelectionMode(QAbstractItemView::NoSelection);
        frameHexView->setSelectionBehavior(QAbstractItemView::SelectRows);
        frameHexView->setShowGrid(false);
        frameHexView->setGridStyle(Qt::NoPen);
        frameHexView->setWordWrap(false);
        frameDecodeSplitter->addWidget(frameHexView);
        frameHexView->horizontalHeader()->setVisible(false);
        frameHexView->horizontalHeader()->setDefaultSectionSize(80);
        frameHexView->horizontalHeader()->setMinimumSectionSize(20);
        frameHexView->horizontalHeader()->setStretchLastSection(true);
        frameHexView->verticalHeader()->setVisible(false);
        frameHexView->verticalHeader()->setDefaultSectionSize(20);
        frameHexView->verticalHeader()->setMinimumSectionSize(20);

        frameDecodeLayout->addWidget(frameDecodeSplitter, 0, 0, 1, 1);

        frameDecodeDockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), frameDecodeDockWidget);

        retranslateUi(MainWindow);

        frameWidget->setCurrentIndex(0);
        tabWidget2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Site Survey Tool v0.01", Q_NULLPTR));
        actionConnect->setText(QApplication::translate("MainWindow", "C&onnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConnect->setToolTip(QApplication::translate("MainWindow", "Connect to serial port", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        actionDisconnect->setText(QApplication::translate("MainWindow", "&Disconnect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisconnect->setToolTip(QApplication::translate("MainWindow", "Disconnect from serial port", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDisconnect->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionConfigure->setText(QApplication::translate("MainWindow", "&Configure", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConfigure->setToolTip(QApplication::translate("MainWindow", "Configure serial port", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConfigure->setShortcut(QApplication::translate("MainWindow", "Alt+C", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "About program", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Alt+A", Q_NULLPTR));
        actionClearAll->setText(QApplication::translate("MainWindow", "&ClearAll", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClearAll->setToolTip(QApplication::translate("MainWindow", "ClearAll", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionClearAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = trafficView->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "No.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = trafficView->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Timestamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = trafficView->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Ch.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = trafficView->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Ln.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = trafficView->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Stack", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = trafficView->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = trafficView->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Message", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = trafficView->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "MAC Src.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = trafficView->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "MAC Dst.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = trafficView->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "MAC Seq.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = trafficView->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Information", Q_NULLPTR));
        frameWidget->setTabText(frameWidget->indexOf(trafficTab), QApplication::translate("MainWindow", "Frame Traffic View", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = nwkInfoView->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "No.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = nwkInfoView->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Timestamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = nwkInfoView->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Ch.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = nwkInfoView->horizontalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Ln.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = nwkInfoView->horizontalHeaderItem(4);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Profile", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = nwkInfoView->horizontalHeaderItem(5);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Ver.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = nwkInfoView->horizontalHeaderItem(6);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Source", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = nwkInfoView->horizontalHeaderItem(7);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Extended PAN ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = nwkInfoView->horizontalHeaderItem(8);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Router", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = nwkInfoView->horizontalHeaderItem(9);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "End-Dev.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = nwkInfoView->horizontalHeaderItem(10);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Depth ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = nwkInfoView->horizontalHeaderItem(11);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = nwkInfoView->horizontalHeaderItem(12);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Tx Offset", Q_NULLPTR));
        frameWidget->setTabText(frameWidget->indexOf(nwkInfoTab), QApplication::translate("MainWindow", "ZigBee Network Layer Information View", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = macFrameView->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "No.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = macFrameView->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Timestamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = macFrameView->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "Ch.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = macFrameView->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "Ln.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = macFrameView->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "Protocol", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = macFrameView->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "LQI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = macFrameView->horizontalHeaderItem(6);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Message", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = macFrameView->horizontalHeaderItem(7);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "Src PAN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = macFrameView->horizontalHeaderItem(8);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "Src.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = macFrameView->horizontalHeaderItem(9);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "Dst PAN", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = macFrameView->horizontalHeaderItem(10);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "Dst.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = macFrameView->horizontalHeaderItem(11);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "Seq.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = macFrameView->horizontalHeaderItem(12);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "Information", Q_NULLPTR));
        frameWidget->setTabText(frameWidget->indexOf(macFrameTab), QApplication::translate("MainWindow", "IEEE 802.15.4 MAC Frame View", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = ztcFrameView->horizontalHeaderItem(0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "No.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = ztcFrameView->horizontalHeaderItem(1);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "Timestamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = ztcFrameView->horizontalHeaderItem(2);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "Ch.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = ztcFrameView->horizontalHeaderItem(3);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "Ln.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = ztcFrameView->horizontalHeaderItem(4);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = ztcFrameView->horizontalHeaderItem(5);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "Message", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = ztcFrameView->horizontalHeaderItem(6);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = ztcFrameView->horizontalHeaderItem(7);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "Information", Q_NULLPTR));
        frameWidget->setTabText(frameWidget->indexOf(ztcFrameTab), QApplication::translate("MainWindow", "ZTC Frame View", Q_NULLPTR));
        frameWidget->setTabText(frameWidget->indexOf(tab), QApplication::translate("MainWindow", "Floor View", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = rawView->horizontalHeaderItem(0);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "No.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = rawView->horizontalHeaderItem(1);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "Timestamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = rawView->horizontalHeaderItem(2);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "Ch.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = rawView->horizontalHeaderItem(3);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "Ln.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = rawView->horizontalHeaderItem(4);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "Rx/Tx", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = rawView->horizontalHeaderItem(5);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "Hex Values", Q_NULLPTR));
        tabWidget2->setTabText(tabWidget2->indexOf(rawTab), QApplication::translate("MainWindow", "Raw Packet", Q_NULLPTR));
        deviceDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Device Manager", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = deviceView->horizontalHeaderItem(0);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "Property", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = deviceView->horizontalHeaderItem(1);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "Value", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = deviceView->verticalHeaderItem(0);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = deviceView->verticalHeaderItem(1);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = deviceView->verticalHeaderItem(2);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = deviceView->verticalHeaderItem(3);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = deviceView->verticalHeaderItem(4);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = deviceView->verticalHeaderItem(5);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = deviceView->verticalHeaderItem(6);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = deviceView->verticalHeaderItem(7);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = deviceView->verticalHeaderItem(8);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = deviceView->verticalHeaderItem(9);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = deviceView->verticalHeaderItem(10);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = deviceView->verticalHeaderItem(11);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = deviceView->verticalHeaderItem(12);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));

        const bool __sortingEnabled = deviceView->isSortingEnabled();
        deviceView->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem66 = deviceView->item(0, 0);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "Serial port", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem67 = deviceView->item(1, 0);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "Channel", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem68 = deviceView->item(2, 0);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem69 = deviceView->item(3, 0);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWindow", "Manufacturer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem70 = deviceView->item(4, 0);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWindow", "Serial number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem71 = deviceView->item(5, 0);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem72 = deviceView->item(6, 0);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWindow", "Vendor Identifier", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem73 = deviceView->item(7, 0);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWindow", "Product Identifier", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem74 = deviceView->item(8, 0);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWindow", "BaudRate", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem75 = deviceView->item(9, 0);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWindow", "Data bits", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem76 = deviceView->item(10, 0);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWindow", "Parity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem77 = deviceView->item(11, 0);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWindow", "Stop bits", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem78 = deviceView->item(12, 0);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWindow", "Flow control", Q_NULLPTR));
        deviceView->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QString());
        pushButton_2->setText(QString());
        networkDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Network Explorer", Q_NULLPTR));
        propertyDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Properties of Node", Q_NULLPTR));
        frameDecodeDockWidget->setWindowTitle(QApplication::translate("MainWindow", "Frame Decode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem79 = frameHexView->horizontalHeaderItem(0);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWindow", "Offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem80 = frameHexView->horizontalHeaderItem(1);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWindow", "Values", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem81 = frameHexView->horizontalHeaderItem(2);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWindow", "Ascii", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
