/********************************************************************************
** Form generated from reading UI file 'networkview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKVIEW_H
#define UI_NETWORKVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkView
{
public:
    QGridLayout *gridLayout_main;
    QWidget *widget_contain;
    QGridLayout *gridLayout_setting;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QPushButton *pb_openjob;
    QComboBox *cb_floor;
    QGroupBox *groupBox_0;
    QGridLayout *gridLayout_0;
    QComboBox *comboBox;
    QComboBox *ch_comboBox;
    QLabel *label_1;
    QCheckBox *cbZS100;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout_1;
    QLabel *label_2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_6;
    QPushButton *btnPrint;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *saveFileName;
    QPushButton *btnDir;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;

    void setupUi(QWidget *NetworkView)
    {
        if (NetworkView->objectName().isEmpty())
            NetworkView->setObjectName(QStringLiteral("NetworkView"));
        NetworkView->resize(977, 562);
        gridLayout_main = new QGridLayout(NetworkView);
        gridLayout_main->setSpacing(3);
        gridLayout_main->setContentsMargins(3, 3, 3, 3);
        gridLayout_main->setObjectName(QStringLiteral("gridLayout_main"));
        widget_contain = new QWidget(NetworkView);
        widget_contain->setObjectName(QStringLiteral("widget_contain"));
        gridLayout_setting = new QGridLayout(widget_contain);
        gridLayout_setting->setSpacing(3);
        gridLayout_setting->setContentsMargins(3, 3, 3, 3);
        gridLayout_setting->setObjectName(QStringLiteral("gridLayout_setting"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_setting->addItem(horizontalSpacer, 0, 7, 1, 1);

        groupBox_5 = new QGroupBox(widget_contain);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setSpacing(3);
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pb_openjob = new QPushButton(groupBox_5);
        pb_openjob->setObjectName(QStringLiteral("pb_openjob"));

        gridLayout_5->addWidget(pb_openjob, 0, 0, 1, 1);

        cb_floor = new QComboBox(groupBox_5);
        cb_floor->setObjectName(QStringLiteral("cb_floor"));
        cb_floor->setMinimumSize(QSize(150, 0));

        gridLayout_5->addWidget(cb_floor, 0, 1, 1, 1);


        gridLayout_setting->addWidget(groupBox_5, 0, 3, 1, 1);

        groupBox_0 = new QGroupBox(widget_contain);
        groupBox_0->setObjectName(QStringLiteral("groupBox_0"));
        sizePolicy.setHeightForWidth(groupBox_0->sizePolicy().hasHeightForWidth());
        groupBox_0->setSizePolicy(sizePolicy);
        gridLayout_0 = new QGridLayout(groupBox_0);
        gridLayout_0->setSpacing(3);
        gridLayout_0->setContentsMargins(3, 3, 3, 3);
        gridLayout_0->setObjectName(QStringLiteral("gridLayout_0"));
        comboBox = new QComboBox(groupBox_0);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_0->addWidget(comboBox, 0, 0, 1, 1);

        ch_comboBox = new QComboBox(groupBox_0);
        ch_comboBox->setObjectName(QStringLiteral("ch_comboBox"));

        gridLayout_0->addWidget(ch_comboBox, 0, 1, 1, 1);

        label_1 = new QLabel(groupBox_0);
        label_1->setObjectName(QStringLiteral("label_1"));

        gridLayout_0->addWidget(label_1, 0, 3, 1, 1);

        cbZS100 = new QCheckBox(groupBox_0);
        cbZS100->setObjectName(QStringLiteral("cbZS100"));

        gridLayout_0->addWidget(cbZS100, 0, 2, 1, 1);


        gridLayout_setting->addWidget(groupBox_0, 0, 0, 1, 1);

        groupBox_1 = new QGroupBox(widget_contain);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        sizePolicy.setHeightForWidth(groupBox_1->sizePolicy().hasHeightForWidth());
        groupBox_1->setSizePolicy(sizePolicy);
        gridLayout_1 = new QGridLayout(groupBox_1);
        gridLayout_1->setSpacing(3);
        gridLayout_1->setContentsMargins(3, 3, 3, 3);
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        label_2 = new QLabel(groupBox_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_1->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_setting->addWidget(groupBox_1, 0, 1, 1, 1);

        groupBox_6 = new QGroupBox(widget_contain);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(groupBox_6);
        gridLayout_6->setSpacing(3);
        gridLayout_6->setContentsMargins(3, 3, 3, 3);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        btnPrint = new QPushButton(groupBox_6);
        btnPrint->setObjectName(QStringLiteral("btnPrint"));

        gridLayout_6->addWidget(btnPrint, 0, 0, 1, 1);


        gridLayout_setting->addWidget(groupBox_6, 0, 4, 1, 1);

        groupBox_2 = new QGroupBox(widget_contain);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        saveFileName = new QLabel(groupBox_2);
        saveFileName->setObjectName(QStringLiteral("saveFileName"));
        sizePolicy.setHeightForWidth(saveFileName->sizePolicy().hasHeightForWidth());
        saveFileName->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(saveFileName, 0, 3, 1, 1);

        btnDir = new QPushButton(groupBox_2);
        btnDir->setObjectName(QStringLiteral("btnDir"));
        sizePolicy.setHeightForWidth(btnDir->sizePolicy().hasHeightForWidth());
        btnDir->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(btnDir, 0, 0, 1, 1);


        gridLayout_setting->addWidget(groupBox_2, 0, 5, 1, 1);

        groupBox_3 = new QGroupBox(widget_contain);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(3);
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));

        gridLayout_setting->addWidget(groupBox_3, 0, 6, 1, 1);


        gridLayout_main->addWidget(widget_contain, 0, 0, 1, 10);

        tabWidget = new QTabWidget(NetworkView);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        gridLayout_main->addWidget(tabWidget, 1, 0, 1, 10);


        retranslateUi(NetworkView);
        QObject::connect(btnPrint, SIGNAL(clicked()), NetworkView, SLOT(onPrint()));
        QObject::connect(btnDir, SIGNAL(clicked()), NetworkView, SLOT(onSaveDir()));

        QMetaObject::connectSlotsByName(NetworkView);
    } // setupUi

    void retranslateUi(QWidget *NetworkView)
    {
        NetworkView->setWindowTitle(QApplication::translate("NetworkView", "Wireless Monitor", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("NetworkView", "Background Image / Layout", Q_NULLPTR));
        pb_openjob->setText(QApplication::translate("NetworkView", "Open Job", Q_NULLPTR));
        groupBox_0->setTitle(QApplication::translate("NetworkView", "ZigBee Device", Q_NULLPTR));
        label_1->setText(QApplication::translate("NetworkView", "Scan", Q_NULLPTR));
        cbZS100->setText(QApplication::translate("NetworkView", "ZS-100", Q_NULLPTR));
        groupBox_1->setTitle(QApplication::translate("NetworkView", "Scroll", Q_NULLPTR));
        label_2->setText(QApplication::translate("NetworkView", "Auto", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("NetworkView", "Snap Shot", Q_NULLPTR));
        btnPrint->setText(QApplication::translate("NetworkView", "Export", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("NetworkView", "PCAP Save", Q_NULLPTR));
        label_3->setText(QApplication::translate("NetworkView", "Enable", Q_NULLPTR));
        saveFileName->setText(QApplication::translate("NetworkView", "File name:", Q_NULLPTR));
        btnDir->setText(QApplication::translate("NetworkView", "./", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("NetworkView", "PCAP Load", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetworkView: public Ui_NetworkView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKVIEW_H
