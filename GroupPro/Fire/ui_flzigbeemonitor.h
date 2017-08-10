/********************************************************************************
** Form generated from reading UI file 'flzigbeemonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLZIGBEEMONITOR_H
#define UI_FLZIGBEEMONITOR_H

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
#include <QtWidgets/QLineEdit>
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
    QGridLayout *gridLayout_4;
    QTabWidget *tabTest;
    QWidget *tab;
    QWidget *widget_contain;
    QTableWidget *tableWidget;
    QTreeWidget *treeWidget;
    QTreeWidget *treeWidget_2;
    QTreeWidget *tree_comm_mostused;
    QLineEdit *le_comm;
    QLineEdit *le_data;
    QLabel *lb_find;
    QLineEdit *le_find;
    QCommandLinkButton *p_expand_all;
    QCommandLinkButton *pb_eapand_mostly;
    QPushButton *pb_clear_history;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pbSend_comm;
    QPushButton *pb_reset;
    QPushButton *pb_history_setting;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QTableWidget *tb_monitor;
    QSpacerItem *verticalSpacer;
    QGroupBox *serialPortInfoBox;
    QGridLayout *gridLayout_3;
    QComboBox *serialPortBox;
    QPushButton *pbConnect;
    QPushButton *pbFresh;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *locationLabel;
    QLabel *vendorIDLabel;
    QLabel *productIDLabel;

    void setupUi(QWidget *FLZigbeeMonitor)
    {
        if (FLZigbeeMonitor->objectName().isEmpty())
            FLZigbeeMonitor->setObjectName(QStringLiteral("FLZigbeeMonitor"));
        FLZigbeeMonitor->resize(987, 664);
        gridLayout_4 = new QGridLayout(FLZigbeeMonitor);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabTest = new QTabWidget(FLZigbeeMonitor);
        tabTest->setObjectName(QStringLiteral("tabTest"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabTest->sizePolicy().hasHeightForWidth());
        tabTest->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget_contain = new QWidget(tab);
        widget_contain->setObjectName(QStringLiteral("widget_contain"));
        widget_contain->setGeometry(QRect(9, 38, 768, 544));
        tableWidget = new QTableWidget(widget_contain);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(261, 0, 246, 321));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setLineWidth(3);
        tableWidget->setShowGrid(false);
        tableWidget->verticalHeader()->setVisible(false);
        treeWidget = new QTreeWidget(widget_contain);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("All Commands"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 50, 246, 221));
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        treeWidget->setExpandsOnDoubleClick(false);
        treeWidget_2 = new QTreeWidget(widget_contain);
        treeWidget_2->setObjectName(QStringLiteral("treeWidget_2"));
        treeWidget_2->setGeometry(QRect(513, 0, 246, 321));
        tree_comm_mostused = new QTreeWidget(widget_contain);
        tree_comm_mostused->setObjectName(QStringLiteral("tree_comm_mostused"));
        tree_comm_mostused->setGeometry(QRect(10, 330, 241, 161));
        tree_comm_mostused->setMouseTracking(true);
        tree_comm_mostused->setContextMenuPolicy(Qt::CustomContextMenu);
        tree_comm_mostused->setExpandsOnDoubleClick(false);
        le_comm = new QLineEdit(widget_contain);
        le_comm->setObjectName(QStringLiteral("le_comm"));
        le_comm->setGeometry(QRect(290, 350, 113, 20));
        le_comm->setReadOnly(true);
        le_data = new QLineEdit(widget_contain);
        le_data->setObjectName(QStringLiteral("le_data"));
        le_data->setGeometry(QRect(540, 350, 113, 20));
        lb_find = new QLabel(widget_contain);
        lb_find->setObjectName(QStringLiteral("lb_find"));
        lb_find->setGeometry(QRect(20, 520, 81, 16));
        le_find = new QLineEdit(widget_contain);
        le_find->setObjectName(QStringLiteral("le_find"));
        le_find->setGeometry(QRect(140, 520, 113, 20));
        p_expand_all = new QCommandLinkButton(widget_contain);
        p_expand_all->setObjectName(QStringLiteral("p_expand_all"));
        p_expand_all->setGeometry(QRect(10, 0, 185, 41));
        p_expand_all->setStyleSheet(QLatin1String("border-color: rgb(85, 170, 0);\n"
"border-color: rgb(85, 85, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        p_expand_all->setIcon(icon);
        pb_eapand_mostly = new QCommandLinkButton(widget_contain);
        pb_eapand_mostly->setObjectName(QStringLiteral("pb_eapand_mostly"));
        pb_eapand_mostly->setGeometry(QRect(10, 280, 185, 41));
        pb_eapand_mostly->setIcon(icon);
        pb_clear_history = new QPushButton(tab);
        pb_clear_history->setObjectName(QStringLiteral("pb_clear_history"));
        pb_clear_history->setGeometry(QRect(696, 9, 75, 23));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pb_clear_history->sizePolicy().hasHeightForWidth());
        pb_clear_history->setSizePolicy(sizePolicy2);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 9, 64, 16));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(79, 10, 69, 20));
        pbSend_comm = new QPushButton(tab);
        pbSend_comm->setObjectName(QStringLiteral("pbSend_comm"));
        pbSend_comm->setGeometry(QRect(430, 9, 82, 23));
        sizePolicy2.setHeightForWidth(pbSend_comm->sizePolicy().hasHeightForWidth());
        pbSend_comm->setSizePolicy(sizePolicy2);
        pb_reset = new QPushButton(tab);
        pb_reset->setObjectName(QStringLiteral("pb_reset"));
        pb_reset->setGeometry(QRect(350, 10, 75, 23));
        sizePolicy2.setHeightForWidth(pb_reset->sizePolicy().hasHeightForWidth());
        pb_reset->setSizePolicy(sizePolicy2);
        pb_history_setting = new QPushButton(tab);
        pb_history_setting->setObjectName(QStringLiteral("pb_history_setting"));
        pb_history_setting->setGeometry(QRect(610, 10, 75, 23));
        sizePolicy2.setHeightForWidth(pb_history_setting->sizePolicy().hasHeightForWidth());
        pb_history_setting->setSizePolicy(sizePolicy2);
        tabTest->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tb_monitor = new QTableWidget(tab_2);
        if (tb_monitor->columnCount() < 10)
            tb_monitor->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tb_monitor->setHorizontalHeaderItem(9, __qtablewidgetitem11);
        tb_monitor->setObjectName(QStringLiteral("tb_monitor"));

        gridLayout->addWidget(tb_monitor, 0, 0, 1, 1);

        tabTest->addTab(tab_2, QString());

        gridLayout_4->addWidget(tabTest, 0, 1, 2, 1);

        verticalSpacer = new QSpacerItem(20, 246, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        serialPortInfoBox = new QGroupBox(FLZigbeeMonitor);
        serialPortInfoBox->setObjectName(QStringLiteral("serialPortInfoBox"));
        gridLayout_3 = new QGridLayout(serialPortInfoBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        serialPortBox = new QComboBox(serialPortInfoBox);
        serialPortBox->setObjectName(QStringLiteral("serialPortBox"));

        gridLayout_3->addWidget(serialPortBox, 0, 0, 1, 2);

        pbConnect = new QPushButton(serialPortInfoBox);
        pbConnect->setObjectName(QStringLiteral("pbConnect"));
        sizePolicy2.setHeightForWidth(pbConnect->sizePolicy().hasHeightForWidth());
        pbConnect->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(pbConnect, 7, 0, 1, 1);

        pbFresh = new QPushButton(serialPortInfoBox);
        pbFresh->setObjectName(QStringLiteral("pbFresh"));
        sizePolicy2.setHeightForWidth(pbFresh->sizePolicy().hasHeightForWidth());
        pbFresh->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(pbFresh, 7, 1, 1, 1);

        descriptionLabel = new QLabel(serialPortInfoBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout_3->addWidget(descriptionLabel, 1, 0, 1, 2);

        manufacturerLabel = new QLabel(serialPortInfoBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        gridLayout_3->addWidget(manufacturerLabel, 2, 0, 1, 2);

        serialNumberLabel = new QLabel(serialPortInfoBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        gridLayout_3->addWidget(serialNumberLabel, 3, 0, 1, 2);

        locationLabel = new QLabel(serialPortInfoBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        gridLayout_3->addWidget(locationLabel, 4, 0, 1, 2);

        vendorIDLabel = new QLabel(serialPortInfoBox);
        vendorIDLabel->setObjectName(QStringLiteral("vendorIDLabel"));

        gridLayout_3->addWidget(vendorIDLabel, 5, 0, 1, 2);

        productIDLabel = new QLabel(serialPortInfoBox);
        productIDLabel->setObjectName(QStringLiteral("productIDLabel"));

        gridLayout_3->addWidget(productIDLabel, 6, 0, 1, 2);


        gridLayout_4->addWidget(serialPortInfoBox, 0, 0, 1, 1);


        retranslateUi(FLZigbeeMonitor);
        QObject::connect(pbSend_comm, SIGNAL(clicked()), FLZigbeeMonitor, SLOT(on_send_command()));
        QObject::connect(pb_clear_history, SIGNAL(clicked()), FLZigbeeMonitor, SLOT(on_clear_history()));

        tabTest->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FLZigbeeMonitor);
    } // setupUi

    void retranslateUi(QWidget *FLZigbeeMonitor)
    {
        FLZigbeeMonitor->setWindowTitle(QApplication::translate("FLZigbeeMonitor", "FLZigbeeMonitor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FLZigbeeMonitor", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FLZigbeeMonitor", "Value", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_2->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("FLZigbeeMonitor", "Commands", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem1 = tree_comm_mostused->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("FLZigbeeMonitor", "Test/Debug Commands", Q_NULLPTR));
        lb_find->setText(QApplication::translate("FLZigbeeMonitor", "Find Command", Q_NULLPTR));
        p_expand_all->setText(QApplication::translate("FLZigbeeMonitor", "All Commands", Q_NULLPTR));
        pb_eapand_mostly->setText(QApplication::translate("FLZigbeeMonitor", "Test Commands", Q_NULLPTR));
        pb_clear_history->setText(QApplication::translate("FLZigbeeMonitor", "Clear History", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLZigbeeMonitor", "Command file", Q_NULLPTR));
        pbSend_comm->setText(QApplication::translate("FLZigbeeMonitor", "Send Command", Q_NULLPTR));
        pb_reset->setText(QApplication::translate("FLZigbeeMonitor", "Reset", Q_NULLPTR));
        pb_history_setting->setText(QApplication::translate("FLZigbeeMonitor", "Setting", Q_NULLPTR));
        tabTest->setTabText(tabTest->indexOf(tab), QApplication::translate("FLZigbeeMonitor", "Command", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tb_monitor->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("FLZigbeeMonitor", "TimeStamp", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tb_monitor->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("FLZigbeeMonitor", "Channel", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tb_monitor->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("FLZigbeeMonitor", "Length", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tb_monitor->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("FLZigbeeMonitor", "Stack", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tb_monitor->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("FLZigbeeMonitor", "Layer", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tb_monitor->horizontalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("FLZigbeeMonitor", "Message", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tb_monitor->horizontalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("FLZigbeeMonitor", "MAC Source", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tb_monitor->horizontalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("FLZigbeeMonitor", "MAC Destination", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tb_monitor->horizontalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("FLZigbeeMonitor", "MAC Sequence", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tb_monitor->horizontalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("FLZigbeeMonitor", "Information", Q_NULLPTR));
        tabTest->setTabText(tabTest->indexOf(tab_2), QApplication::translate("FLZigbeeMonitor", "Moniter", Q_NULLPTR));
        serialPortInfoBox->setTitle(QApplication::translate("FLZigbeeMonitor", "Select Serial Port", Q_NULLPTR));
        pbConnect->setText(QApplication::translate("FLZigbeeMonitor", "Connect", Q_NULLPTR));
        pbFresh->setText(QApplication::translate("FLZigbeeMonitor", "Fresh", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("FLZigbeeMonitor", "Description:", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("FLZigbeeMonitor", "Manufacturer: ", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("FLZigbeeMonitor", "Serial numbers: ", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("FLZigbeeMonitor", "Location:", Q_NULLPTR));
        vendorIDLabel->setText(QApplication::translate("FLZigbeeMonitor", "Vendor ID:", Q_NULLPTR));
        productIDLabel->setText(QApplication::translate("FLZigbeeMonitor", "Product ID:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLZigbeeMonitor: public Ui_FLZigbeeMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLZIGBEEMONITOR_H
