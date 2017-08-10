/********************************************************************************
** Form generated from reading UI file 'qx_upgradefiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QX_UPGRADEFILEDIALOG_H
#define UI_QX_UPGRADEFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_UpgradeFileDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QLabel *label;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *UpgradeFileDialog)
    {
        if (UpgradeFileDialog->objectName().isEmpty())
            UpgradeFileDialog->setObjectName(QStringLiteral("UpgradeFileDialog"));
        UpgradeFileDialog->resize(463, 178);
        UpgradeFileDialog->setAutoFillBackground(true);
        gridLayout_2 = new QGridLayout(UpgradeFileDialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(UpgradeFileDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 421, 31));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/background.png")));
        label_3->setScaledContents(true);

        gridLayout->addWidget(label_3, 1, 0, 1, 3);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        label_3->raise();
        pushButton->raise();
        label_2->raise();
        label->raise();

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(UpgradeFileDialog);

        QMetaObject::connectSlotsByName(UpgradeFileDialog);
    } // setupUi

    void retranslateUi(QDialog *UpgradeFileDialog)
    {
        UpgradeFileDialog->setWindowTitle(QApplication::translate("UpgradeFileDialog", "UpgradeFileDialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("UpgradeFileDialog", "Version", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QApplication::translate("UpgradeFileDialog", "A new version of MGC ECS Configurator released, Version 2.0.17 is available at https://www.mircom.com/mircom.com/eng/you can download this version using the link", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UpgradeFileDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpgradeFileDialog: public Ui_UpgradeFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QX_UPGRADEFILEDIALOG_H
