/********************************************************************************
** Form generated from reading UI file 'flcreatefloordlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLCREATEFLOORDLG_H
#define UI_FLCREATEFLOORDLG_H

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
#include <QtWidgets/QTextEdit>
#include "fltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_FLCreateFloorDlg
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QLineEdit *leGraph;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *lbl_floor_width;
    QLabel *lbl_floor_height;
    QLabel *label_7;
    QComboBox *cb_scale;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QTextEdit *textEdit;
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

    void setupUi(QDialog *FLCreateFloorDlg)
    {
        if (FLCreateFloorDlg->objectName().isEmpty())
            FLCreateFloorDlg->setObjectName(QStringLiteral("FLCreateFloorDlg"));
        FLCreateFloorDlg->resize(425, 506);
        gridLayout_3 = new QGridLayout(FLCreateFloorDlg);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(FLCreateFloorDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QStringLiteral("leName"));

        gridLayout->addWidget(leName, 0, 1, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leGraph = new QLineEdit(groupBox);
        leGraph->setObjectName(QStringLiteral("leGraph"));
        leGraph->setEnabled(false);

        gridLayout->addWidget(leGraph, 1, 1, 1, 3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        lbl_floor_width = new QLabel(groupBox);
        lbl_floor_width->setObjectName(QStringLiteral("lbl_floor_width"));

        gridLayout->addWidget(lbl_floor_width, 3, 1, 1, 1);

        lbl_floor_height = new QLabel(groupBox);
        lbl_floor_height->setObjectName(QStringLiteral("lbl_floor_height"));

        gridLayout->addWidget(lbl_floor_height, 3, 2, 1, 2);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        cb_scale = new QComboBox(groupBox);
        cb_scale->setObjectName(QStringLiteral("cb_scale"));

        gridLayout->addWidget(cb_scale, 4, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 4, 2, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 4, 3, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 5, 1, 1, 3);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(FLCreateFloorDlg);
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

        horizontalSpacer = new QSpacerItem(242, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        okButton = new QPushButton(FLCreateFloorDlg);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_3->addWidget(okButton, 2, 1, 1, 1);

        cancelButton = new QPushButton(FLCreateFloorDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_3->addWidget(cancelButton, 2, 2, 1, 1);


        retranslateUi(FLCreateFloorDlg);

        QMetaObject::connectSlotsByName(FLCreateFloorDlg);
    } // setupUi

    void retranslateUi(QDialog *FLCreateFloorDlg)
    {
        FLCreateFloorDlg->setWindowTitle(QApplication::translate("FLCreateFloorDlg", "Create new floor", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FLCreateFloorDlg", "Floor", Q_NULLPTR));
        label->setText(QApplication::translate("FLCreateFloorDlg", "Floor Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLCreateFloorDlg", "Floor Graph", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLCreateFloorDlg", "Choose Graph", Q_NULLPTR));
        label_8->setText(QApplication::translate("FLCreateFloorDlg", "Floor Size", Q_NULLPTR));
        lbl_floor_width->setText(QApplication::translate("FLCreateFloorDlg", "Width = 0", Q_NULLPTR));
        lbl_floor_height->setText(QApplication::translate("FLCreateFloorDlg", "Height = 0", Q_NULLPTR));
        label_7->setText(QApplication::translate("FLCreateFloorDlg", "Scale", Q_NULLPTR));
        cb_scale->clear();
        cb_scale->insertItems(0, QStringList()
         << QApplication::translate("FLCreateFloorDlg", "1:1", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:2", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:5", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:10", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:20", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:50", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:100", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:200", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:500", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:1000", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:2000", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "1:5000", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("FLCreateFloorDlg", "Unit", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FLCreateFloorDlg", "Meters", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "Yards", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "Feet", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "Inches", Q_NULLPTR)
         << QApplication::translate("FLCreateFloorDlg", "Centimeters", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("FLCreateFloorDlg", "Comments", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FLCreateFloorDlg", "Zone Controllor", Q_NULLPTR));
        pbAdd->setText(QApplication::translate("FLCreateFloorDlg", "Add ZC", Q_NULLPTR));
        pbDelete->setText(QApplication::translate("FLCreateFloorDlg", "Delete ZC", Q_NULLPTR));
        pbEdit->setText(QApplication::translate("FLCreateFloorDlg", "Edit ZC", Q_NULLPTR));
        okButton->setText(QApplication::translate("FLCreateFloorDlg", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("FLCreateFloorDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLCreateFloorDlg: public Ui_FLCreateFloorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLCREATEFLOORDLG_H
