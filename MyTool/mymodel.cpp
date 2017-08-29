#include "mymodel.h"
#include <QDate>

MyModel::MyModel(QObject *parent)
	:QStandardItemModel(parent )
{
	setColumnCount(10);
	setRowCount(11);

	for(int n=0; n<10; n++)
	{
		setHeaderData( n,Qt::Horizontal,QString::number(n) + " Col");
		setHeaderData( n,Qt::Vertical,QString::number(n) + " Row");
	}

	for(int n=0; n<10; n++)
		for(int m=0; m<10; m++)
		{
			QModelIndex in = index(m,n);//QAbstractItemModel::createIndex(m,n);
			setData(in,QString::number(n) + " * " + QString::number(m) );
		}


	QModelIndex in = index(10,0);//QAbstractItemModel::createIndex(m,n);
	setData(in,QColor(Qt::red) );
	setData( index(10,1), QDate::currentDate());
}



QVariant MyModel::headerData(int section, Qt::Orientation orientation, int role ) const
{
	//NOTE: please fix at 9
	/*if(role == Qt::DisplayRole && orientation == Qt::Horizontal)
		return "Col" + QString::number(section);
	if(role == Qt::DisplayRole && orientation == Qt::Vertical)
		return "Col" + QString::number(section);*/
	return QStandardItemModel::headerData(section,orientation,role);
}


QVariant MyModel::data(const QModelIndex &index, int role ) const
{
	/*index.row();
	index.column();
	if(role == Qt::DisplayRole)
		return QString::number(index.row()) + " - " + QString::number(index.column());*/
	return QStandardItemModel::data(index,  role );
}

MyDB::MyDB(QObject *p)
	:QObject(p)
{

}

MyDB::~MyDB(){}
