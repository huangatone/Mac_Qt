/********************************************************************************
** Form generated from reading UI file 'flwidgetpcapview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLWIDGETPCAPVIEW_H
#define UI_FLWIDGETPCAPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "flwidgetzigbeenetworkview.h"

QT_BEGIN_NAMESPACE

class Ui_FLWidgetPCAPView
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    FLWidgetZigbeeNetworkView *widget;
    QLabel *label;

    void setupUi(QWidget *FLWidgetPCAPView)
    {
        if (FLWidgetPCAPView->objectName().isEmpty())
            FLWidgetPCAPView->setObjectName(QStringLiteral("FLWidgetPCAPView"));
        FLWidgetPCAPView->resize(400, 300);
        gridLayout = new QGridLayout(FLWidgetPCAPView);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(155, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(FLWidgetPCAPView);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/firelink/Resources/icons/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton = new QPushButton(FLWidgetPCAPView);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/firelink/Resources/icons/new-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        widget = new FLWidgetZigbeeNetworkView(FLWidgetPCAPView);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 1, 0, 1, 4);

        label = new QLabel(FLWidgetPCAPView);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(FLWidgetPCAPView);

        QMetaObject::connectSlotsByName(FLWidgetPCAPView);
    } // setupUi

    void retranslateUi(QWidget *FLWidgetPCAPView)
    {
        FLWidgetPCAPView->setWindowTitle(QApplication::translate("FLWidgetPCAPView", "FLWidgetPCAPView", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FLWidgetPCAPView: public Ui_FLWidgetPCAPView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLWIDGETPCAPVIEW_H
