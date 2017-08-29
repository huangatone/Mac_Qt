#ifndef MYMODEL_H
#define MYMODEL_H

#include <QObject>
#include <QStandardItemModel>


class MyDB : public QObject
{
	Q_OBJECT
public:
	MyDB( QObject* p = nullptr);
	~MyDB();


};

class MyModel : public QStandardItemModel
{
	Q_OBJECT
public:
	MyModel(QObject *parent = Q_NULLPTR);

	virtual QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
	virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const ;

};

#endif // MYMODEL_H
