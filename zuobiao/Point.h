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
	
	double GetX();//提取横坐标
    double GetY();

	 void SetX(double ax);//修改横坐标
	 void SetY(double bx);
	 void SwapAxis(double *xa,double *xb);// void SwapPoint(double& ra，double& xb);交换坐标值

	 friend double GetLength(Point& A,Point& B);//计算两点距离
};

