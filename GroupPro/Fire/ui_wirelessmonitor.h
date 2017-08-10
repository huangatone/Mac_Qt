/********************************************************************************
** Form generated from reading UI file 'wirelessmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIRELESSMONITOR_H
#define UI_WIRELESSMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WirelessMonitor
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QCheckBox *zbScan;
    QComboBox *comboBox;
    QGridLayout *gridLayout_4;
    QCheckBox *wifiScan;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_contain;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *WirelessMonitor)
    {
        if (WirelessMonitor->objectName().isEmpty())
            WirelessMonitor->setObjectName(QStringLiteral("WirelessMonitor"));
        WirelessMonitor->resize(956, 562);
        gridLayout = new QGridLayout(WirelessMonitor);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        zbScan = new QCheckBox(WirelessMonitor);
        zbScan->setObjectName(QStringLiteral("zbScan"));
        zbScan->setEnabled(true);

        gridLayout_3->addWidget(zbScan, 0, 1, 1, 1);

        comboBox = new QComboBox(WirelessMonitor);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_3->addWidget(comboBox, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 3, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        wifiScan = new QCheckBox(WirelessMonitor);
        wifiScan->setObjectName(QStringLiteral("wifiScan"));
        wifiScan->setChecked(false);

        gridLayout_4->addWidget(wifiScan, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_4, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        widget_contain = new QWidget(WirelessMonitor);
        widget_contain->setObjectName(QStringLiteral("widget_contain"));
        gridLayout_2 = new QGridLayout(widget_contain);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(widget_contain);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setLineWidth(2);
        tableWidget->setShowGrid(false);
        tableWidget->setColumnCount(6);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(20);

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout->addWidget(widget_contain, 2, 0, 1, 4);


        retranslateUi(WirelessMonitor);
        QObject::connect(wifiScan, SIGNAL(toggled(bool)), WirelessMonitor, SLOT(onScan(bool)));
        QObject::connect(zbScan, SIGNAL(toggled(bool)), WirelessMonitor, SLOT(onzbScan(bool)));

        QMetaObject::connectSlotsByName(WirelessMonitor);
    } // setupUi

    void retranslateUi(QWidget *WirelessMonitor)
    {
        WirelessMonitor->setWindowTitle(QApplication::translate("WirelessMonitor", "Wireless Monitor", Q_NULLPTR));
        zbScan->setText(QApplication::translate("WirelessMonitor", "ZigBee Scan", Q_NULLPTR));
        wifiScan->setText(QApplication::translate("WirelessMonitor", "WiFi Scan", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("WirelessMonitor", "SSID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("WirelessMonitor", "RSSI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("WirelessMonitor", "Rate Mbps", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("WirelessMonitor", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("WirelessMonitor", "Channel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WirelessMonitor: public Ui_WirelessMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIRELESSMONITOR_H
