/********************************************************************************
** Form generated from reading UI file 'qx_port.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QX_PORT_H
#define UI_QX_PORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PortDialog
{
public:
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QComboBox *cbCommPorts;
    QLabel *label;

    void setupUi(QDialog *PortDialog)
    {
        if (PortDialog->objectName().isEmpty())
            PortDialog->setObjectName(QStringLiteral("PortDialog"));
        PortDialog->resize(300, 142);
        PortDialog->setMinimumSize(QSize(200, 50));
        PortDialog->setMaximumSize(QSize(416, 148));
        QIcon icon;
        icon.addFile(QStringLiteral(":/FlexCommander/Resources/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        PortDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(PortDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        progressBar = new QProgressBar(PortDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 3, 0, 1, 3);

        label_2 = new QLabel(PortDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(PortDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(PortDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 3);

        cbCommPorts = new QComboBox(PortDialog);
        cbCommPorts->setObjectName(QStringLiteral("cbCommPorts"));
        cbCommPorts->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(cbCommPorts, 0, 1, 1, 2);

        label = new QLabel(PortDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 3);


        retranslateUi(PortDialog);
        QObject::connect(okButton, SIGNAL(clicked()), PortDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), PortDialog, SLOT(reject()));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(PortDialog);
    } // setupUi

    void retranslateUi(QDialog *PortDialog)
    {
        PortDialog->setWindowTitle(QApplication::translate("PortDialog", "New Connection", Q_NULLPTR));
        label_2->setText(QApplication::translate("PortDialog", "Serial Port:", Q_NULLPTR));
        okButton->setText(QApplication::translate("PortDialog", "Send", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("PortDialog", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("PortDialog", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PortDialog: public Ui_PortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QX_PORT_H
