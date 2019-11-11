#pragma once
#include<iostream>
using namespace std;
class Point
{
	double x, y;
public:
	Point();

	Point(double a, double b); 
	
	Point(const Point& r);
	
	~Point();
	
	double GetX();//��ȡ������
    double GetY();

	 void SetX(double ax);//�޸ĺ�����
	 void SetY(double bx);
	 void SwapAxis(double *xa,double *xb);// void SwapPoint(double& ra��double& xb);��������ֵ

	 friend double GetLength(Point& A,Point& B);//�����������
};

