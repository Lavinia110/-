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
	Triangle(double a1, double b1, double c1);//�вι��캯��
	Triangle(const Triangle &r);//�������캯��
	double area();//���
	double circulate();//�ܳ�
	//double print();
	Triangle operator + (const Triangle &r);//��������� +
	Triangle  operator = (const Triangle &r);//��������� =
	friend ostream & operator <<(ostream & out, Triangle &obj);//��Ԫ���� ����  <<

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

double Triangle::area()//(p=(a+b+c)/2��S = sqrt[p(p - a)(p - b)(p - c)]
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
Triangle Triangle::operator + (const Triangle &r)//ʵ�����������������������֮��
{
	Triangle T;
	T.S= S+ r.S;
	cout << T.S<<endl;
	return T;
}
Triangle  Triangle::operator = (const Triangle &r)//ʵ�������������֮��ĸ�ֵ
{
	a = r.a;
	b = r.b;
	c = r.c;
	S = r.S;
	C = r.C;
	return *this;
}
ostream & operator <<(ostream & out, Triangle &obj)//��Ԫ����
{
	out << "�߳���";
	out<<obj.a<<" ";
	out << obj.b<<" ";
	out << obj.c<<" "<<endl;
	out << "�����";
	out << obj.S<<endl;
	out << "�ܳ���";
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
	cout << "����ͣ�";
	T = A + B;
	
	
	system("pause");
	return 0;
}