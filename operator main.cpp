#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
private:
	double a, b, c;
	double S, C;
public:
	Triangle();
	Triangle(double a1, double b1, double c1);//有参构造函数
	Triangle(const Triangle &r);//拷贝构造函数
	double area();//面积
	double circulate();//周长
	//double print();
	Triangle operator + (const Triangle &r);//重载运算符 +
	Triangle  operator = (const Triangle &r);//重载运算符 =
	friend ostream & operator <<(ostream & out, Triangle &obj);//友元函数 重载  <<

};
Triangle::Triangle()
{}
Triangle::Triangle(double a1, double b1, double c1)
{
	this->a = a1;
	this->b = b1;
	this->c = c1;
}
Triangle::Triangle(const Triangle &r)
{
	a = r.a;
	b = r.b;
	c = r.c;
}

double Triangle::area()//(p=(a+b+c)/2）S = sqrt[p(p - a)(p - b)(p - c)]
{
	double p = (a + b + c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}
double Triangle::circulate()
{
	 C = a + b + c;
	return C;
}
Triangle Triangle::operator + (const Triangle &r)//实现求两个三角形类对象的面积之和
{
	Triangle T;
	T.S= S+ r.S;
	cout << T.S<<endl;
	return T;
}
Triangle  Triangle::operator = (const Triangle &r)//实现三角形类对象之间的赋值
{
	a = r.a;
	b = r.b;
	c = r.c;
	S = r.S;
	C = r.C;
	return *this;
}
ostream & operator <<(ostream & out, Triangle &obj)//友元函数
{
	out << "边长：";
	out<<obj.a<<" ";
	out << obj.b<<" ";
	out << obj.c<<" "<<endl;
	out << "面积：";
	out << obj.S<<endl;
	out << "周长：";
	out << obj.C<<endl;
	return out;
}

int main()
{
	Triangle A(3, 4, 5);
	Triangle B(6, 8, 10);
	Triangle T;
	A.area();
	A.circulate();
	B.area();
	B.circulate();
	cout << A;
	B = A;
	cout << B;
	cout << "面积和：";
	T = A + B;
	
	
	system("pause");
	return 0;
}