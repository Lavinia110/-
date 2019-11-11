#include<iostream>
using namespace std;
#include"Point.h"
double GetLength(Point& A, Point& B)//计算两点距离
{
	double a, b, c;
	a = pow((A.x - B.x), 2);
	b = pow((A.y - B.y), 2);
	c = sqrt(a + b);
	cout <<"距离为："<< c << endl;

	return c;
}
int main()
{
	Point array_stack[10]; //栈上的端点对象数组
	Point *array_heap = new Point[10];//堆上的端点对象数组

	array_stack[1].SetX(3);
	array_stack[1].SetY(4);
	array_heap[1].SetX(6);
	array_heap[1].SetY(7);
	GetLength(array_stack[1],array_heap[1]);
	system("pause");
	return 0;
}