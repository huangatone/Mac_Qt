/********************************************************************************
** Form generated from reading UI file 'fljobpropertydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLJOBPROPERTYDLG_H
#define UI_FLJOBPROPERTYDLG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_FLJobPropertyDlg
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_8;
    QComboBox *comboBox_5;
    QLabel *label_9;
    QTimeEdit *timeEdit_2;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox_4;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *FLJobPropertyDlg)
    {
        if (FLJobPropertyDlg->objectName().isEmpty())
            FLJobPropertyDlg->setObjectName(QStringLiteral("FLJobPropertyDlg"));
        FLJobPropertyDlg->resize(443, 299);
        gridLayout_3 = new QGridLayout(FLJobPropertyDlg);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(FLJobPropertyDlg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(FLJobPropertyDlg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_3->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(FLJobPropertyDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(FLJobPropertyDlg);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(FLJobPropertyDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(FLJobPropertyDlg);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        comboBox = new QComboBox(FLJobPropertyDlg);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_3->addWidget(comboBox, 3, 1, 1, 1);

        groupBox = new QGroupBox(FLJobPropertyDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setCheckable(true);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 0, 3, 1, 1);

        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 0, 4, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 5, 1, 1);

        comboBox_5 = new QComboBox(groupBox_2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 0, 6, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        timeEdit_2 = new QTimeEdit(groupBox_2);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        gridLayout->addWidget(timeEdit_2, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 1, 2, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 1, 5, 1, 1);

        comboBox_4 = new QComboBox(groupBox_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 1, 3, 1, 1);

        comboBox_6 = new QComboBox(groupBox_2);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 1, 4, 1, 1);

        comboBox_7 = new QComboBox(groupBox_2);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));

        gridLayout->addWidget(comboBox_7, 1, 6, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(172, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(-15);
        spinBox->setMaximum(15);

        gridLayout_2->addWidget(spinBox, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 4, 0, 1, 4);

        verticalSpacer = new QSpacerItem(172, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 5, 2, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 6, 0, 1, 2);

        pushButton_2 = new QPushButton(FLJobPropertyDlg);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 6, 2, 1, 1);

        pushButton = new QPushButton(FLJobPropertyDlg);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 6, 3, 1, 1);

        lineEdit_3 = new QLineEdit(FLJobPropertyDlg);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 2, 1, 1, 1);


        retranslateUi(FLJobPropertyDlg);

        comboBox_3->setCurrentIndex(0);
        comboBox_5->setCurrentIndex(0);
        comboBox_6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FLJobPropertyDlg);
    } // setupUi

    void retranslateUi(QDialog *FLJobPropertyDlg)
    {
        FLJobPropertyDlg->setWindowTitle(QApplication::translate("FLJobPropertyDlg", "Job Propertys", Q_NULLPTR));
        label->setText(QApplication::translate("FLJobPropertyDlg", "Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLJobPropertyDlg", "Path", Q_NULLPTR));
        label_3->setText(QApplication::translate("FLJobPropertyDlg", "Comments", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLJobPropertyDlg", "Standard", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FLJobPropertyDlg", "UL(United States)", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "ULC (Canada)", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("FLJobPropertyDlg", "Day Light Saving", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FLJobPropertyDlg", "Enable Daylight saving", Q_NULLPTR));
        label_6->setText(QApplication::translate("FLJobPropertyDlg", "Start:", Q_NULLPTR));
        label_7->setText(QApplication::translate("FLJobPropertyDlg", "On:", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("FLJobPropertyDlg", "1st", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "2nd", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "3rd", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "4th", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "5th", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("FLJobPropertyDlg", "Monday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Tuesday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Wednesday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Thursday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Friday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Saturday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Sunday", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("FLJobPropertyDlg", "in", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("FLJobPropertyDlg", "January", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "February", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "March", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "April", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "May", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "June", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "July", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "August", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "September", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "October", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "November", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "December", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("FLJobPropertyDlg", "End:", Q_NULLPTR));
        label_10->setText(QApplication::translate("FLJobPropertyDlg", "On:", Q_NULLPTR));
        label_11->setText(QApplication::translate("FLJobPropertyDlg", "in", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("FLJobPropertyDlg", "1st", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "2nd", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "3rd", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "4th", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "5th", Q_NULLPTR)
        );
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("FLJobPropertyDlg", "Monday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Tuesday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Wednesday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Thursday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Friday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Saturday", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "Sunday", Q_NULLPTR)
        );
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("FLJobPropertyDlg", "January", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "February", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "March", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "April", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "May", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "June", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "July", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "August", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "September", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "October", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "November", Q_NULLPTR)
         << QApplication::translate("FLJobPropertyDlg", "December", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("FLJobPropertyDlg", "Daily clock adjustment(Secs):", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FLJobPropertyDlg", "OK", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLJobPropertyDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLJobPropertyDlg: public Ui_FLJobPropertyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLJOBPROPERTYDLG_H
