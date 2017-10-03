#ifndef SPLITPHOTODIALOG_H
#define SPLITPHOTODIALOG_H

#include <QDialog>

#include <QAbstractButton>

namespace Ui {
class SplitPhotoDialog;
}

class SplitPhotoDialog : public QDialog
{
	Q_OBJECT

public:
	explicit SplitPhotoDialog(QWidget *parent = 0);
	~SplitPhotoDialog();
protected:

private:
	Ui::SplitPhotoDialog *ui;

	// QWidget interface
protected:
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void paintEvent(QPaintEvent *event);

	void save_image();
private slots:
	void on_spinBox_valueChanged(int arg1);
	void on_spinBox_2_valueChanged(int arg1);
	void on_toolButton_clicked();
	void on_buttonBox_clicked(QAbstractButton *button);
};

#endif // SPLITPHOTODIALOG_H
