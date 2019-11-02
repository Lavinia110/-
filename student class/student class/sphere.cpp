#include "sphere.h"
//-----------类的实现（构造函数+析构函数）---------
sphere::sphere()
{
	cout << "++无参构造函数被自动调用++" << endl;
}

sphere::sphere(double r)
{
	cout << "++有参构造函数被自动调用++" << endl;
	this->radius = r;

}

sphere::sphere(const sphere &r)
{
	cout << "++拷贝构造函数被自动调用++" << endl;

	this->radius = r.radius;

}

sphere::~sphere()
{
	cout << "--析构函数被自动调用--" << endl;
}


//------------类的实现（普通函数）-------------
double sphere::surfaceArea()
{

	double s = 4 * pi*pow(radius, 2);

	return s;

}

double sphere::volumeSpace()
{
	double v = 4.0 / 3 * pi*pow(radius, 3);


	return v;

}

void sphere::display()
{
	cout << "**********球体的统计信息**********" << endl;

	cout << "半径：" << radius << "表面积：" << surfaceArea() << "球体积：" << volumeSpace() << endl;

}

