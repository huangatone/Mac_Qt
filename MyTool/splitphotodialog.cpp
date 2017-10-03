#include "splitphotodialog.h"
#include "ui_splitphotodialog.h"

#include <QPainter>

SplitPhotoDialog::SplitPhotoDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::SplitPhotoDialog)
{
	ui->setupUi(this);
	QImage img("/Users/rong/Desktop/Work/12.png");

	//ui->label->setPixmap( QPixmap::fromImage( img.scaled(ui->label->size())));
}

SplitPhotoDialog::~SplitPhotoDialog()
{
	delete ui;
}

void SplitPhotoDialog::mousePressEvent(QMouseEvent *event){}

void SplitPhotoDialog::mouseReleaseEvent(QMouseEvent *event){}

void SplitPhotoDialog::mouseMoveEvent(QMouseEvent *event){}

void SplitPhotoDialog::paintEvent(QPaintEvent *event)
{
	QPainter p(this);
	QRect rt = ui->label->geometry();

	QImage img( ui->lineEdit->text() );

	p.drawImage(rt,img,img.rect());

	p.drawText(rt,Qt::AlignCenter,"Get you");

	int row = ui->spinBox->value()+1;
	int col = ui->spinBox_2->value()+1;

	int x_range = rt.width() / col;
	int y_range = rt.height() /row;

	for(int n = 1; n < row; n++)
	{
		p.drawLine(rt.x(), rt.y() + y_range * n , rt.right(), rt.y()+ y_range * n );
	}

	for(int m = 0; m< col; m++)
	{
		p.drawLine(rt.x() + x_range * m , rt.y() , rt.x() + x_range * m , rt.bottom() );
	}

}

void SplitPhotoDialog::save_image()
{


	QImage img( ui->lineEdit->text() );

	QRect rt = img.rect();

	int row = ui->spinBox->value()+1;
	int col = ui->spinBox_2->value()+1;

	int x_range = rt.width() / col;
	int y_range = rt.height() /row;

	for(int n=0; n< row; n++)
	{
		for(int m=0; m< col; m++)
		{
			QImage sub(x_range, y_range,QImage::Format_ARGB32);
			QPainter p(&sub);
			p.drawImage( sub.rect(), img, QRect( n* x_range, m * y_range, x_range, y_range) );

			QString str = QString("/Users/rong/Desktop/Work/dd_%1_%2.png").arg(n).arg(m);
			sub.save( str );
		}
	}
}

void SplitPhotoDialog::on_spinBox_valueChanged(int arg1)
{
	update();
}

void SplitPhotoDialog::on_spinBox_2_valueChanged(int arg1)
{
	update();
}

void SplitPhotoDialog::on_toolButton_clicked()
{

}

void SplitPhotoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
	if(button == (QAbstractButton*) ui->buttonBox->button( QDialogButtonBox::Ok ) )
	{
		save_image();
	}
}
