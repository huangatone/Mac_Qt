/********************************************************************************
** Form generated from reading UI file 'fldaylightdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLDAYLIGHTDLG_H
#define UI_FLDAYLIGHTDLG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_FLDayLightDlg
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QTimeEdit *timeEdit;
    QLabel *label_4;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QComboBox *comboBox_5;
    QLabel *label_3;
    QTimeEdit *timeEdit_2;
    QLabel *label_5;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QComboBox *comboBox_4;
    QComboBox *comboBox_6;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *FLDayLightDlg)
    {
        if (FLDayLightDlg->objectName().isEmpty())
            FLDayLightDlg->setObjectName(QStringLiteral("FLDayLightDlg"));
        FLDayLightDlg->resize(429, 165);
        gridLayout_2 = new QGridLayout(FLDayLightDlg);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(FLDayLightDlg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        spinBox = new QSpinBox(FLDayLightDlg);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(-15);
        spinBox->setMaximum(15);

        gridLayout_2->addWidget(spinBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 2);

        groupBox = new QGroupBox(FLDayLightDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setCheckable(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 3, 1, 1);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 0, 4, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 5, 1, 1);

        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 0, 6, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        timeEdit_2 = new QTimeEdit(groupBox);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        gridLayout->addWidget(timeEdit_2, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 5, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 3, 1, 1);

        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 1, 4, 1, 1);

        comboBox_6 = new QComboBox(groupBox);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 1, 6, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 2, 1, 2);

        pushButton_2 = new QPushButton(FLDayLightDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 3, 2, 1, 1);

        pushButton = new QPushButton(FLDayLightDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 3, 3, 1, 1);


        retranslateUi(FLDayLightDlg);

        QMetaObject::connectSlotsByName(FLDayLightDlg);
    } // setupUi

    void retranslateUi(QDialog *FLDayLightDlg)
    {
        FLDayLightDlg->setWindowTitle(QApplication::translate("FLDayLightDlg", "Day light saving setting", Q_NULLPTR));
        label->setText(QApplication::translate("FLDayLightDlg", "Daily clock adjustment(Secs):", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FLDayLightDlg", "Enable Daylight saving", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLDayLightDlg", "Start:", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLDayLightDlg", "On:", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FLDayLightDlg", "1st", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "2nd", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "3rd", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "4th", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "5th", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("FLDayLightDlg", "Monday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Tuesday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Wednesday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Thursday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Friday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Saturday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Sunday", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("FLDayLightDlg", "in", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("FLDayLightDlg", "January", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "February", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "March", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "April", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "May", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "June", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "July", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "August", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "September", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "October", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "November", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "December", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("FLDayLightDlg", "End:", Q_NULLPTR));
        label_5->setText(QApplication::translate("FLDayLightDlg", "On:", Q_NULLPTR));
        label_9->setText(QApplication::translate("FLDayLightDlg", "in", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FLDayLightDlg", "1st", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "2nd", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "3rd", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "4th", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "5th", Q_NULLPTR)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("FLDayLightDlg", "Monday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Tuesday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Wednesday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Thursday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Friday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Saturday", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "Sunday", Q_NULLPTR)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("FLDayLightDlg", "January", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "February", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "March", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "April", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "May", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "June", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "July", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "August", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "September", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "October", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "November", Q_NULLPTR)
         << QApplication::translate("FLDayLightDlg", "December", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("FLDayLightDlg", "OK", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLDayLightDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLDayLightDlg: public Ui_FLDayLightDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLDAYLIGHTDLG_H
