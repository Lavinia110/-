#pragma once
#include<iostream>
using namespace std;
const double pi = 3.1415926;
//-------------------ÀàµÄÉùÃ÷-------------------
class sphere
{

private:
	double radius;

public:
	sphere();
	sphere(double r);
	sphere(const sphere& other);

	~sphere();

	double surfaceArea();
	double volumeSpace();
	void display();

};


