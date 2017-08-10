/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_x;
    QLabel *label_2;
    QLineEdit *le_y;
    QLabel *label_3;
    QLineEdit *le_width;
    QLabel *label_4;
    QLineEdit *le_height;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_7;
    QToolButton *btnCheckbox;
    QToolButton *btnText;
    QToolButton *btnRadiobox;
    QToolButton *btnCombo;
    QToolButton *btnBarcode;
    QToolButton *toolButton_6;
    QTableWidget *tbProperty;
    QWidget *widget;
    QPushButton *btnApply;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QGraphicsView *graphicsView;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(938, 687);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_x = new QLineEdit(groupBox);
        le_x->setObjectName(QStringLiteral("le_x"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_x->sizePolicy().hasHeightForWidth());
        le_x->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(le_x, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_y = new QLineEdit(groupBox);
        le_y->setObjectName(QStringLiteral("le_y"));

        gridLayout->addWidget(le_y, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        le_width = new QLineEdit(groupBox);
        le_width->setObjectName(QStringLiteral("le_width"));

        gridLayout->addWidget(le_width, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        le_height = new QLineEdit(groupBox);
        le_height->setObjectName(QStringLiteral("le_height"));

        gridLayout->addWidget(le_height, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        toolButton_7 = new QToolButton(groupBox_3);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));

        gridLayout_2->addWidget(toolButton_7, 6, 0, 1, 1);

        btnCheckbox = new QToolButton(groupBox_3);
        btnCheckbox->setObjectName(QStringLiteral("btnCheckbox"));
        btnCheckbox->setMinimumSize(QSize(48, 36));
        QIcon icon;
        icon.addFile(QStringLiteral(":/app/img/par_1411128613.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btnCheckbox->setIcon(icon);
        btnCheckbox->setIconSize(QSize(48, 36));

        gridLayout_2->addWidget(btnCheckbox, 0, 0, 1, 1);

        btnText = new QToolButton(groupBox_3);
        btnText->setObjectName(QStringLiteral("btnText"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/app/img/red-label.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        btnText->setIcon(icon1);
        btnText->setIconSize(QSize(48, 36));

        gridLayout_2->addWidget(btnText, 2, 0, 1, 1);

        btnRadiobox = new QToolButton(groupBox_3);
        btnRadiobox->setObjectName(QStringLiteral("btnRadiobox"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/app/img/custom-radio-buttons.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRadiobox->setIcon(icon2);
        btnRadiobox->setIconSize(QSize(48, 36));

        gridLayout_2->addWidget(btnRadiobox, 1, 0, 1, 1);

        btnCombo = new QToolButton(groupBox_3);
        btnCombo->setObjectName(QStringLiteral("btnCombo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/app/img/combobox-data-entry-s.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCombo->setIcon(icon3);
        btnCombo->setIconSize(QSize(48, 36));

        gridLayout_2->addWidget(btnCombo, 0, 1, 1, 1);

        btnBarcode = new QToolButton(groupBox_3);
        btnBarcode->setObjectName(QStringLiteral("btnBarcode"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/app/img/barcode.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBarcode->setIcon(icon4);
        btnBarcode->setIconSize(QSize(48, 36));

        gridLayout_2->addWidget(btnBarcode, 1, 1, 1, 1);

        toolButton_6 = new QToolButton(groupBox_3);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));

        gridLayout_2->addWidget(toolButton_6, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        tbProperty = new QTableWidget(centralWidget);
        if (tbProperty->columnCount() < 3)
            tbProperty->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbProperty->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbProperty->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbProperty->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tbProperty->rowCount() < 3)
            tbProperty->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbProperty->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tbProperty->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tbProperty->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tbProperty->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tbProperty->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tbProperty->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tbProperty->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tbProperty->setItem(1, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tbProperty->setItem(1, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tbProperty->setItem(2, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tbProperty->setItem(2, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tbProperty->setItem(2, 2, __qtablewidgetitem14);
        tbProperty->setObjectName(QStringLiteral("tbProperty"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tbProperty->sizePolicy().hasHeightForWidth());
        tbProperty->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(tbProperty);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        btnApply = new QPushButton(centralWidget);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnApply->sizePolicy().hasHeightForWidth());
        btnApply->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(btnApply);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 2);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout_4->addWidget(graphicsView, 0, 0, 1, 1);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 298, 566));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_4->addWidget(scrollArea, 0, 1, 1, 1);


        gridLayout_3->addWidget(frame, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 938, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Page Setting", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        le_x->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        le_y->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Width", Q_NULLPTR));
        le_width->setText(QApplication::translate("MainWindow", "768", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Height", Q_NULLPTR));
        le_height->setText(QApplication::translate("MainWindow", "1024", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Tool", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        btnCheckbox->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        btnText->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        btnRadiobox->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        btnCombo->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        btnBarcode->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tbProperty->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Item", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tbProperty->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tbProperty->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Value", Q_NULLPTR));

        const bool __sortingEnabled = tbProperty->isSortingEnabled();
        tbProperty->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tbProperty->item(0, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tbProperty->item(0, 1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Canada", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tbProperty->item(0, 2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tbProperty->item(1, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tbProperty->item(1, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "AM", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tbProperty->item(1, 2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tbProperty->item(2, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tbProperty->item(2, 1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "China", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tbProperty->item(2, 2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        tbProperty->setSortingEnabled(__sortingEnabled);

        btnApply->setText(QApplication::translate("MainWindow", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
