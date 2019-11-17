#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class Graduate
{
private:
	char *name;
	bool gender;
	char id[20];
	double score;
	string research;
	string tutor;
    //static double m;
public:
	
	static double S,m;
	Graduate(char *name, bool gender, char id[20], double score, string research, string tutor);
	Graduate();
	Graduate(const Graduate & r);//拷贝构造函数

	~Graduate();

	void Print( );//普通成员函数
	void Display( )const;//常成员函数
	static void average();//求平均成绩；

	friend void Grade(Graduate&A);//计算两点距离


};


