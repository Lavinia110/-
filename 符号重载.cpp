#include<iostream>
using namespace std;
class Vect
{
private:
	double a, b;
public:
	Vect(double a1, double b1)
	{
		a = a1;
		b = b1;
	}
	Vect operator +=(Vect &r)
	{
		a = a + r.a;
		b = b + r.b;
		return *this;
	}
	/*Vect operator -=(Vect &r)
	{
		a = a - r.a;
		b = b - r.b;
		return *this;
	}*/
	void display()
	{
		cout << a << " " << b << endl;
	}
	//friend Vect operator += (Vect &v, Vect &r);
	friend Vect operator -= (Vect &v, Vect &r);
};
/*Vect operator += (Vect &v, Vect &r)
{
	v.a = v.a + r.a;
	v.b = v.a + r.b;
	return v;
}*/
Vect operator -= (Vect &v, Vect &r)
{
	v.a = v.a - r.a;
	v.b = v.b - r.b;
	return v;
}
int main()
{
	Vect V1(1, 2),V2(2,1);
	V1 += V2;
	V1.display();
	V1 -= V2;
	V1.display();
	system("pause");
	return 0;
}