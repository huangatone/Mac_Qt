/********************************************************************************
** Form generated from reading UI file 'flwiopropertydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLWIOPROPERTYDLG_H
#define UI_FLWIOPROPERTYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FLWioPropertyDlg
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pb_ok;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QLabel *label_4;
    QPushButton *pb_cancel;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox_5;
    QComboBox *comboBox_2;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *comboBox_4;
    QLabel *label_10;
    QLineEdit *leMAC;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QCheckBox *checkBox_4;

    void setupUi(QDialog *FLWioPropertyDlg)
    {
        if (FLWioPropertyDlg->objectName().isEmpty())
            FLWioPropertyDlg->setObjectName(QStringLiteral("FLWioPropertyDlg"));
        FLWioPropertyDlg->resize(400, 556);
        gridLayout = new QGridLayout(FLWioPropertyDlg);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(FLWioPropertyDlg);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(FLWioPropertyDlg);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 4);

        lineEdit_3 = new QLineEdit(FLWioPropertyDlg);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 4);

        pb_ok = new QPushButton(FLWioPropertyDlg);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));

        gridLayout->addWidget(pb_ok, 15, 3, 1, 1);

        comboBox_3 = new QComboBox(FLWioPropertyDlg);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 4, 1, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 15, 1, 1, 2);

        label_9 = new QLabel(FLWioPropertyDlg);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_4 = new QLabel(FLWioPropertyDlg);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        pb_cancel = new QPushButton(FLWioPropertyDlg);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));

        gridLayout->addWidget(pb_cancel, 15, 4, 1, 1);

        label_2 = new QLabel(FLWioPropertyDlg);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(FLWioPropertyDlg);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(FLWioPropertyDlg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 4);

        comboBox_5 = new QComboBox(FLWioPropertyDlg);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 7, 1, 1, 4);

        comboBox_2 = new QComboBox(FLWioPropertyDlg);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 5, 1, 1, 4);

        label_11 = new QLabel(FLWioPropertyDlg);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        label_12 = new QLabel(FLWioPropertyDlg);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 7, 0, 1, 1);

        comboBox_4 = new QComboBox(FLWioPropertyDlg);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 6, 1, 1, 4);

        label_10 = new QLabel(FLWioPropertyDlg);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 5, 0, 1, 1);

        leMAC = new QLineEdit(FLWioPropertyDlg);
        leMAC->setObjectName(QStringLiteral("leMAC"));
        leMAC->setMaxLength(23);

        gridLayout->addWidget(leMAC, 3, 1, 1, 4);

        groupBox = new QGroupBox(FLWioPropertyDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 2);

        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        gridLayout_2->addWidget(checkBox_4, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 8, 0, 1, 5);


        retranslateUi(FLWioPropertyDlg);

        QMetaObject::connectSlotsByName(FLWioPropertyDlg);
    } // setupUi

    void retranslateUi(QDialog *FLWioPropertyDlg)
    {
        FLWioPropertyDlg->setWindowTitle(QApplication::translate("FLWioPropertyDlg", "WIO Propertys", Q_NULLPTR));
        label->setText(QApplication::translate("FLWioPropertyDlg", "Name", Q_NULLPTR));
        pb_ok->setText(QApplication::translate("FLWioPropertyDlg", "OK", Q_NULLPTR));
        label_9->setText(QApplication::translate("FLWioPropertyDlg", "Model", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLWioPropertyDlg", "Mac Address", Q_NULLPTR));
        pb_cancel->setText(QApplication::translate("FLWioPropertyDlg", "Cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLWioPropertyDlg", "Comments", Q_NULLPTR));
        label_3->setText(QApplication::translate("FLWioPropertyDlg", "Location", Q_NULLPTR));
        label_11->setText(QApplication::translate("FLWioPropertyDlg", "Signaling", Q_NULLPTR));
        label_12->setText(QApplication::translate("FLWioPropertyDlg", "I/O", Q_NULLPTR));
        label_10->setText(QApplication::translate("FLWioPropertyDlg", "Channel", Q_NULLPTR));
        leMAC->setInputMask(QApplication::translate("FLWioPropertyDlg", "NN:NN:NN:NN:NN:NN:NN:NN", Q_NULLPTR));
        leMAC->setText(QApplication::translate("FLWioPropertyDlg", "00:00:00:00:00:00:00:00", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FLWioPropertyDlg", "Corrs", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("FLWioPropertyDlg", "All ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLWioPropertyDlg: public Ui_FLWioPropertyDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLWIOPROPERTYDLG_H
