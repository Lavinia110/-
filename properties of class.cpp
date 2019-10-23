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
	//double d;
	//double e;
public:
	void Set(double, double, double);
	int judge(double, double, double);
	double girth(double, double, double);
	double area(double, double, double);
	int type(double, double, double);
	void display();
};
void triangle::Set(double x, double y, double z)//初始化值
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
int triangle::judge(double a, double b, double c)//判断是否可以构成三角形
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
double triangle::girth(double a, double b, double c)//三角形周长
{
	double C = a + b + c;
	return C;
}
double triangle::area(double a, double b, double c)//三角形面积
{
	double p = (a + b + c) / 2;
	double S = sqrt(p*(p - b)*(p - a)*(p - c));
	return S;
}
int triangle::type(double a, double b, double c)//三角形类型（直角）
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
void triangle::display()//输出三个值的地址
{
	cout << "this:"; cout << this << endl;
	cout << "a:"; cout << &a << endl;
	cout << "b:"; cout << &b << endl;
	cout << "c:"; cout << &c << endl;
	//cout << "d:"; cout << &d << endl;
	//cout << "e:"; cout << &e << endl;
}
/*----------------------------------*
		  Main Function
*-----------------------------------*/

int main()
{
	double x, y, z;
	cout << "The three sides are：";
	cin >> x >> y >> z;
	triangle T, A,B;
	T.Set(x, y, z);
	T.judge(x, y, z);
	cout << "girth： " << T.girth(x, y, z) << endl;
	cout << "area： " << T.area(x, y, z) << endl;
	T.type(x, y, z);
	cout << "The size of class T:"<<sizeof(T) << endl;//The size of class =the size of private variable;
	cout << "class T:" << &T << endl;
	cout << "class A:" << &A << endl;//The position of class T and B;
	cout << "class B:" << &B << endl;
	cout << "T:" << endl;
	T.display();//class T
	cout << "A:" << endl;
	A.display();
	system("pause");
	return 0;
}