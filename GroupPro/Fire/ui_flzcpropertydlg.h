/********************************************************************************
** Form generated from reading UI file 'flzcpropertydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLZCPROPERTYDLG_H
#define UI_FLZCPROPERTYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FLZCPropertyDlg
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox_6;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QComboBox *comboBox_4;
    QLabel *label_11;
    QComboBox *comboBox_3;
    QLabel *label_12;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_9;
    QComboBox *comboBox_5;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QLabel *label_3;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_2;
    QPushButton *pb_ok;
    QLabel *label_5;
    QLabel *label;
    QLineEdit *leMAC;
    QLineEdit *lineEdit_7;
    QPushButton *pb_cancel;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *FLZCPropertyDlg)
    {
        if (FLZCPropertyDlg->objectName().isEmpty())
            FLZCPropertyDlg->setObjectName(QStringLiteral("FLZCPropertyDlg"));
        FLZCPropertyDlg->resize(351, 367);
        gridLayout = new QGridLayout(FLZCPropertyDlg);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox_6 = new QComboBox(FLZCPropertyDlg);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 4, 1, 1, 3);

        label_8 = new QLabel(FLZCPropertyDlg);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        lineEdit = new QLineEdit(FLZCPropertyDlg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 3);

        comboBox_4 = new QComboBox(FLZCPropertyDlg);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 10, 1, 2, 3);

        label_11 = new QLabel(FLZCPropertyDlg);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 10, 0, 1, 1);

        comboBox_3 = new QComboBox(FLZCPropertyDlg);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 9, 1, 1, 3);

        label_12 = new QLabel(FLZCPropertyDlg);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 11, 0, 2, 1);

        label_6 = new QLabel(FLZCPropertyDlg);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        comboBox = new QComboBox(FLZCPropertyDlg);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 5, 1, 1, 3);

        label_2 = new QLabel(FLZCPropertyDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(FLZCPropertyDlg);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 1, 1, 1);

        label_9 = new QLabel(FLZCPropertyDlg);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        comboBox_5 = new QComboBox(FLZCPropertyDlg);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 12, 1, 1, 3);

        label_10 = new QLabel(FLZCPropertyDlg);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        lineEdit_9 = new QLineEdit(FLZCPropertyDlg);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout->addWidget(lineEdit_9, 8, 1, 1, 3);

        label_3 = new QLabel(FLZCPropertyDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(FLZCPropertyDlg);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        lineEdit_8 = new QLineEdit(FLZCPropertyDlg);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout->addWidget(lineEdit_8, 7, 1, 1, 3);

        lineEdit_2 = new QLineEdit(FLZCPropertyDlg);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 3);

        pb_ok = new QPushButton(FLZCPropertyDlg);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));

        gridLayout->addWidget(pb_ok, 14, 1, 1, 1);

        label_5 = new QLabel(FLZCPropertyDlg);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label = new QLabel(FLZCPropertyDlg);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leMAC = new QLineEdit(FLZCPropertyDlg);
        leMAC->setObjectName(QStringLiteral("leMAC"));
        leMAC->setMaxLength(23);

        gridLayout->addWidget(leMAC, 3, 1, 1, 3);

        lineEdit_7 = new QLineEdit(FLZCPropertyDlg);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout->addWidget(lineEdit_7, 6, 1, 1, 3);

        pb_cancel = new QPushButton(FLZCPropertyDlg);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));

        gridLayout->addWidget(pb_cancel, 14, 3, 1, 1);

        lineEdit_3 = new QLineEdit(FLZCPropertyDlg);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 14, 2, 1, 1);


        retranslateUi(FLZCPropertyDlg);

        QMetaObject::connectSlotsByName(FLZCPropertyDlg);
    } // setupUi

    void retranslateUi(QDialog *FLZCPropertyDlg)
    {
        FLZCPropertyDlg->setWindowTitle(QApplication::translate("FLZCPropertyDlg", "Zone Controler Propertys", Q_NULLPTR));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("FLZCPropertyDlg", "1126", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1225", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1324", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1423", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1522", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1621", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1720", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1819", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "1918", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "2017", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "2116", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "2215", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "2314", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "2413", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "2512", Q_NULLPTR)
         << QApplication::translate("FLZCPropertyDlg", "2611", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("FLZCPropertyDlg", "Passcode Mid", Q_NULLPTR));
        label_11->setText(QApplication::translate("FLZCPropertyDlg", "TIMER_ACFAIL_XMIT_DELAY", Q_NULLPTR));
        label_12->setText(QApplication::translate("FLZCPropertyDlg", "TIMER_SIG_SIL", Q_NULLPTR));
        label_6->setText(QApplication::translate("FLZCPropertyDlg", "Channel", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLZCPropertyDlg", "Comments", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLZCPropertyDlg", "Mac Address", Q_NULLPTR));
        label_9->setText(QApplication::translate("FLZCPropertyDlg", "Passcode Hei", Q_NULLPTR));
        label_10->setText(QApplication::translate("FLZCPropertyDlg", "SCU_FEATURE_FLAGS", Q_NULLPTR));
        label_3->setText(QApplication::translate("FLZCPropertyDlg", "Location", Q_NULLPTR));
        label_7->setText(QApplication::translate("FLZCPropertyDlg", "Passcode Low", Q_NULLPTR));
        pb_ok->setText(QApplication::translate("FLZCPropertyDlg", "OK", Q_NULLPTR));
        label_5->setText(QApplication::translate("FLZCPropertyDlg", "Pan ID", Q_NULLPTR));
        label->setText(QApplication::translate("FLZCPropertyDlg", "Name", Q_NULLPTR));
        leMAC->setInputMask(QApplication::translate("FLZCPropertyDlg", "NN:NN:NN:NN:NN:NN:NN:NN", Q_NULLPTR));
        leMAC->setText(QApplication::translate("FLZCPropertyDlg", "00:00:00:00:00:00:00:00", Q_NULLPTR));
        pb_cancel->setText(QApplication::translate("FLZCPropertyDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLZCPropertyDlg: public Ui_FLZCPropertyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLZCPROPERTYDLG_H
