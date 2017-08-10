/********************************************************************************
** Form generated from reading UI file 'flusbdebug.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLUSBDEBUG_H
#define UI_FLUSBDEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>
#include <switcher.h>
#include "flfloorview.h"

QT_BEGIN_NAMESPACE

class Ui_ZigbeeTestUi
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QPushButton *pb_clear;
    QTextEdit *terminal;
    QGroupBox *serialPortInfoBox;
    QGridLayout *gridLayout_3;
    QComboBox *serialPortInfoListBox;
    QLabel *descriptionLabel;
    QLabel *manufacturerLabel;
    QLabel *serialNumberLabel;
    QLabel *locationLabel;
    QLabel *vendorIDLabel;
    QLabel *productIDLabel;
    QPushButton *pbConnect;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbFresh;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    Switcher *widget_3;
    QLabel *label_4;
    QLabel *saveFileName;
    FLFloorView *widget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_11;
    QPushButton *pbCommand;
    QPushButton *pushButton_10;
    QFrame *line;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QComboBox *comboBox;
    QPushButton *pbSendFile;
    QLabel *label_8;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QFrame *line_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_12;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_21;
    QLineEdit *lineEdit_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_7;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *checkBox;
    QDateTimeEdit *dateTimeEdit;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton_15;
    QLabel *label_16;
    QCheckBox *checkBox_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_10;
    QComboBox *comboBox_5;
    QLabel *label_11;
    QTimeEdit *timeEdit_3;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QComboBox *comboBox_8;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox;
    QLabel *label_14;
    QWidget *tab_5;
    QGridLayout *gridLayout_9;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_16;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_6;
    QGridLayout *gridLayout_10;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_17;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_7;
    QGridLayout *gridLayout_11;
    QRadioButton *radioButton_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_20;
    QPushButton *pushButton_18;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox_3;
    QProgressBar *progressBar;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QTableWidget *tabMod;

    void setupUi(QWidget *ZigbeeTestUi)
    {
        if (ZigbeeTestUi->objectName().isEmpty())
            ZigbeeTestUi->setObjectName(QStringLiteral("ZigbeeTestUi"));
        ZigbeeTestUi->resize(1283, 963);
        gridLayout_2 = new QGridLayout(ZigbeeTestUi);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(ZigbeeTestUi);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(listWidget, 6, 0, 3, 1);

        pb_clear = new QPushButton(ZigbeeTestUi);
        pb_clear->setObjectName(QStringLiteral("pb_clear"));

        gridLayout_2->addWidget(pb_clear, 8, 3, 1, 1);

        terminal = new QTextEdit(ZigbeeTestUi);
        terminal->setObjectName(QStringLiteral("terminal"));
        terminal->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(terminal->sizePolicy().hasHeightForWidth());
        terminal->setSizePolicy(sizePolicy1);
        terminal->setAutoFillBackground(false);

        gridLayout_2->addWidget(terminal, 1, 3, 7, 1);

        serialPortInfoBox = new QGroupBox(ZigbeeTestUi);
        serialPortInfoBox->setObjectName(QStringLiteral("serialPortInfoBox"));
        gridLayout_3 = new QGridLayout(serialPortInfoBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        serialPortInfoListBox = new QComboBox(serialPortInfoBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));

        gridLayout_3->addWidget(serialPortInfoListBox, 0, 0, 1, 3);

        descriptionLabel = new QLabel(serialPortInfoBox);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        gridLayout_3->addWidget(descriptionLabel, 1, 0, 1, 3);

        manufacturerLabel = new QLabel(serialPortInfoBox);
        manufacturerLabel->setObjectName(QStringLiteral("manufacturerLabel"));

        gridLayout_3->addWidget(manufacturerLabel, 2, 0, 1, 3);

        serialNumberLabel = new QLabel(serialPortInfoBox);
        serialNumberLabel->setObjectName(QStringLiteral("serialNumberLabel"));

        gridLayout_3->addWidget(serialNumberLabel, 3, 0, 1, 3);

        locationLabel = new QLabel(serialPortInfoBox);
        locationLabel->setObjectName(QStringLiteral("locationLabel"));

        gridLayout_3->addWidget(locationLabel, 4, 0, 1, 3);

        vendorIDLabel = new QLabel(serialPortInfoBox);
        vendorIDLabel->setObjectName(QStringLiteral("vendorIDLabel"));

        gridLayout_3->addWidget(vendorIDLabel, 5, 0, 1, 3);

        productIDLabel = new QLabel(serialPortInfoBox);
        productIDLabel->setObjectName(QStringLiteral("productIDLabel"));

        gridLayout_3->addWidget(productIDLabel, 6, 0, 1, 3);

        pbConnect = new QPushButton(serialPortInfoBox);
        pbConnect->setObjectName(QStringLiteral("pbConnect"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbConnect->sizePolicy().hasHeightForWidth());
        pbConnect->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/corr-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbConnect->setIcon(icon);

        gridLayout_3->addWidget(pbConnect, 7, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 7, 1, 1, 1);

        pbFresh = new QPushButton(serialPortInfoBox);
        pbFresh->setObjectName(QStringLiteral("pbFresh"));
        sizePolicy2.setHeightForWidth(pbFresh->sizePolicy().hasHeightForWidth());
        pbFresh->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/firelink/Resources/icons/go-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFresh->setIcon(icon1);

        gridLayout_3->addWidget(pbFresh, 7, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 8, 0, 1, 1);


        gridLayout_2->addWidget(serialPortInfoBox, 0, 0, 3, 1);

        groupBox_3 = new QGroupBox(ZigbeeTestUi);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        widget_3 = new Switcher(groupBox_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        widget_3->setMinimumSize(QSize(55, 0));

        gridLayout_5->addWidget(widget_3, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        saveFileName = new QLabel(groupBox_3);
        saveFileName->setObjectName(QStringLiteral("saveFileName"));
        sizePolicy2.setHeightForWidth(saveFileName->sizePolicy().hasHeightForWidth());
        saveFileName->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(saveFileName, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 0, 3, 1, 1);

        widget = new FLFloorView(ZigbeeTestUi);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy5);
        widget->setMinimumSize(QSize(400, 400));

        gridLayout_2->addWidget(widget, 4, 5, 4, 1);

        tabWidget = new QTabWidget(ZigbeeTestUi);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(2);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy6);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 476, 212));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy7);
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_11 = new QPushButton(groupBox_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout_4->addWidget(pushButton_11, 7, 0, 1, 1);

        pbCommand = new QPushButton(groupBox_2);
        pbCommand->setObjectName(QStringLiteral("pbCommand"));
        QSizePolicy sizePolicy8(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(pbCommand->sizePolicy().hasHeightForWidth());
        pbCommand->setSizePolicy(sizePolicy8);

        gridLayout_4->addWidget(pbCommand, 3, 4, 3, 1);

        pushButton_10 = new QPushButton(groupBox_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout_4->addWidget(pushButton_10, 1, 4, 1, 1);

        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 2, 0, 1, 5);

        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout_4->addWidget(pushButton_9, 0, 4, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_4->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy4.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_6, 1, 2, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy4.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_8, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy4.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_7, 0, 3, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_4->addWidget(comboBox, 3, 1, 1, 2);

        pbSendFile = new QPushButton(groupBox_2);
        pbSendFile->setObjectName(QStringLiteral("pbSendFile"));

        gridLayout_4->addWidget(pbSendFile, 4, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_4->addWidget(label_8, 5, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy4.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_4, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFrameShape(QFrame::Box);

        gridLayout_4->addWidget(label_7, 4, 1, 1, 2);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_2, 0, 1, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy9);
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(lineEdit, 5, 1, 1, 2);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy4.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(pushButton_3, 1, 1, 1, 1);

        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 6, 0, 1, 5);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 7, 1, 1, 2);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 7, 4, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 7, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setEnabled(false);

        gridLayout_6->addWidget(pushButton_12, 6, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 148, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 5, 3, 1, 1);

        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy3.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy3);

        gridLayout_6->addWidget(label_21, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_6->addWidget(lineEdit_4, 0, 1, 1, 1);

        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        QSizePolicy sizePolicy10(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
        tabWidget_2->setSizePolicy(sizePolicy10);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_7 = new QGridLayout(tab_3);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        gridLayout_7->addWidget(label_5, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 1, 1, 1, 1);

        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        gridLayout_7->addWidget(checkBox, 2, 1, 1, 1);

        dateTimeEdit = new QDateTimeEdit(tab_3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setEnabled(false);

        gridLayout_7->addWidget(dateTimeEdit, 0, 1, 1, 2);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        pushButton_15 = new QPushButton(tab_4);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy4.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy4);

        gridLayout_8->addWidget(pushButton_15, 3, 2, 1, 1);

        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_8->addWidget(label_16, 3, 0, 1, 2);

        checkBox_4 = new QCheckBox(tab_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_8->addWidget(checkBox_4, 2, 0, 1, 1);

        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setCheckable(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 0, 3, 1, 1);

        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 0, 4, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 5, 1, 1);

        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 0, 6, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        timeEdit_3 = new QTimeEdit(groupBox);
        timeEdit_3->setObjectName(QStringLiteral("timeEdit_3"));

        gridLayout->addWidget(timeEdit_3, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 1, 5, 1, 1);

        comboBox_6 = new QComboBox(groupBox);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 1, 3, 1, 1);

        comboBox_7 = new QComboBox(groupBox);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));

        gridLayout->addWidget(comboBox_7, 1, 4, 1, 1);

        comboBox_8 = new QComboBox(groupBox);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));

        gridLayout->addWidget(comboBox_8, 1, 6, 1, 1);


        gridLayout_8->addWidget(groupBox, 1, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(190, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        spinBox = new QSpinBox(tab_4);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(-15);
        spinBox->setMaximum(15);

        gridLayout_8->addWidget(spinBox, 0, 1, 1, 1);

        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_8->addWidget(label_14, 0, 0, 1, 1);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_9 = new QGridLayout(tab_5);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        lineEdit_2 = new QLineEdit(tab_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_9->addWidget(lineEdit_2, 0, 1, 1, 2);

        lineEdit_3 = new QLineEdit(tab_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_9->addWidget(lineEdit_3, 1, 1, 1, 2);

        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_9->addWidget(label_15, 0, 0, 1, 1);

        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_9->addWidget(label_17, 2, 0, 1, 1);

        label_18 = new QLabel(tab_5);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_9->addWidget(label_18, 1, 0, 1, 1);

        label_19 = new QLabel(tab_5);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_9->addWidget(label_19, 3, 1, 1, 1);

        checkBox_5 = new QCheckBox(tab_5);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        gridLayout_9->addWidget(checkBox_5, 3, 0, 1, 1);

        lineEdit_5 = new QLineEdit(tab_5);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_9->addWidget(lineEdit_5, 2, 1, 1, 2);

        pushButton_16 = new QPushButton(tab_5);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        sizePolicy4.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy4);

        gridLayout_9->addWidget(pushButton_16, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 4, 1, 1, 1);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        gridLayout_10 = new QGridLayout(tab_6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        lineEdit_6 = new QLineEdit(tab_6);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_10->addWidget(lineEdit_6, 0, 1, 1, 1);

        pushButton_17 = new QPushButton(tab_6);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        gridLayout_10->addWidget(pushButton_17, 0, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 116, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_4, 1, 1, 1, 1);

        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_11 = new QGridLayout(tab_7);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        radioButton_2 = new QRadioButton(tab_7);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        sizePolicy4.setHeightForWidth(radioButton_2->sizePolicy().hasHeightForWidth());
        radioButton_2->setSizePolicy(sizePolicy4);

        gridLayout_11->addWidget(radioButton_2, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 176, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_5, 1, 1, 1, 1);

        label_20 = new QLabel(tab_7);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_11->addWidget(label_20, 0, 1, 1, 1);

        pushButton_18 = new QPushButton(tab_7);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        sizePolicy4.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy4);

        gridLayout_11->addWidget(pushButton_18, 0, 2, 1, 1);

        tabWidget_2->addTab(tab_7, QString());

        gridLayout_6->addWidget(tabWidget_2, 3, 0, 7, 3);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 4, 4, 1, 1);

        checkBox_3 = new QCheckBox(tab_2);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setChecked(true);

        gridLayout_6->addWidget(checkBox_3, 8, 3, 1, 1);

        progressBar = new QProgressBar(tab_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout_6->addWidget(progressBar, 10, 0, 1, 4);

        pushButton_14 = new QPushButton(tab_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setEnabled(false);

        gridLayout_6->addWidget(pushButton_14, 0, 3, 1, 1);

        pushButton_13 = new QPushButton(tab_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setEnabled(false);

        gridLayout_6->addWidget(pushButton_13, 7, 3, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 5, 4, 1);

        tabMod = new QTableWidget(ZigbeeTestUi);
        if (tabMod->columnCount() < 3)
            tabMod->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabMod->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabMod->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabMod->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabMod->setObjectName(QStringLiteral("tabMod"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(1);
        sizePolicy11.setHeightForWidth(tabMod->sizePolicy().hasHeightForWidth());
        tabMod->setSizePolicy(sizePolicy11);

        gridLayout_2->addWidget(tabMod, 3, 0, 3, 1);


        retranslateUi(ZigbeeTestUi);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ZigbeeTestUi);
    } // setupUi

    void retranslateUi(QWidget *ZigbeeTestUi)
    {
        ZigbeeTestUi->setWindowTitle(QApplication::translate("ZigbeeTestUi", "Form", Q_NULLPTR));
        pb_clear->setText(QApplication::translate("ZigbeeTestUi", "Clear", Q_NULLPTR));
        serialPortInfoBox->setTitle(QApplication::translate("ZigbeeTestUi", "Select Serial Port", Q_NULLPTR));
        descriptionLabel->setText(QApplication::translate("ZigbeeTestUi", "Description:", Q_NULLPTR));
        manufacturerLabel->setText(QApplication::translate("ZigbeeTestUi", "Manufacturer: ", Q_NULLPTR));
        serialNumberLabel->setText(QApplication::translate("ZigbeeTestUi", "Serial numbers: ", Q_NULLPTR));
        locationLabel->setText(QApplication::translate("ZigbeeTestUi", "Location:", Q_NULLPTR));
        vendorIDLabel->setText(QApplication::translate("ZigbeeTestUi", "Vendor ID:", Q_NULLPTR));
        productIDLabel->setText(QApplication::translate("ZigbeeTestUi", "Product ID:", Q_NULLPTR));
        pbConnect->setText(QApplication::translate("ZigbeeTestUi", "Connect", Q_NULLPTR));
        pbFresh->setText(QApplication::translate("ZigbeeTestUi", "Fresh", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("ZigbeeTestUi", "Save", Q_NULLPTR));
        label_4->setText(QApplication::translate("ZigbeeTestUi", "Enable", Q_NULLPTR));
        saveFileName->setText(QApplication::translate("ZigbeeTestUi", "File name:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ZigbeeTestUi", "Command", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("ZigbeeTestUi", "Open Job", Q_NULLPTR));
        pbCommand->setText(QApplication::translate("ZigbeeTestUi", "Send Command", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("ZigbeeTestUi", "reboot", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("ZigbeeTestUi", "buzzer on/of", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ZigbeeTestUi", "status", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ZigbeeTestUi", "Help", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("ZigbeeTestUi", "get status", Q_NULLPTR));
        label->setText(QApplication::translate("ZigbeeTestUi", "Select Command", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("ZigbeeTestUi", "Trace On/Off", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("ZigbeeTestUi", "logout", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ZigbeeTestUi", "help", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "version", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "status", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "login", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "logout", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "reboot", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "send config", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "get config", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "get events", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "get status", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "wireless\\r\\n1", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "wireless\\r\\n2", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "table", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Trace On/Off", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "buzzer on/of", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Send MACs", Q_NULLPTR)
        );
        pbSendFile->setText(QApplication::translate("ZigbeeTestUi", "Select File", Q_NULLPTR));
        label_8->setText(QApplication::translate("ZigbeeTestUi", "Password", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ZigbeeTestUi", "get config", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_2->setText(QApplication::translate("ZigbeeTestUi", "Version", Q_NULLPTR));
        lineEdit->setInputMask(QString());
        pushButton_3->setText(QApplication::translate("ZigbeeTestUi", "get events", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("ZigbeeTestUi", "Choose Floor", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ZigbeeTestUi", "Quick Command", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("ZigbeeTestUi", "Read ZC Time", Q_NULLPTR));
        label_21->setText(QApplication::translate("ZigbeeTestUi", "Password", Q_NULLPTR));
        label_5->setText(QApplication::translate("ZigbeeTestUi", "ZC Time", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ZigbeeTestUi", "Write current time", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("ZigbeeTestUi", "ZC Time", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("ZigbeeTestUi", "File...", Q_NULLPTR));
        label_16->setText(QApplication::translate("ZigbeeTestUi", "Select a file", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("ZigbeeTestUi", "From File", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ZigbeeTestUi", "Enable Daylight saving", Q_NULLPTR));
        label_6->setText(QApplication::translate("ZigbeeTestUi", "Start:", Q_NULLPTR));
        label_9->setText(QApplication::translate("ZigbeeTestUi", "On:", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("ZigbeeTestUi", "1st", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "2nd", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "3rd", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "4th", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "5th", Q_NULLPTR)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("ZigbeeTestUi", "Sunday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Monday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Tuesday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Wednesday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Thursday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Friday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Saturday", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("ZigbeeTestUi", "in", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("ZigbeeTestUi", "January", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "February", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "March", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "April", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "May", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "June", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "July", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "August", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "September", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "October", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "November", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "December", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("ZigbeeTestUi", "End:", Q_NULLPTR));
        label_12->setText(QApplication::translate("ZigbeeTestUi", "On:", Q_NULLPTR));
        label_13->setText(QApplication::translate("ZigbeeTestUi", "in", Q_NULLPTR));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("ZigbeeTestUi", "1st", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "2nd", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "3rd", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "4th", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "5th", Q_NULLPTR)
        );
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("ZigbeeTestUi", "Sunday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Monday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Tuesday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Wednesday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Thursday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Friday", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "Saturday", Q_NULLPTR)
        );
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("ZigbeeTestUi", "January", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "February", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "March", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "April", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "May", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "June", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "July", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "August", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "September", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "October", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "November", Q_NULLPTR)
         << QApplication::translate("ZigbeeTestUi", "December", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("ZigbeeTestUi", "Daily clock adjustment(Secs):", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("ZigbeeTestUi", "Day Light Saving", Q_NULLPTR));
        label_15->setText(QApplication::translate("ZigbeeTestUi", "Passcode 1", Q_NULLPTR));
        label_17->setText(QApplication::translate("ZigbeeTestUi", "Passcode 3", Q_NULLPTR));
        label_18->setText(QApplication::translate("ZigbeeTestUi", "Passcode 2", Q_NULLPTR));
        label_19->setText(QApplication::translate("ZigbeeTestUi", "Select a file", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("ZigbeeTestUi", "From File", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("ZigbeeTestUi", "File..", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("ZigbeeTestUi", "Passcode", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("ZigbeeTestUi", "File...", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("ZigbeeTestUi", "Firmware", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("ZigbeeTestUi", "From File", Q_NULLPTR));
        label_20->setText(QApplication::translate("ZigbeeTestUi", "Select a file", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("ZigbeeTestUi", "File...", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("ZigbeeTestUi", "Configurator", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("ZigbeeTestUi", "Auto Login before oprator", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("ZigbeeTestUi", "Login", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("ZigbeeTestUi", "Send ZC Time", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ZigbeeTestUi", "Configeration", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tabMod->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ZigbeeTestUi", "Original", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tabMod->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ZigbeeTestUi", "Modified", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tabMod->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ZigbeeTestUi", "Enable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZigbeeTestUi: public Ui_ZigbeeTestUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLUSBDEBUG_H
