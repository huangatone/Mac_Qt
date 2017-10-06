#include "splitphotodialog.h"
#include "ui_splitphotodialog.h"

#include <QPainter>
#include <QMouseEvent>
#include <QDebug>

bool SortVLine( QLine &l1, QLine &l2)
{
	return l1.x1() < l2.x1();
}

bool SortHLine( QLine l1, QLine l2)
{
	return l1.y1() < l2.y1();
}


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

void SplitPhotoDialog::mousePressEvent(QMouseEvent *event)
{
	QPoint pt = event->pos();
	v_select_line = -1;
	for(int n=0; n< v_line.count(); n++)
	{
		if( isInLine (  pt.x(), v_line[n].x1() ))
		{
			v_select_line = n;
			break;
		}
	}
	h_select_line = -1;
	for(int n=0; n< h_line.count(); n++)
	{
		if( isInLine( pt.y(), h_line[n].y1() ))
		{
			h_select_line = n;
			break;
		}
	}
}

void SplitPhotoDialog::mouseReleaseEvent(QMouseEvent *event)
{
	h_select_line = -1;
	v_select_line = -1;
}

void SplitPhotoDialog::mouseMoveEvent(QMouseEvent *event)
{
	if(event->buttons() & Qt::LeftButton)
	{
		int x = event->x();
		int y = event->y();

		qDebug() << "Moving.....";
		if(h_select_line != -1)
		{
			h_line[h_select_line] = QLine( h_line[h_select_line].x1(),y, h_line[h_select_line].x2(),y);
		}

		if(v_select_line != -1)
		{
			v_line[v_select_line] = QLine(x, v_line[v_select_line].y1(), x, v_line[v_select_line].y2());
		}

		update();
	}
}

void SplitPhotoDialog::paintEvent(QPaintEvent *event)
{
	QPainter p(this);
	QRect rt = ui->label->geometry();

	QImage img( ui->lineEdit->text() );

	p.drawImage(rt,img,img.rect());

	p.drawText(rt,Qt::AlignCenter,"Get you");

	foreach(auto line, v_line)
		p.drawLine( line);
	foreach(auto line, h_line)
		p.drawLine( line);

}


int SplitPhotoDialog::getX(int value, float ratio)
{
	return ( value - ui->label->x()) * ratio;
}

int SplitPhotoDialog::getY(int value, float ratio)
{
	return ( value - ui->label->y()) * ratio;
}

void SplitPhotoDialog::save_image()
{
	QImage img( ui->lineEdit->text() );

	QRect rt = img.rect();
	std::sort( v_line.begin(),v_line.end(), SortVLine);
	std::sort( h_line.begin(),h_line.end(), SortHLine);

	int row = h_line.count();
	int col = v_line.count();

	float x_ratio = ((float)rt.width()) / ui->label->rect().width();
	float y_ratio = ((float)rt.height()) / ui->label->rect().height();

	int x = 0;
	int y = 0;

	int w = 0;
	int h = 0;

	for(int n=0; n< row; n++)
	{
		x = 0;
		for(int m=0; m< col; m++)
		{
			w = getX( v_line[m].x1() ,x_ratio);
			h = getY(h_line[n].y1(),y_ratio);

			QImage sub(w-x, h-y,QImage::Format_ARGB32);
			QPainter p(&sub);
			p.drawImage( sub.rect(), img, QRect( x, y, w -x , h-y ) );
			QString str = QString("/Users/rong/Desktop/Work/dd_%1_%2.png").arg(n).arg(m);
			sub.save( str );
			x = w;
		}

		QImage sub(rt.width()-x, h-y,QImage::Format_ARGB32);
		QPainter p(&sub);
		p.drawImage( sub.rect(), img, QRect( x, y, rt.width()-x,  h-y ) );
		QString str = QString("/Users/rong/Desktop/Work/dd_%1_%2.png").arg(n).arg(col);
		sub.save( str );
		y = h;
	}

	x = 0;
	for(int m=0; m< col; m++)
	{
		w = getX( v_line[m].x1() ,x_ratio);
		h = rt.height();

		QImage sub(w-x, h-y,QImage::Format_ARGB32);
		QPainter p(&sub);
		p.drawImage( sub.rect(), img, QRect( x, y, v_line[m].x1(), rt.height()) );

		QString str = QString("/Users/rong/Desktop/Work/dd_%1_%2.png").arg(row).arg(m);
		sub.save( str );
		x = w;
	}

	QImage sub(rt.width()-x, rt.height()-y,QImage::Format_ARGB32);
	QPainter p(&sub);
	p.drawImage( sub.rect(), img, QRect( x, y, rt.width()-x, rt.height()-y) );
	QString str = QString("/Users/rong/Desktop/Work/dd_%1_%2.png").arg(row).arg(col);
	sub.save( str );

}

bool SplitPhotoDialog::isInLine(int value, int line)
{
	return (value > line -2 && value < line +2);
}
//row
void SplitPhotoDialog::on_spinBox_valueChanged(int arg1)
{
	update();
	h_line.clear();
	QRect rt = ui->label->geometry();
	int row = ui->spinBox->value()+1;
	int y_range = rt.height() /row;

	for(int n = 1; n < row; n++)
	{
		h_line.append( QLine( rt.x(), rt.y() + y_range * n , rt.right(), rt.y()+ y_range * n ));
	}
}
//col
void SplitPhotoDialog::on_spinBox_2_valueChanged(int arg1)
{
	update();
	v_line.clear();
	QRect rt = ui->label->geometry();
	int col = ui->spinBox_2->value()+1;
	int x_range = rt.width() / col;

	for(int m = 1; m< col; m++)
	{
		v_line.append( QLine(rt.x() + x_range * m , rt.y() , rt.x() + x_range * m , rt.bottom()) );
	}
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
