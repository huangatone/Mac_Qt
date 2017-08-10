/********************************************************************************
** Form generated from reading UI file 'fljobwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLJOBWINDOW_H
#define UI_FLJOBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FLJobWindow
{
public:
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionDelete;
    QAction *actionWrite;
    QAction *actionDockProperty;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QTabWidget *tabWidget;
    QWidget *tab;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *FLJobWindow)
    {
        if (FLJobWindow->objectName().isEmpty())
            FLJobWindow->setObjectName(QStringLiteral("FLJobWindow"));
        FLJobWindow->resize(579, 462);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pro/Resources/icons/OTA_logo_400x400.png"), QSize(), QIcon::Normal, QIcon::Off);
        FLJobWindow->setWindowIcon(icon);
        actionOpen = new QAction(FLJobWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pro/Resources/icons/file-manager-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionNew = new QAction(FLJobWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pro/Resources/icons/app-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon2);
        actionSave = new QAction(FLJobWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/pro/Resources/icons/save-as-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionDelete = new QAction(FLJobWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/pro/Resources/icons/add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon4);
        actionWrite = new QAction(FLJobWindow);
        actionWrite->setObjectName(QStringLiteral("actionWrite"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/pro/Resources/icons/job-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWrite->setIcon(icon5);
        actionDockProperty = new QAction(FLJobWindow);
        actionDockProperty->setObjectName(QStringLiteral("actionDockProperty"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/pro/Resources/icons/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDockProperty->setIcon(icon6);
        centralWidget = new QWidget(FLJobWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        dockWidget = new QDockWidget(centralWidget);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFeatures(QDockWidget::NoDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);

        gridLayout->addWidget(dockWidget, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        dockWidget_3 = new QDockWidget(centralWidget);
        dockWidget_3->setObjectName(QStringLiteral("dockWidget_3"));
        dockWidget_3->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidget_3->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        dockWidget_3->setWidget(dockWidgetContents_3);

        gridLayout->addWidget(dockWidget_3, 0, 2, 1, 1);

        FLJobWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(FLJobWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setLayoutDirection(Qt::LeftToRight);
        toolBar->setAllowedAreas(Qt::LeftToolBarArea);
        toolBar->setOrientation(Qt::Vertical);
        toolBar->setIconSize(QSize(36, 36));
        FLJobWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        menuBar = new QMenuBar(FLJobWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 579, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        FLJobWindow->setMenuBar(menuBar);

        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionWrite);
        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionOpen);

        retranslateUi(FLJobWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FLJobWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FLJobWindow)
    {
        FLJobWindow->setWindowTitle(QApplication::translate("FLJobWindow", "FLJobWindow", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("FLJobWindow", "Open", Q_NULLPTR));
        actionNew->setText(QApplication::translate("FLJobWindow", "New", Q_NULLPTR));
        actionSave->setText(QApplication::translate("FLJobWindow", "Save", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("FLJobWindow", "Delete", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("FLJobWindow", "close job", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionWrite->setText(QApplication::translate("FLJobWindow", "Write", Q_NULLPTR));
        actionDockProperty->setText(QApplication::translate("FLJobWindow", "DockProperty", Q_NULLPTR));
        dockWidget->setWindowTitle(QApplication::translate("FLJobWindow", "Jobs", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FLJobWindow", "Tab 1", Q_NULLPTR));
        dockWidget_3->setWindowTitle(QApplication::translate("FLJobWindow", "Properties", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("FLJobWindow", "toolBar", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("FLJobWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLJobWindow: public Ui_FLJobWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLJOBWINDOW_H
