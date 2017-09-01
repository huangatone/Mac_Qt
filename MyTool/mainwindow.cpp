#include "mainwindow.h"
#include "ui_mainwindow.h"



#include <QDesktopWidget>
#include <QStandardItemModel>
#include <QStandardPaths>

//#include <windows.h>
#include <QDebug>
#include <QDir>
#include <QDirModel>

#include "mymodel.h"
#include "dialog.h"
#include "myinputdialog.h"
#include "mtthread.h"

#include <vector>

using namespace  std;


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);


	QDirModel *modeldir = new QDirModel(this);
	modeldir->setFilter(QDir::AllDirs|QDir::Hidden|QDir::System);
	modeldir->setReadOnly(false);

		// Tie TreeView with DirModel
		// QTreeView::setModel(QAbstractItemModel * model)
		// Reimplemented from QAbstractItemView::setModel().
	 ui->treeView->setModel(modeldir);


	 QPair<QIcon, QString> para;
	 QFileIconProvider *provider = new QFileIconProvider;
	 para.second = QStandardPaths::standardLocations(QStandardPaths::DesktopLocation).first();//QDesktopServices::storageLocation(QDesktopServices::DesktopLocation);
	 para.first = provider->icon(QFileInfo(para.second));
	 ui->comboBox->addItem(para.first, para.second);


	 para.second = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).first();
 //    para.second = QDesktopServices::storageLocation(QDesktopServices::DocumentsLocation);
	 para.first = provider->icon(QFileInfo(para.second));
	 ui->comboBox->addItem(para.first, para.second);

	 QStandardPaths::standardLocations(QStandardPaths::HomeLocation).first();
 //    para.second = QDesktopServices::storageLocation(QDesktopServices::HomeLocation);
	 para.first = provider->icon(QFileInfo(para.second));
	 ui->comboBox->addItem(para.first, para.second);

	 QFileInfoList lista = QDir::drives();
	 while(!lista.isEmpty())
	 {
		 para.second = lista.takeFirst().filePath();
		 para.first = provider->icon(QFileInfo(para.second));
		 ui->comboBox->addItem(para.first, para.second);
	 }
	 delete provider;

//[a-zA-Z0-9]{1,100}
	 QRegExpValidator* vpro = new QRegExpValidator(QRegExp("[0-9]{4}/[0-9]{1,2}/[0-9]{1,2}"),this);
	 ui->lineEdit ->setValidator(vpro);
	 ui->lineEdit_2 ->setValidator(new QRegExpValidator(QRegExp("[\\w]{1,100}"),this));

	 ui->dateEdit->setDate(QDate::fromString("2012/9/09","yyyy/MM/dd"));
	 ui->dateEdit->setCurrentSectionIndex(0);
	//connect(ui->dateEdit,SIGNAL(dateChanged(QDate)), this ,SLOT(on_dateEdit_dateChanged(QDate)));
	 ui->comboBox_2->setCurrentIndex(-1);

	 QDate dt = QDate::fromString("2012/10/2","yyyy/M/d");
	 //if(dt == QDate() )qDebug() << dt;
	 //qDebug() << dt.toString("yyyy/MM/dd");
	 dt = QDate();

	 MyInputDialog dlg;

	 QButtonGroup* gr = new QButtonGroup(this);
	 QRadioButton* r1 = new QRadioButton( "Choise 1", this);
	 QRadioButton* r2 = new QRadioButton("Choise 2", this);
	 gr->addButton(r1);
	 gr->addButton(r2);

	 dlg.insertWidget(r1);
	 dlg.insertWidget(r2);
	// dlg.exec();

	 vector<int> iVector;
	 for(int i=0; i<20; i++)
		 iVector.push_back(i*4);

	 for_each( begin(iVector), end(iVector), [](int n){
		 //if(n%2==0)
			//qDebug() << n;
	 });

	 for (auto itm : iVector) {
		//qDebug() << itm;
		 }

	// qDebug() << "age = " << my_age;
	 float ourArray[5];

	 for(auto& i: ourArray)
	 {
		i = 10.004f;
	 }

	 for(auto& i: ourArray)
	 {
		//qDebug() << i;
	 }
	/*MtThread th;
	th.pa = this;
	th.thread1();
	th.thread2();
*/

	std::unique_ptr<long> p(new long);

	*p = 10;
}

MainWindow::~MainWindow()
{
	delete ui;
}


void MainWindow::on_dateEdit_dateChanged(const QDate& date)
{
	QString str = date.toString("yyyy/MM/dd");
	qDebug() << str;
}

void MainWindow::on_toolButton_clicked()
{
	auto aa = ui->lineEdit_7->text();
	QDate dt = QDate::fromString( aa ,"yyyy/MM/dd");
	ui->lineEdit_4->setText( dt.toString("yyyy/MM/dd"));

	dt = QDate::fromString( ui->lineEdit_7->text() ,"yy/M/d");
	ui->lineEdit_5->setText( dt.toString("yyyy/MM/dd"));

	dt = QDate::fromString( ui->lineEdit_7->text() ,"yy/M/d");
	ui->lineEdit_6->setText( dt.toString("yyyy/MM/dd"));

	/*Dialog dlg;

	QDateEdit *ed = new QDateEdit();
	dlg.setWidget(ed);


	dlg.exec();*/
}


void MainWindow::addItem(QString str)
{
	ui->comboBox_2->addItem(str);
}
