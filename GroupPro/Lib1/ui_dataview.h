/********************************************************************************
** Form generated from reading UI file 'dataview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAVIEW_H
#define UI_DATAVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataView
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *dataLbl;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnView;
    QToolButton *addBtn;
    QToolButton *editBtn;
    QToolButton *deleteBtn;
    QToolButton *replyBtn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout1;
    QTextBrowser *browser;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *DataView)
    {
        if (DataView->objectName().isEmpty())
            DataView->setObjectName(QStringLiteral("DataView"));
        DataView->setEnabled(true);
        DataView->resize(333, 265);
        gridLayout = new QGridLayout(DataView);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(1);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(1);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        dataLbl = new QLabel(DataView);
        dataLbl->setObjectName(QStringLiteral("dataLbl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dataLbl->sizePolicy().hasHeightForWidth());
        dataLbl->setSizePolicy(sizePolicy);
        dataLbl->setMinimumSize(QSize(50, 20));
        dataLbl->setAlignment(Qt::AlignCenter);

        hboxLayout->addWidget(dataLbl);

        comboBox = new QComboBox(DataView);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        btnView = new QToolButton(DataView);
        btnView->setObjectName(QStringLiteral("btnView"));

        hboxLayout->addWidget(btnView);

        addBtn = new QToolButton(DataView);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setMinimumSize(QSize(22, 22));
        addBtn->setMaximumSize(QSize(22, 22));

        hboxLayout->addWidget(addBtn);

        editBtn = new QToolButton(DataView);
        editBtn->setObjectName(QStringLiteral("editBtn"));
        editBtn->setMinimumSize(QSize(22, 22));
        editBtn->setMaximumSize(QSize(22, 22));

        hboxLayout->addWidget(editBtn);

        deleteBtn = new QToolButton(DataView);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setMinimumSize(QSize(22, 22));
        deleteBtn->setMaximumSize(QSize(22, 22));

        hboxLayout->addWidget(deleteBtn);

        replyBtn = new QToolButton(DataView);
        replyBtn->setObjectName(QStringLiteral("replyBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(replyBtn->sizePolicy().hasHeightForWidth());
        replyBtn->setSizePolicy(sizePolicy2);
        replyBtn->setMinimumSize(QSize(22, 22));
        replyBtn->setMaximumSize(QSize(22, 22));
        replyBtn->setFocusPolicy(Qt::NoFocus);
        replyBtn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(replyBtn);


        vboxLayout->addLayout(hboxLayout);

        stackedWidget = new QStackedWidget(DataView);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout1 = new QGridLayout(page);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(1, 1, 1, 1);
        browser = new QTextBrowser(page);
        browser->setObjectName(QStringLiteral("browser"));
        browser->setFocusPolicy(Qt::ClickFocus);
        browser->setTabChangesFocus(true);

        gridLayout1->addWidget(browser, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        vboxLayout->addWidget(stackedWidget);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);


        retranslateUi(DataView);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DataView);
    } // setupUi

    void retranslateUi(QWidget *DataView)
    {
        DataView->setWindowTitle(QApplication::translate("DataView", "Data View", Q_NULLPTR));
        dataLbl->setText(QApplication::translate("DataView", "Data View", Q_NULLPTR));
        btnView->setText(QApplication::translate("DataView", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addBtn->setToolTip(QApplication::translate("DataView", "Add", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        addBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        editBtn->setToolTip(QApplication::translate("DataView", "Edit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        editBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteBtn->setToolTip(QApplication::translate("DataView", "Delete", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        deleteBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        replyBtn->setToolTip(QApplication::translate("DataView", "Reply to Query", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        replyBtn->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DataView", "Cagetory", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DataView", "Detail", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataView: public Ui_DataView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAVIEW_H
