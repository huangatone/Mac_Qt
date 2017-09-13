#include "drawwidget.h"
#include <QPainter>

DrawWidget::DrawWidget(QWidget *parent) : QWidget(parent)
{

}

void DrawWidget::paintEvent(QPaintEvent *e)
{
	QPainter p(this);

	p.fillRect(rect(), QBrush(Qt::gray));

	QRect d_rt(0,0,20,10);
	QRect rt = rect();

	p.translate( rt.width()/2, rt.height()/2);

	p.setPen(Qt::red);
	p.drawRect(d_rt);

	p.rotate(90);

	p.setPen(Qt::green);
	p.drawRect(d_rt);

	p.rotate(90);

	p.setPen(Qt::yellow);
	p.drawRect(d_rt);

	p.rotate(90);

	p.setPen(Qt::black);
	p.drawRect(d_rt);

	p.resetTransform();

	p.setBackgroundMode(Qt::OpaqueMode);
	p.setBackground(QBrush( Qt::darkGray) );
	p.setPen( Qt::white );
	p.setRenderHint(QPainter::SmoothPixmapTransform);

	QPixmap pix("/Users/rong/Desktop/Work/12.png");

	p.drawPixmap(rt,pix,pix.rect());


}
