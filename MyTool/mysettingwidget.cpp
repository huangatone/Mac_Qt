#include "mysettingwidget.h"
#include "ui_mysettingwidget.h"

#include "mymodel.h"
#include "mystyledelegate.h"

MySettingWidget::MySettingWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::MySettingWidget)
{
	ui->setupUi(this);

	animation.setPrameters(300,UP_TO_DOWN,QEasingCurve::InElastic);

	ui->listWidget->addItem("1");
	ui->listWidget->addItem("2");

	connect(&this->animation.animation, SIGNAL(finished()), this, SLOT(animationFinished()));


	MyModel* md = new MyModel(this);
	ui->tableView->setModel(md);
	MyStyleDelegate* st = new MyStyleDelegate(this);
	ui->tableView->setItemDelegate(st);
	ui->dateEdit->setDate(QDate::fromString("2010/02/02","yyyy/MM/dd"));
	ui->dateEdit_2->setDate(QDate::currentDate());
	ui->dateEdit->setCurrentSectionIndex(1);

}

MySettingWidget::~MySettingWidget()
{
	delete ui;
}


void MySettingWidget::add_widget(QString title, QWidget *w)
{
	ui->listWidget->addItem(title);
	ui->stackedWidget->addWidget(w);
}


void MySettingWidget::on_listWidget_currentRowChanged(int currentRow)
{
	int previous=this->currentIndex;
	this->currentIndex=currentRow;
	animation.start(ui->stackedWidget->widget(currentRow),ui->stackedWidget->widget(previous));
}

QWidget* MySettingWidget::current_widget()
{
	return ui->stackedWidget->widget(currentIndex);
}

void MySettingWidget::animationFinished()
{
	this->ui->stackedWidget->setCurrentIndex(this->currentIndex);
}
