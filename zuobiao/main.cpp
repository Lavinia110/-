#include<iostream>
using namespace std;
#include"Point.h"
double GetLength(Point& A, Point& B)//�����������
{
	double a, b, c;
	a = pow((A.x - B.x), 2);
	b = pow((A.y - B.y), 2);
	c = sqrt(a + b);
	cout <<"����Ϊ��"<< c << endl;

	return c;
}
int main()
{
	Point array_stack[10]; //ջ�ϵĶ˵��������
	Point *array_heap = new Point[10];//���ϵĶ˵��������

	array_stack[1].SetX(3);
	array_stack[1].SetY(4);
	array_heap[1].SetX(6);
	array_heap[1].SetY(7);
	GetLength(array_stack[1],array_heap[1]);
	system("pause");
	return 0;
}