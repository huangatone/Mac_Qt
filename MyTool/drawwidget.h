#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>

class DrawWidget : public QWidget
{
	Q_OBJECT
public:
	explicit DrawWidget(QWidget *parent = nullptr);


protected:
	void paintEvent(QPaintEvent *e);
signals:

public slots:
};

#endif // DRAWWIDGET_H
