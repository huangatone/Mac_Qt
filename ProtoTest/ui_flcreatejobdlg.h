/********************************************************************************
** Form generated from reading UI file 'flcreatejobdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLCREATEJOBDLG_H
#define UI_FLCREATEJOBDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include "fltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_FLCreateJobDlg
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTextEdit *leJobComments;
    QComboBox *cbJobStandard;
    QLabel *label_4;
    QCheckBox *checkBox;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *leJobName;
    QLineEdit *leJobPath;
    QPushButton *pbJobPath;
    QLabel *label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    FLTreeWidget *treeWidget;
    QPushButton *pbAddFloor;
    QPushButton *pbDeleteFloor;
    QPushButton *pbEditFloor;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FLCreateJobDlg)
    {
        if (FLCreateJobDlg->objectName().isEmpty())
            FLCreateJobDlg->setObjectName(QStringLiteral("FLCreateJobDlg"));
        FLCreateJobDlg->resize(471, 515);
        gridLayout_3 = new QGridLayout(FLCreateJobDlg);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(FLCreateJobDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        leJobComments = new QTextEdit(groupBox);
        leJobComments->setObjectName(QStringLiteral("leJobComments"));

        gridLayout->addWidget(leJobComments, 5, 1, 1, 1);

        cbJobStandard = new QComboBox(groupBox);
        cbJobStandard->setObjectName(QStringLiteral("cbJobStandard"));

        gridLayout->addWidget(cbJobStandard, 4, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leJobName = new QLineEdit(groupBox);
        leJobName->setObjectName(QStringLiteral("leJobName"));
        leJobName->setMaxLength(20);

        gridLayout->addWidget(leJobName, 0, 1, 1, 1);

        leJobPath = new QLineEdit(groupBox);
        leJobPath->setObjectName(QStringLiteral("leJobPath"));
        leJobPath->setEnabled(false);

        gridLayout->addWidget(leJobPath, 1, 1, 1, 1);

        pbJobPath = new QPushButton(groupBox);
        pbJobPath->setObjectName(QStringLiteral("pbJobPath"));

        gridLayout->addWidget(pbJobPath, 1, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leJobName->raise();
        cbJobStandard->raise();
        label_2->raise();
        pbJobPath->raise();
        label_4->raise();
        label->raise();
        leJobPath->raise();
        leJobComments->raise();
        label_5->raise();
        checkBox->raise();

        gridLayout_3->addWidget(groupBox, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(FLCreateJobDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        treeWidget = new FLTreeWidget(groupBox_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        gridLayout_2->addWidget(treeWidget, 0, 0, 4, 1);

        pbAddFloor = new QPushButton(groupBox_2);
        pbAddFloor->setObjectName(QStringLiteral("pbAddFloor"));

        gridLayout_2->addWidget(pbAddFloor, 0, 1, 1, 1);

        pbDeleteFloor = new QPushButton(groupBox_2);
        pbDeleteFloor->setObjectName(QStringLiteral("pbDeleteFloor"));
        pbDeleteFloor->setEnabled(false);

        gridLayout_2->addWidget(pbDeleteFloor, 1, 1, 1, 1);

        pbEditFloor = new QPushButton(groupBox_2);
        pbEditFloor->setObjectName(QStringLiteral("pbEditFloor"));
        pbEditFloor->setEnabled(false);

        gridLayout_2->addWidget(pbEditFloor, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 0, 1, 1);

        okButton = new QPushButton(FLCreateJobDlg);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout_3->addWidget(okButton, 2, 1, 1, 1);

        cancelButton = new QPushButton(FLCreateJobDlg);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout_3->addWidget(cancelButton, 2, 2, 1, 1);


        retranslateUi(FLCreateJobDlg);
        QObject::connect(treeWidget, SIGNAL(itemClicked(QTreeWidgetItem*,int)), FLCreateJobDlg, SLOT(on_item_clicked(QTreeWidgetItem*,int)));
        QObject::connect(leJobName, SIGNAL(textChanged(QString)), FLCreateJobDlg, SLOT(on_jobname_changed(QString)));

        QMetaObject::connectSlotsByName(FLCreateJobDlg);
    } // setupUi

    void retranslateUi(QDialog *FLCreateJobDlg)
    {
        FLCreateJobDlg->setWindowTitle(QApplication::translate("FLCreateJobDlg", "Create new job", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FLCreateJobDlg", "Job detail", Q_NULLPTR));
        leJobComments->setHtml(QApplication::translate("FLCreateJobDlg", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">New Job</p></body></html>", Q_NULLPTR));
        cbJobStandard->clear();
        cbJobStandard->insertItems(0, QStringList()
         << QApplication::translate("FLCreateJobDlg", "UL(United States)", Q_NULLPTR)
         << QApplication::translate("FLCreateJobDlg", "ULC(Canada)", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("FLCreateJobDlg", "Job Standard", Q_NULLPTR));
        checkBox->setText(QApplication::translate("FLCreateJobDlg", "Set as default path", Q_NULLPTR));
        label_5->setText(QApplication::translate("FLCreateJobDlg", "Comment", Q_NULLPTR));
        label_2->setText(QApplication::translate("FLCreateJobDlg", "Job Path", Q_NULLPTR));
        leJobName->setText(QApplication::translate("FLCreateJobDlg", "NewJob", Q_NULLPTR));
        pbJobPath->setText(QApplication::translate("FLCreateJobDlg", "...", Q_NULLPTR));
        label->setText(QApplication::translate("FLCreateJobDlg", "Job Name", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FLCreateJobDlg", "Job Floors", Q_NULLPTR));
        pbAddFloor->setText(QApplication::translate("FLCreateJobDlg", "Add Floor", Q_NULLPTR));
        pbDeleteFloor->setText(QApplication::translate("FLCreateJobDlg", "Delete Floor", Q_NULLPTR));
        pbEditFloor->setText(QApplication::translate("FLCreateJobDlg", "Edit Floor", Q_NULLPTR));
        okButton->setText(QApplication::translate("FLCreateJobDlg", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("FLCreateJobDlg", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FLCreateJobDlg: public Ui_FLCreateJobDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLCREATEJOBDLG_H
