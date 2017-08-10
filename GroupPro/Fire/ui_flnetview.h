/********************************************************************************
** Form generated from reading UI file 'flnetview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLNETVIEW_H
#define UI_FLNETVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flnetview
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *frameDecodeView;
    QPlainTextEdit *dataText;
    QTableWidget *tableWidget;
    QTabWidget *tabWidget;
    QGridLayout *gridLayout_2;
    QLabel *labelnWIO;
    QLineEdit *textSearch;
    QPushButton *btnSearch;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout_3;
    QLabel *labelRecent;
    QLabel *labelJoined;
    QLabel *labelStatus;
    QLabel *labelNever;
    QLabel *labelLeft;
    QPushButton *pushButton;

    void setupUi(QWidget *flnetview)
    {
        if (flnetview->objectName().isEmpty())
            flnetview->setObjectName(QStringLiteral("flnetview"));
        flnetview->resize(810, 719);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(flnetview->sizePolicy().hasHeightForWidth());
        flnetview->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(flnetview);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frameDecodeView = new QTreeWidget(flnetview);
        frameDecodeView->setObjectName(QStringLiteral("frameDecodeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameDecodeView->sizePolicy().hasHeightForWidth());
        frameDecodeView->setSizePolicy(sizePolicy1);
        frameDecodeView->setLineWidth(2);
        frameDecodeView->setAlternatingRowColors(true);
        frameDecodeView->setColumnCount(1);
        frameDecodeView->setProperty("showGrid", QVariant(false));

        gridLayout->addWidget(frameDecodeView, 3, 0, 1, 1);

        dataText = new QPlainTextEdit(flnetview);
        dataText->setObjectName(QStringLiteral("dataText"));

        gridLayout->addWidget(dataText, 3, 1, 1, 1);

        tableWidget = new QTableWidget(flnetview);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setLineWidth(2);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setShowGrid(false);
        tableWidget->setColumnCount(1);
        tableWidget->horizontalHeader()->setDefaultSectionSize(75);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(20);

        gridLayout->addWidget(tableWidget, 1, 0, 1, 2);

        tabWidget = new QTabWidget(flnetview);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        gridLayout->addWidget(tabWidget, 2, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelnWIO = new QLabel(flnetview);
        labelnWIO->setObjectName(QStringLiteral("labelnWIO"));

        gridLayout_2->addWidget(labelnWIO, 0, 2, 1, 1);

        textSearch = new QLineEdit(flnetview);
        textSearch->setObjectName(QStringLiteral("textSearch"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textSearch->sizePolicy().hasHeightForWidth());
        textSearch->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(textSearch, 0, 0, 1, 1);

        btnSearch = new QPushButton(flnetview);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnSearch->sizePolicy().hasHeightForWidth());
        btnSearch->setSizePolicy(sizePolicy3);
        btnSearch->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(btnSearch, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(flnetview);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_2, 0, 3, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelRecent = new QLabel(flnetview);
        labelRecent->setObjectName(QStringLiteral("labelRecent"));
        labelRecent->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelRecent, 1, 2, 1, 1);

        labelJoined = new QLabel(flnetview);
        labelJoined->setObjectName(QStringLiteral("labelJoined"));
        labelJoined->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelJoined, 1, 3, 1, 1);

        labelStatus = new QLabel(flnetview);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        gridLayout_3->addWidget(labelStatus, 1, 0, 1, 1);

        labelNever = new QLabel(flnetview);
        labelNever->setObjectName(QStringLiteral("labelNever"));
        labelNever->setAutoFillBackground(false);
        labelNever->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelNever, 1, 1, 1, 1);

        labelLeft = new QLabel(flnetview);
        labelLeft->setObjectName(QStringLiteral("labelLeft"));
        labelLeft->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelLeft, 1, 4, 1, 1);

        pushButton = new QPushButton(flnetview);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 1, 5, 1, 1);


        gridLayout->addLayout(gridLayout_3, 0, 1, 1, 1);


        retranslateUi(flnetview);
        QObject::connect(btnSearch, SIGNAL(clicked()), flnetview, SLOT(onSearch()));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(flnetview);
    } // setupUi

    void retranslateUi(QWidget *flnetview)
    {
        flnetview->setWindowTitle(QApplication::translate("flnetview", "flnetview", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = frameDecodeView->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("flnetview", "Decoded Frame", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("flnetview", "Time Stamp", Q_NULLPTR));
        labelnWIO->setText(QApplication::translate("flnetview", "WIOs: ", Q_NULLPTR));
        btnSearch->setText(QApplication::translate("flnetview", "Search", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("flnetview", "Clear", Q_NULLPTR));
        labelRecent->setText(QApplication::translate("flnetview", "Data/Commnad", Q_NULLPTR));
        labelJoined->setText(QApplication::translate("flnetview", "Assoc. Req.", Q_NULLPTR));
        labelStatus->setText(QApplication::translate("flnetview", "Status: ", Q_NULLPTR));
        labelNever->setText(QApplication::translate("flnetview", "No Activity", Q_NULLPTR));
        labelLeft->setText(QApplication::translate("flnetview", "Leave Req.", Q_NULLPTR));
        pushButton->setText(QApplication::translate("flnetview", "Create Job", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class flnetview: public Ui_flnetview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLNETVIEW_H
