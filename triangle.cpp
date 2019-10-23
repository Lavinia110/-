/*************************************************
** 功能 : 三角形类
** 作者 :
** 版本 : 2019-10-15 / 18:56
** 版权 : GNU General Public License(GNU GPL)
/**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<iostream>
using namespace std;

/*----------------------------------*
		  Global Varables
*-----------------------------------*/
class triangle
{
private:
	double a;
	double b;
	double c;
public:
	void Set(double, double, double);
	int judge(double, double, double);
	int girth(double, double, double);
	int area(double, double, double);
	int type(double, double, double);
};
void triangle::Set(double x, double y, double z)
{
	double q = 0;
	if (x > y)
		q = x;
	else
		q = y;
	if (q > z)
		a = q;
	else
		a = z;
		b = y;
	    c = z;
		
}
int triangle::judge(double a, double b, double c)
{
	int p;
	if (b + c > a)
	{
		p = 1;
		cout << "The above three sides can form a triangle" << endl;
	}

	else
	{
		p = 0;
		cout << "The above three sides cannot form a triangle" << endl;
	}

	return p;

}
int triangle::girth(double a, double b, double c)
{
	double C = a + b + c;
	return C;
}
int triangle::area(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	double S = sqrt(p*(p - b)*(p - a)*(p - c));
	return S;
}
int triangle::type(double a, double b, double c)
{
	int p;
	if (a*a == b * b + c * c)
	{
		cout << "This is a right triangle." << endl;
		p = 0;
	}


	if (a*a > b * b + c * c)
	{
		cout << "This is an obtuse triangle." << endl;
		p = 2;

	}
	else
	{
		cout << "This is an acute triangle." << endl;
		p = 1;

	}

	return p;
}

/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	double x, y, z;
	cout << "The three sides are：";
	cin >> x >> y >> z;
	triangle T;
	T.Set(x, y, z);
	T.judge(x, y, z);
	cout << "girth： " << T.girth(x, y, z) << endl;
	cout << "area： " << T.area(x, y, z) << endl;
	T.type(x, y, z);
	system("pause");
	return 0;
}