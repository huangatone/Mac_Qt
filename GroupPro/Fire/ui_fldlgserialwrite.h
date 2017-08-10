/********************************************************************************
** Form generated from reading UI file 'fldlgserialwrite.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLDLGSERIALWRITE_H
#define UI_FLDLGSERIALWRITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <flserialwidget.h>

QT_BEGIN_NAMESPACE

class Ui_FLDlgSerialWrite
{
public:
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QLabel *label_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QFrame *line;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QLabel *label_login;
    QSpacerItem *verticalSpacer_2;
    FLSerialWidget *widget;

    void setupUi(QDialog *FLDlgSerialWrite)
    {
        if (FLDlgSerialWrite->objectName().isEmpty())
            FLDlgSerialWrite->setObjectName(QStringLiteral("FLDlgSerialWrite"));
        FLDlgSerialWrite->resize(460, 431);
        gridLayout_3 = new QGridLayout(FLDlgSerialWrite);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton = new QPushButton(FLDlgSerialWrite);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(FLDlgSerialWrite);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(FLDlgSerialWrite);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(false);
        groupBox_2->setMinimumSize(QSize(0, 55));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 0, 2, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 3, 0, 1, 1);

        label_2 = new QLabel(FLDlgSerialWrite);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        gridLayout_3->addWidget(label_2, 3, 1, 1, 1);

        groupBox = new QGroupBox(FLDlgSerialWrite);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 2);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setChecked(true);

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(false);

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 4);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 3, 3, 1, 1);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_6, 0, 3, 2, 1);


        gridLayout_3->addWidget(groupBox, 4, 0, 1, 1);

        label_login = new QLabel(FLDlgSerialWrite);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_login, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 5, 0, 1, 1);

        widget = new FLSerialWidget(FLDlgSerialWrite);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(300, 214));

        gridLayout_3->addWidget(widget, 0, 0, 3, 1);


        retranslateUi(FLDlgSerialWrite);

        QMetaObject::connectSlotsByName(FLDlgSerialWrite);
    } // setupUi

    void retranslateUi(QDialog *FLDlgSerialWrite)
    {
        FLDlgSerialWrite->setWindowTitle(QApplication::translate("FLDlgSerialWrite", "Write/Read Serial Data", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FLDlgSerialWrite", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FLDlgSerialWrite", "Cancel", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FLDlgSerialWrite", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("FLDlgSerialWrite", "Password:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FLDlgSerialWrite", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLDlgSerialWrite", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FLDlgSerialWrite", "Config", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("FLDlgSerialWrite", "Select a file", Q_NULLPTR));
        label_3->setText(QString());
        checkBox_2->setText(QApplication::translate("FLDlgSerialWrite", "Update to ZC", Q_NULLPTR));
        checkBox->setText(QApplication::translate("FLDlgSerialWrite", "Save to file", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("FLDlgSerialWrite", "Send", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("FLDlgSerialWrite", "Get", Q_NULLPTR));
        label_login->setText(QApplication::translate("FLDlgSerialWrite", "Please connect to serial port", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLDlgSerialWrite: public Ui_FLDlgSerialWrite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLDLGSERIALWRITE_H
