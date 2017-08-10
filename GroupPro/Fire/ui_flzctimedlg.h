/********************************************************************************
** Form generated from reading UI file 'flzctimedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLZCTIMEDLG_H
#define UI_FLZCTIMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include "flserialwidget.h"

QT_BEGIN_NAMESPACE

class Ui_FLZCTimeDlg
{
public:
    QGridLayout *gridLayout;
    FLSerialWidget *widget;
    QLabel *label;
    QTimeEdit *timeEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QTimeEdit *timeEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *FLZCTimeDlg)
    {
        if (FLZCTimeDlg->objectName().isEmpty())
            FLZCTimeDlg->setObjectName(QStringLiteral("FLZCTimeDlg"));
        FLZCTimeDlg->resize(317, 300);
        gridLayout = new QGridLayout(FLZCTimeDlg);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new FLSerialWidget(FLZCTimeDlg);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 0, 0, 1, 3);

        label = new QLabel(FLZCTimeDlg);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(FLZCTimeDlg);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setEnabled(false);

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        pushButton = new QPushButton(FLZCTimeDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);

        label_2 = new QLabel(FLZCTimeDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        timeEdit_2 = new QTimeEdit(FLZCTimeDlg);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        gridLayout->addWidget(timeEdit_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(FLZCTimeDlg);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(FLZCTimeDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 2, 1, 1);


        retranslateUi(FLZCTimeDlg);

        QMetaObject::connectSlotsByName(FLZCTimeDlg);
    } // setupUi

    void retranslateUi(QDialog *FLZCTimeDlg)
    {
        FLZCTimeDlg->setWindowTitle(QApplication::translate("FLZCTimeDlg", "Set ZC Time", Q_NULLPTR));
        label->setText(QApplication::translate("FLZCTimeDlg", "Current", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLZCTimeDlg", "Update to current", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLZCTimeDlg", "ZC Time", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FLZCTimeDlg", "update to this", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FLZCTimeDlg", "Cancle", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLZCTimeDlg: public Ui_FLZCTimeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLZCTIMEDLG_H
