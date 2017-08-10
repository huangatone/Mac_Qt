/********************************************************************************
** Form generated from reading UI file 'flmessageview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLMESSAGEVIEW_H
#define UI_FLMESSAGEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FLMessageView
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;

    void setupUi(QWidget *FLMessageView)
    {
        if (FLMessageView->objectName().isEmpty())
            FLMessageView->setObjectName(QStringLiteral("FLMessageView"));
        FLMessageView->resize(503, 203);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FLMessageView->sizePolicy().hasHeightForWidth());
        FLMessageView->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(FLMessageView);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(FLMessageView);

        QMetaObject::connectSlotsByName(FLMessageView);
    } // setupUi

    void retranslateUi(QWidget *FLMessageView)
    {
        FLMessageView->setWindowTitle(QApplication::translate("FLMessageView", "FLMessageView", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLMessageView: public Ui_FLMessageView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLMESSAGEVIEW_H
