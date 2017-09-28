#include "edcwidget.h"
#include "ui_edcwidget.h"

EDCWidget::EDCWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::EDCWidget)
{
	ui->setupUi(this);
	//connect(ui->btn1,SIGNAL(clicked()), this, SLOT( on_btn1_clicked()));
}

EDCWidget::~EDCWidget()
{
	delete ui;
}

void EDCWidget::on_btn1_clicked()
{
	qDebug() << "User event";
	QEvent * e = new QEvent (QEvent::User);
	QApplication::sendEvent(this, e);
}

bool EDCWidget::event(QEvent *ev)
{
	if(ev->type() == QEvent::User )
	{
		qDebug() << "User event";
		return true;
	}
	return QWidget::event(ev);
}
