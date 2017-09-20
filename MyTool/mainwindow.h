#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	void addItem(QString str);
protected slots:
	void on_dateEdit_dateChanged( const QDate&);
	void on_toolButton_clicked(){}
	void on_btnCalendar_clicked();

	void slot_clicked(const QDate &date);
private:
	Ui::MainWindow *ui;

	int my_age = 10;
};

#endif // MAINWINDOW_H
