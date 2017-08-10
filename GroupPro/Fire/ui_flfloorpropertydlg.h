/********************************************************************************
** Form generated from reading UI file 'flfloorpropertydlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLFLOORPROPERTYDLG_H
#define UI_FLFLOORPROPERTYDLG_H

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

class Ui_FLFloorPropertyDLG
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *pb_cancel;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label;
    QPushButton *pb_ok;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *FLFloorPropertyDLG)
    {
        if (FLFloorPropertyDLG->objectName().isEmpty())
            FLFloorPropertyDLG->setObjectName(QStringLiteral("FLFloorPropertyDLG"));
        FLFloorPropertyDLG->resize(387, 165);
        gridLayout = new QGridLayout(FLFloorPropertyDLG);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(FLFloorPropertyDLG);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pb_cancel = new QPushButton(FLFloorPropertyDLG);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));

        gridLayout->addWidget(pb_cancel, 4, 5, 1, 1);

        label_2 = new QLabel(FLFloorPropertyDLG);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        pushButton = new QPushButton(FLFloorPropertyDLG);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 2, 5, 1, 1);

        label_4 = new QLabel(FLFloorPropertyDLG);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        label = new QLabel(FLFloorPropertyDLG);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pb_ok = new QPushButton(FLFloorPropertyDLG);
        pb_ok->setObjectName(QStringLiteral("pb_ok"));

        gridLayout->addWidget(pb_ok, 4, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(65, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 56, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 5, 1, 1);

        lineEdit = new QLineEdit(FLFloorPropertyDLG);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 2, 1, 4);

        lineEdit_2 = new QLineEdit(FLFloorPropertyDLG);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 4);

        comboBox = new QComboBox(FLFloorPropertyDLG);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 3, 2, 1, 4);

        lineEdit_3 = new QLineEdit(FLFloorPropertyDLG);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);

        gridLayout->addWidget(lineEdit_3, 2, 2, 1, 3);


        retranslateUi(FLFloorPropertyDLG);

        QMetaObject::connectSlotsByName(FLFloorPropertyDLG);
    } // setupUi

    void retranslateUi(QDialog *FLFloorPropertyDLG)
    {
        FLFloorPropertyDLG->setWindowTitle(QApplication::translate("FLFloorPropertyDLG", "Floor Propertys", Q_NULLPTR));
        label_3->setText(QApplication::translate("FLFloorPropertyDLG", "Graph", Q_NULLPTR));
        pb_cancel->setText(QApplication::translate("FLFloorPropertyDLG", "Cancel", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLFloorPropertyDLG", "Comments", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLFloorPropertyDLG", "...", Q_NULLPTR));
        label_4->setText(QApplication::translate("FLFloorPropertyDLG", "unit-of-measure", Q_NULLPTR));
        label->setText(QApplication::translate("FLFloorPropertyDLG", "Name", Q_NULLPTR));
        pb_ok->setText(QApplication::translate("FLFloorPropertyDLG", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLFloorPropertyDLG: public Ui_FLFloorPropertyDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLFLOORPROPERTYDLG_H
