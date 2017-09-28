#ifndef EDCWIDGET_H
#define EDCWIDGET_H

#include <QWidget>
#include <QEvent>
#include <QDebug>
#include <QApplication>

namespace Ui {
class EDCWidget;
}

class EDCWidget : public QWidget
{
	Q_OBJECT

public:
	explicit EDCWidget(QWidget *parent = 0);
	~EDCWidget();

private slots:

	void on_btn1_clicked();


private:
	 bool event(QEvent* ev);

private:
	Ui::EDCWidget *ui;
};

#endif // EDCWIDGET_H
