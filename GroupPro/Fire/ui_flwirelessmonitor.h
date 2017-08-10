/********************************************************************************
** Form generated from reading UI file 'flwirelessmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLWIRELESSMONITOR_H
#define UI_FLWIRELESSMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FLZigbeeMonitor
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbConnect;
    QComboBox *comboBox_2;
    QTabWidget *tabTest;
    QWidget *tab;
    QGridLayout *gridLayout;
    QWidget *widget_contain;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QTreeWidget *treeWidget;
    QTreeWidget *treeWidget_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;
    QPushButton *pbFresh;
    QLabel *label;

    void setupUi(QWidget *FLZigbeeMonitor)
    {
        if (FLZigbeeMonitor->objectName().isEmpty())
            FLZigbeeMonitor->setObjectName(QStringLiteral("FLZigbeeMonitor"));
        FLZigbeeMonitor->resize(810, 664);
        gridLayout_3 = new QGridLayout(FLZigbeeMonitor);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 4, 1, 1);

        pbConnect = new QPushButton(FLZigbeeMonitor);
        pbConnect->setObjectName(QStringLiteral("pbConnect"));

        gridLayout_3->addWidget(pbConnect, 0, 2, 1, 1);

        comboBox_2 = new QComboBox(FLZigbeeMonitor);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_3->addWidget(comboBox_2, 0, 1, 1, 1);

        tabTest = new QTabWidget(FLZigbeeMonitor);
        tabTest->setObjectName(QStringLiteral("tabTest"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget_contain = new QWidget(tab);
        widget_contain->setObjectName(QStringLiteral("widget_contain"));
        gridLayout_2 = new QGridLayout(widget_contain);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(widget_contain);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setLineWidth(3);
        tableWidget->setShowGrid(false);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(tableWidget, 0, 1, 1, 1);

        treeWidget = new QTreeWidget(widget_contain);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        treeWidget_2 = new QTreeWidget(widget_contain);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));

        gridLayout_2->addWidget(treeWidget_2, 0, 2, 1, 1);


        gridLayout->addWidget(widget_contain, 1, 0, 1, 2);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        tabTest->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabTest->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabTest, 1, 0, 1, 5);

        pbFresh = new QPushButton(FLZigbeeMonitor);
        pbFresh->setObjectName(QStringLiteral("pbFresh"));

        gridLayout_3->addWidget(pbFresh, 0, 3, 1, 1);

        label = new QLabel(FLZigbeeMonitor);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);


        retranslateUi(FLZigbeeMonitor);

        tabTest->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FLZigbeeMonitor);
    } // setupUi

    void retranslateUi(QWidget *FLZigbeeMonitor)
    {
        FLZigbeeMonitor->setWindowTitle(QApplication::translate("FLZigbeeMonitor", "FLZigbeeMonitor", Q_NULLPTR));
        pbConnect->setText(QApplication::translate("FLZigbeeMonitor", "Connect", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FLZigbeeMonitor", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FLZigbeeMonitor", "Value", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_2->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("FLZigbeeMonitor", "Commands", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLZigbeeMonitor", "Command file", Q_NULLPTR));
        tabTest->setTabText(tabTest->indexOf(tab), QApplication::translate("FLZigbeeMonitor", "Command", Q_NULLPTR));
        tabTest->setTabText(tabTest->indexOf(tab_2), QApplication::translate("FLZigbeeMonitor", "Moniter", Q_NULLPTR));
        pbFresh->setText(QApplication::translate("FLZigbeeMonitor", "Scan", Q_NULLPTR));
        label->setText(QApplication::translate("FLZigbeeMonitor", "WiFi Adapter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLZigbeeMonitor: public Ui_FLZigbeeMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLWIRELESSMONITOR_H
