/********************************************************************************
** Form generated from reading UI file 'flcreatezcdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLCREATEZCDLG_H
#define UI_FLCREATEZCDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "fltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_FLCreateZCDlg
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QLineEdit *leLocation;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_6;
    QLineEdit *leRange;
    QComboBox *comboBox_2;
    QLineEdit *leMAC;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    FLTreeWidget *treeWidget;
    QPushButton *pbAdd;
    QPushButton *pbDelete;
    QPushButton *pbEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FLCreateZCDlg)
    {
        if (FLCreateZCDlg->objectName().isEmpty())
            FLCreateZCDlg->setObjectName(QStringLiteral("FLCreateZCDlg"));
        FLCreateZCDlg->resize(400, 450);
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/trouble-icon-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        FLCreateZCDlg->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(FLCreateZCDlg);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(FLCreateZCDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QStringLiteral("leName"));

        gridLayout->addWidget(leName, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leLocation = new QLineEdit(groupBox);
        leLocation->setObjectName(QStringLiteral("leLocation"));

        gridLayout->addWidget(leLocation, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 5, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        leRange = new QLineEdit(groupBox);
        leRange->setObjectName(QStringLiteral("leRange"));

        gridLayout->addWidget(leRange, 4, 1, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 1);

        leMAC = new QLineEdit(groupBox);
        leMAC->setObjectName(QStringLiteral("leMAC"));
        leMAC->setMaxLength(23);

        gridLayout->addWidget(leMAC, 2, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(FLCreateZCDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeWidget = new FLTreeWidget(groupBox_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout_2->addWidget(treeWidget, 0, 0, 4, 1);

        pbAdd = new QPushButton(groupBox_2);
        pbAdd->setObjectName(QStringLiteral("pbAdd"));

        gridLayout_2->addWidget(pbAdd, 0, 1, 1, 1);

        pbDelete = new QPushButton(groupBox_2);
        pbDelete->setObjectName(QStringLiteral("pbDelete"));

        gridLayout_2->addWidget(pbDelete, 1, 1, 1, 1);

        pbEdit = new QPushButton(groupBox_2);
        pbEdit->setObjectName(QStringLiteral("pbEdit"));

        gridLayout_2->addWidget(pbEdit, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(217, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        okButton = new QPushButton(FLCreateZCDlg);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_3->addWidget(okButton, 2, 1, 1, 1);

        cancelButton = new QPushButton(FLCreateZCDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_3->addWidget(cancelButton, 2, 2, 1, 1);


        retranslateUi(FLCreateZCDlg);

        QMetaObject::connectSlotsByName(FLCreateZCDlg);
    } // setupUi

    void retranslateUi(QDialog *FLCreateZCDlg)
    {
        FLCreateZCDlg->setWindowTitle(QApplication::translate("FLCreateZCDlg", "Create new Zone Controller", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FLCreateZCDlg", "Zone controllor", Q_NULLPTR));
        label->setText(QApplication::translate("FLCreateZCDlg", "ZC Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLCreateZCDlg", "Location", Q_NULLPTR));
        label_3->setText(QApplication::translate("FLCreateZCDlg", "MAC address", Q_NULLPTR));
        label_5->setText(QApplication::translate("FLCreateZCDlg", "PAN ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLCreateZCDlg", "Channel", Q_NULLPTR));
        label_6->setText(QApplication::translate("FLCreateZCDlg", "Range", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FLCreateZCDlg", "1126", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1225", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1324", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1423", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1522", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1621", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1720", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1819", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "1918", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "2017", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "2116", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "2215", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "2314", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "2413", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "2512", Q_NULLPTR)
         << QApplication::translate("FLCreateZCDlg", "2611", Q_NULLPTR)
        );
        leMAC->setInputMask(QApplication::translate("FLCreateZCDlg", "NN:NN:NN:NN:NN:NN:NN:NN", Q_NULLPTR));
        leMAC->setText(QApplication::translate("FLCreateZCDlg", "00:00:00:00:00:00:00:00", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FLCreateZCDlg", "Zone Controllor", Q_NULLPTR));
        pbAdd->setText(QApplication::translate("FLCreateZCDlg", "Add WIO", Q_NULLPTR));
        pbDelete->setText(QApplication::translate("FLCreateZCDlg", "Delete WIO", Q_NULLPTR));
        pbEdit->setText(QApplication::translate("FLCreateZCDlg", "Edit WIO", Q_NULLPTR));
        okButton->setText(QApplication::translate("FLCreateZCDlg", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("FLCreateZCDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLCreateZCDlg: public Ui_FLCreateZCDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLCREATEZCDLG_H
