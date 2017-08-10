/********************************************************************************
** Form generated from reading UI file 'flchooseoutputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLCHOOSEOUTPUTDIALOG_H
#define UI_FLCHOOSEOUTPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FLChooseOutputDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *listWidget;
    QLabel *label_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;

    void setupUi(QDialog *FLChooseOutputDialog)
    {
        if (FLChooseOutputDialog->objectName().isEmpty())
            FLChooseOutputDialog->setObjectName(QStringLiteral("FLChooseOutputDialog"));
        FLChooseOutputDialog->resize(631, 425);
        gridLayout = new QGridLayout(FLChooseOutputDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(FLChooseOutputDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 5, 11, 1, 1);

        pushButton_2 = new QPushButton(FLChooseOutputDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 5, 9, 1, 2);

        checkBox_3 = new QCheckBox(FLChooseOutputDialog);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        gridLayout->addWidget(checkBox_3, 4, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(502, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 9);

        comboBox = new QComboBox(FLChooseOutputDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 11);

        checkBox = new QCheckBox(FLChooseOutputDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 4, 3, 1, 1);

        label = new QLabel(FLChooseOutputDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        listWidget = new QListWidget(FLChooseOutputDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 1, 1, 1, 11);

        label_2 = new QLabel(FLChooseOutputDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        checkBox_2 = new QCheckBox(FLChooseOutputDialog);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 4, 4, 1, 1);

        checkBox_4 = new QCheckBox(FLChooseOutputDialog);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout->addWidget(checkBox_4, 4, 6, 1, 1);

        checkBox_5 = new QCheckBox(FLChooseOutputDialog);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        gridLayout->addWidget(checkBox_5, 4, 11, 1, 1);

        checkBox_6 = new QCheckBox(FLChooseOutputDialog);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        gridLayout->addWidget(checkBox_6, 4, 10, 1, 1);


        retranslateUi(FLChooseOutputDialog);

        QMetaObject::connectSlotsByName(FLChooseOutputDialog);
    } // setupUi

    void retranslateUi(QDialog *FLChooseOutputDialog)
    {
        FLChooseOutputDialog->setWindowTitle(QApplication::translate("FLChooseOutputDialog", "Choose Output", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLChooseOutputDialog", "Cancel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FLChooseOutputDialog", "OK", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("FLChooseOutputDialog", "ALL TrbCorrs", Q_NULLPTR));
        checkBox->setText(QApplication::translate("FLChooseOutputDialog", "All IptCorrs", Q_NULLPTR));
        label->setText(QApplication::translate("FLChooseOutputDialog", "Input", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLChooseOutputDialog", "Outputs", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("FLChooseOutputDialog", "All Local TRB", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("FLChooseOutputDialog", "All StatCorrs", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("FLChooseOutputDialog", "All RemIptCorrs", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("FLChooseOutputDialog", "All Relay", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLChooseOutputDialog: public Ui_FLChooseOutputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLCHOOSEOUTPUTDIALOG_H
