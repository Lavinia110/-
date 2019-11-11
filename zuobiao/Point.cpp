#include "Point.h"
#include<math.h>
Point::Point()
{
}
Point::Point(double a,double b)
{
	x = a;
	y = b;
}
Point::Point(const Point &r)
{
	this->x = r.x;
	this->y = r.y;
}

Point::~Point()
{
	cout << "析构函数被调用" << endl;
}
double Point::GetX()
{
	return x;
}
double Point::GetY()
{
	return y;
}

void Point::SetX(double ax)
{
	x = ax;
}

void Point::SetY(double bx)
{
	y = bx;
}
void Point::SwapAxis(double *xa,double *xb)// void SwapPoint(double& ra，double& xb)
{
	double t=0;
	t = *xa;
	*xa = *xb;
	*xb = t;
	cout <<"xa:"<< xa << endl;
	cout <<"xb:"<< xb << endl;
} 
