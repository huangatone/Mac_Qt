#include "drawwidget.h"
#include <QPainter>

DrawWidget::DrawWidget(QWidget *parent) : QWidget(parent)
{

}

void DrawWidget::paintEvent(QPaintEvent *e)
{
	QPainter p(this);

	p.fillRect(rect(), QBrush(Qt::white));

	QRect d_rt(0,0,20,10);
	QRect rt = rect();

	p.save();
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

	p.restore();
	p.resetTransform();

	QRectF rectangle(10.0, 20.0, 80.0, 60.0);

	QPainter painter(this);
	painter.drawRoundedRect(rectangle, rectangle.width() /2 , rectangle.height() / 2);
	return;
	//NOTE draw picture with mode
	p.setCompositionMode(QPainter::RasterOp_SourceXorDestination);	
	p.setRenderHint(QPainter::SmoothPixmapTransform);

	QPixmap pix("/Users/rong/Desktop/Work/13.png");

	p.drawPixmap(rt,pix,pix.rect());


}
