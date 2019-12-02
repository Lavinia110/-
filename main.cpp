#include<iostream>
using namespace std;
class Location
{

	
public:
	double x, y;
	void move(double i,double j)            //移动对象坐标位置
	{
		x = i;
		y = j;
		x = x + 1;
		y = y + 1;
		cout << "(" << x << "," << y << ")" << endl;
	}
	
};
class Point:public Location
{
public:
	void move(double m,double n)
	{
		x = m; y = n;
		x = x+x;
		y = y+y;
		cout << "(" << x << "," << y << ")" << endl;
		Location::move(x, y);
	}
};
class Circle:public Point
{
public:
	void draw(double a,double b)
	{
		x = a; y = b;
		double t;
		t = x;
		x = y;
		y = t;
		cout << "(" << x << "," << y << ")" << endl;
		Location::move(x,y);
		Point::move(x, y);
	}
};
int main()
{
	Location L;
	cout << "Location->move:";
	L.move(1,2);
	cout << endl << endl;
	cout << "Point->move&Location->move:";
	Point P;
	P.move(1,2);

	cout << endl << endl;
	cout << "Circle->draw&Location->move&Point->move:";
	Circle C;
	C.draw(1,2);



	system("pause");
	return 0;
}