/********************************************************************************
** Form generated from reading UI file 'flwidgetzigbeenetworkview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLWIDGETZIGBEENETWORKVIEW_H
#define UI_FLWIDGETZIGBEENETWORKVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>
#include "flfloorview.h"

QT_BEGIN_NAMESPACE

class Ui_FLWidgetZigbeeNetworkView
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *textSearch;
    QPushButton *btnSearch;
    QLabel *labelnWIO;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QLabel *labelNever;
    QLabel *labelStatus;
    QPushButton *pushButton_3;
    QLabel *label_job;
    QLabel *labelJoined_2;
    QLabel *labelJoined;
    QLabel *labelLeft;
    QLabel *labelJoined_4;
    QLabel *labelRecent;
    QLabel *labelRecent_2;
    QLabel *labelJoined_3;
    QLabel *labelJoined_5;
    QLabel *labelRecent_3;
    FLFloorView *widget;
    QTableWidget *tableWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTreeWidget *frameDecodeView;
    QPlainTextEdit *dataText;
    QWidget *tab_3;

    void setupUi(QWidget *FLWidgetZigbeeNetworkView)
    {
        if (FLWidgetZigbeeNetworkView->objectName().isEmpty())
            FLWidgetZigbeeNetworkView->setObjectName(QStringLiteral("FLWidgetZigbeeNetworkView"));
        FLWidgetZigbeeNetworkView->resize(1366, 652);
        gridLayout_5 = new QGridLayout(FLWidgetZigbeeNetworkView);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(2, 3, 3, 3);
        groupBox_2 = new QGroupBox(FLWidgetZigbeeNetworkView);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(1);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        textSearch = new QLineEdit(groupBox_2);
        textSearch->setObjectName(QStringLiteral("textSearch"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textSearch->sizePolicy().hasHeightForWidth());
        textSearch->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(textSearch, 0, 0, 1, 1);

        btnSearch = new QPushButton(groupBox_2);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnSearch->sizePolicy().hasHeightForWidth());
        btnSearch->setSizePolicy(sizePolicy1);
        btnSearch->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(btnSearch, 0, 1, 1, 1);

        labelnWIO = new QLabel(groupBox_2);
        labelnWIO->setObjectName(QStringLiteral("labelnWIO"));

        gridLayout_2->addWidget(labelnWIO, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_2, 0, 3, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(FLWidgetZigbeeNetworkView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(1);
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 1, 15, 1, 1);

        labelNever = new QLabel(groupBox);
        labelNever->setObjectName(QStringLiteral("labelNever"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(117, 237, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        labelNever->setPalette(palette);
        labelNever->setAutoFillBackground(true);
        labelNever->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelNever, 1, 11, 1, 1);

        labelStatus = new QLabel(groupBox);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        gridLayout_3->addWidget(labelStatus, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 1, 16, 1, 1);

        label_job = new QLabel(groupBox);
        label_job->setObjectName(QStringLiteral("label_job"));

        gridLayout_3->addWidget(label_job, 1, 0, 1, 1);

        labelJoined_2 = new QLabel(groupBox);
        labelJoined_2->setObjectName(QStringLiteral("labelJoined_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(255, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelJoined_2->setPalette(palette1);
        labelJoined_2->setAutoFillBackground(true);
        labelJoined_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelJoined_2, 1, 3, 1, 1);

        labelJoined = new QLabel(groupBox);
        labelJoined->setObjectName(QStringLiteral("labelJoined"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(0, 255, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        labelJoined->setPalette(palette2);
        labelJoined->setAutoFillBackground(true);
        labelJoined->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelJoined, 1, 2, 1, 1);

        labelLeft = new QLabel(groupBox);
        labelLeft->setObjectName(QStringLiteral("labelLeft"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush4(QColor(255, 85, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        labelLeft->setPalette(palette3);
        labelLeft->setAutoFillBackground(true);
        labelLeft->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelLeft, 1, 5, 1, 1);

        labelJoined_4 = new QLabel(groupBox);
        labelJoined_4->setObjectName(QStringLiteral("labelJoined_4"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush5(QColor(87, 97, 118, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QBrush brush6(QColor(120, 120, 120, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        labelJoined_4->setPalette(palette4);
        labelJoined_4->setAutoFillBackground(true);
        labelJoined_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelJoined_4, 1, 6, 1, 1);

        labelRecent = new QLabel(groupBox);
        labelRecent->setObjectName(QStringLiteral("labelRecent"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush7(QColor(255, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        labelRecent->setPalette(palette5);
        labelRecent->setAutoFillBackground(true);
        labelRecent->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelRecent, 1, 8, 1, 1);

        labelRecent_2 = new QLabel(groupBox);
        labelRecent_2->setObjectName(QStringLiteral("labelRecent_2"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush8(QColor(170, 170, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        labelRecent_2->setPalette(palette6);
        labelRecent_2->setAutoFillBackground(true);
        labelRecent_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelRecent_2, 1, 9, 1, 1);

        labelJoined_3 = new QLabel(groupBox);
        labelJoined_3->setObjectName(QStringLiteral("labelJoined_3"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush9(QColor(174, 180, 200, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        labelJoined_3->setPalette(palette7);
        labelJoined_3->setAutoFillBackground(true);
        labelJoined_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelJoined_3, 1, 4, 1, 1);

        labelJoined_5 = new QLabel(groupBox);
        labelJoined_5->setObjectName(QStringLiteral("labelJoined_5"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush10(QColor(0, 0, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        labelJoined_5->setPalette(palette8);
        labelJoined_5->setAutoFillBackground(true);
        labelJoined_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelJoined_5, 1, 7, 1, 1);

        labelRecent_3 = new QLabel(groupBox);
        labelRecent_3->setObjectName(QStringLiteral("labelRecent_3"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush11(QColor(26, 170, 18, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        labelRecent_3->setPalette(palette9);
        labelRecent_3->setAutoFillBackground(true);
        labelRecent_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelRecent_3, 1, 10, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        widget = new FLFloorView(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(widget, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 1, 3, 1);

        tableWidget = new QTableWidget(FLWidgetZigbeeNetworkView);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy3);
        tableWidget->setMinimumSize(QSize(600, 0));
        tableWidget->setLineWidth(2);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setShowGrid(false);
        tableWidget->setColumnCount(1);
        tableWidget->horizontalHeader()->setDefaultSectionSize(75);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(20);

        gridLayout_5->addWidget(tableWidget, 1, 0, 1, 1);

        tabWidget = new QTabWidget(FLWidgetZigbeeNetworkView);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::South);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        frameDecodeView = new QTreeWidget(tab);
        frameDecodeView->setObjectName(QStringLiteral("frameDecodeView"));
        sizePolicy3.setHeightForWidth(frameDecodeView->sizePolicy().hasHeightForWidth());
        frameDecodeView->setSizePolicy(sizePolicy3);
        frameDecodeView->setLineWidth(2);
        frameDecodeView->setAlternatingRowColors(true);
        frameDecodeView->setColumnCount(1);
        frameDecodeView->setProperty("showGrid", QVariant(false));

        gridLayout->addWidget(frameDecodeView, 0, 0, 1, 1);

        dataText = new QPlainTextEdit(tab);
        dataText->setObjectName(QStringLiteral("dataText"));

        gridLayout->addWidget(dataText, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout_5->addWidget(tabWidget, 2, 0, 1, 1);


        retranslateUi(FLWidgetZigbeeNetworkView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FLWidgetZigbeeNetworkView);
    } // setupUi

    void retranslateUi(QWidget *FLWidgetZigbeeNetworkView)
    {
        FLWidgetZigbeeNetworkView->setWindowTitle(QApplication::translate("FLWidgetZigbeeNetworkView", "FLWidgetZigbeeNetworkView", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        btnSearch->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Search", Q_NULLPTR));
        labelnWIO->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "WIOs: ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Clear", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Create Job", Q_NULLPTR));
        labelNever->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Inactivity", Q_NULLPTR));
        labelStatus->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Status: ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "FitView", Q_NULLPTR));
        label_job->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Job", Q_NULLPTR));
        labelJoined_2->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "LinkStatus", Q_NULLPTR));
        labelJoined->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Association", Q_NULLPTR));
        labelLeft->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Leave ", Q_NULLPTR));
        labelJoined_4->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "BroadCast", Q_NULLPTR));
        labelRecent->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "NWK", Q_NULLPTR));
        labelRecent_2->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "NWK", Q_NULLPTR));
        labelJoined_3->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "LinkStatus", Q_NULLPTR));
        labelJoined_5->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "MAC", Q_NULLPTR));
        labelRecent_3->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "RX", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FLWidgetZigbeeNetworkView", "Time Stamp", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = frameDecodeView->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("FLWidgetZigbeeNetworkView", "Decoded Frame", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FLWidgetZigbeeNetworkView", "MAC Frame", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("FLWidgetZigbeeNetworkView", "Packet", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLWidgetZigbeeNetworkView: public Ui_FLWidgetZigbeeNetworkView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLWIDGETZIGBEENETWORKVIEW_H
