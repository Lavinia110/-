#include<iostream>
using namespace std;
#include<math.h>
class Shapes               //����������
{

public:
	virtual void display()=0//�������麯��
	{
		cout << "Shapes" << endl;
	}

};
class  Rectangle:public Shapes
{
	void display()
	{
		cout << "Rectangle" << endl;
	}
};
class Circle:public Shapes
{
	void display()
	{
		cout << "Circle" << endl;
	}
};
int main()
{
	Shapes *p;
	Rectangle R;
	Circle C;

	p = &R;
	p->display();

	p = &C;
	p->display();

	system("pause");
	return 0;
}