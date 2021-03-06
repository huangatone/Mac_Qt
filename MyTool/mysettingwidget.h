#ifndef MYSETTINGWIDGET_H
#define MYSETTINGWIDGET_H

#include <QWidget>

#include "animation.h"


namespace Ui {
class MySettingWidget;
}

class MySettingWidget : public QWidget
{
	Q_OBJECT

public:
	explicit MySettingWidget(QWidget *parent = 0);
	~MySettingWidget();

	void add_widget( QString title, QWidget* w);
	QWidget* current_widget();
protected slots:
	void on_listWidget_currentRowChanged(int currentRow);
	void animationFinished();
private:
	Ui::MySettingWidget *ui;

	Animation animation;
	int currentIndex;
};

#endif // MYSETTINGWIDGET_H
