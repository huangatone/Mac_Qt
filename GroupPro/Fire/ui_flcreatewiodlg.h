/********************************************************************************
** Form generated from reading UI file 'flcreatewiodlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLCREATEWIODLG_H
#define UI_FLCREATEWIODLG_H

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

QT_BEGIN_NAMESPACE

class Ui_FLCreateWioDlg
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *leName;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FLCreateWioDlg)
    {
        if (FLCreateWioDlg->objectName().isEmpty())
            FLCreateWioDlg->setObjectName(QStringLiteral("FLCreateWioDlg"));
        FLCreateWioDlg->resize(301, 230);
        gridLayout_3 = new QGridLayout(FLCreateWioDlg);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(FLCreateWioDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QStringLiteral("leName"));

        gridLayout->addWidget(leName, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(50, 0));
        lineEdit_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lineEdit_3, 0, 4, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 3);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 3);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 2, 1, 3);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 4, 2, 1, 3);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 5, 2, 1, 3);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 3, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(174, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        okButton = new QPushButton(FLCreateWioDlg);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_3->addWidget(okButton, 1, 1, 1, 1);

        cancelButton = new QPushButton(FLCreateWioDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_3->addWidget(cancelButton, 1, 2, 1, 1);


        retranslateUi(FLCreateWioDlg);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), FLCreateWioDlg, SLOT(on_model_changed(int)));

        QMetaObject::connectSlotsByName(FLCreateWioDlg);
    } // setupUi

    void retranslateUi(QDialog *FLCreateWioDlg)
    {
        FLCreateWioDlg->setWindowTitle(QApplication::translate("FLCreateWioDlg", "Create new WIO", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FLCreateWioDlg", "WIO", Q_NULLPTR));
        label_3->setText(QApplication::translate("FLCreateWioDlg", "Signaling", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLCreateWioDlg", "Model", Q_NULLPTR));
        label_6->setText(QApplication::translate("FLCreateWioDlg", "Type", Q_NULLPTR));
        label->setText(QApplication::translate("FLCreateWioDlg", "WIO  Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("FLCreateWioDlg", "Location", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLCreateWioDlg", "MAC ADDRESS", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("FLCreateWioDlg", "1", Q_NULLPTR));
        lineEdit->setInputMask(QApplication::translate("FLCreateWioDlg", "NN:NN:NN:NN:NN:NN:NN:NN", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("FLCreateWioDlg", "FF:ff:ff:ff:ff:ff:ff:ff", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("FLCreateWioDlg", "Undefined", Q_NULLPTR)
         << QApplication::translate("FLCreateWioDlg", "Continues", Q_NULLPTR)
         << QApplication::translate("FLCreateWioDlg", "Temporal", Q_NULLPTR)
         << QApplication::translate("FLCreateWioDlg", "March Time", Q_NULLPTR)
         << QApplication::translate("FLCreateWioDlg", "California", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("FLCreateWioDlg", "Input", Q_NULLPTR)
         << QApplication::translate("FLCreateWioDlg", "Output", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("FLCreateWioDlg", "Number:", Q_NULLPTR));
        okButton->setText(QApplication::translate("FLCreateWioDlg", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("FLCreateWioDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLCreateWioDlg: public Ui_FLCreateWioDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLCREATEWIODLG_H
