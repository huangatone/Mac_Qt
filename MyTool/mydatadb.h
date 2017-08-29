#ifndef MYDATADB_H
#define MYDATADB_H


#include <string>
#include <list>
#include <vector>
//#include <variant> C++ 17

using namespace std;
enum class DataType
{
	Color = 0,
	Inter = 1,
	String = 2,
	List,
	Check,
	Date,
	Time,
	Line,
	Rectangle,
	Circle,
	Polygon,
	Pixmap,
	Url,
	Dot,
	Radio
	//TODO: Add more
};


class  MyData
{
public:
	 MyData();
	 //TODO default construction
	 MyData(string name,int major, int minor);
	 ~MyData();
private:
	 string _name;
	 int _major_version;
	 int _minor_version;
	// variant value;
	 string _type;
	 list<string> _data;
};

class MyDataDB
{
public:
	MyDataDB();

	int get_count();

	static const list<MyData>& get_data();
};

#endif // MYDATADB_H
