/********************************************************************************
** Form generated from reading UI file 'qx_about.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QX_ABOUT_H
#define UI_QX_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutDlg
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbOK;
    QSpacerItem *horizontalSpacer;
    QLabel *lblCopyRight;
    QLabel *lblAppName;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *lblVersion;
    QLabel *lblDate;
    QPushButton *pushButton;
    QTextBrowser *tbReleaseNotes;

    void setupUi(QWidget *aboutDlg)
    {
        if (aboutDlg->objectName().isEmpty())
            aboutDlg->setObjectName(QStringLiteral("aboutDlg"));
        aboutDlg->resize(788, 410);
        gridLayout_2 = new QGridLayout(aboutDlg);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(aboutDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 0, 1, 1);

        pbOK = new QPushButton(groupBox);
        pbOK->setObjectName(QStringLiteral("pbOK"));

        gridLayout->addWidget(pbOK, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 3, 1, 1);

        lblCopyRight = new QLabel(groupBox);
        lblCopyRight->setObjectName(QStringLiteral("lblCopyRight"));

        gridLayout->addWidget(lblCopyRight, 2, 0, 1, 4);

        lblAppName = new QLabel(groupBox);
        lblAppName->setObjectName(QStringLiteral("lblAppName"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lblAppName->setFont(font);
        lblAppName->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblAppName, 0, 0, 1, 4);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        lblVersion = new QLabel(groupBox_2);
        lblVersion->setObjectName(QStringLiteral("lblVersion"));

        gridLayout_3->addWidget(lblVersion, 0, 1, 1, 1);

        lblDate = new QLabel(groupBox_2);
        lblDate->setObjectName(QStringLiteral("lblDate"));

        gridLayout_3->addWidget(lblDate, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 4);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        tbReleaseNotes = new QTextBrowser(aboutDlg);
        tbReleaseNotes->setObjectName(QStringLiteral("tbReleaseNotes"));
        tbReleaseNotes->setLineWrapMode(QTextEdit::NoWrap);

        gridLayout_2->addWidget(tbReleaseNotes, 0, 1, 1, 1);


        retranslateUi(aboutDlg);

        QMetaObject::connectSlotsByName(aboutDlg);
    } // setupUi

    void retranslateUi(QWidget *aboutDlg)
    {
        aboutDlg->setWindowTitle(QApplication::translate("aboutDlg", "About Fire-Link Config", Q_NULLPTR));
        groupBox->setTitle(QString());
        pbOK->setText(QApplication::translate("aboutDlg", "Ok", Q_NULLPTR));
        lblCopyRight->setText(QApplication::translate("aboutDlg", "Copyright", Q_NULLPTR));
        lblAppName->setText(QApplication::translate("aboutDlg", "Config", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("aboutDlg", "Version No :", Q_NULLPTR));
        lblVersion->setText(QApplication::translate("aboutDlg", "Vers No", Q_NULLPTR));
        lblDate->setText(QApplication::translate("aboutDlg", "Date", Q_NULLPTR));
        pushButton->setText(QApplication::translate("aboutDlg", "Check version", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aboutDlg: public Ui_aboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QX_ABOUT_H
