/********************************************************************************
** Form generated from reading UI file 'flprogressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLPROGRESSDIALOG_H
#define UI_FLPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_FLProgressDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QDialog *FLProgressDialog)
    {
        if (FLProgressDialog->objectName().isEmpty())
            FLProgressDialog->setObjectName(QStringLiteral("FLProgressDialog"));
        FLProgressDialog->resize(400, 83);
        gridLayout = new QGridLayout(FLProgressDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(FLProgressDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        progressBar = new QProgressBar(FLProgressDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);


        retranslateUi(FLProgressDialog);

        QMetaObject::connectSlotsByName(FLProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *FLProgressDialog)
    {
        FLProgressDialog->setWindowTitle(QApplication::translate("FLProgressDialog", "Progress,,,", Q_NULLPTR));
        label->setText(QApplication::translate("FLProgressDialog", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLProgressDialog: public Ui_FLProgressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLPROGRESSDIALOG_H
