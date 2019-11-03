#pragma once
#include<iostream>
using namespace std;
class student
{
private:
	char *name;
	char id[20];
	int age;
	string address;

public:
	student();//无参构造函数
	student(char *a, char b[], int c, string d);//有参构造
	student(const student & r);//拷贝构造函数
	
	~student();

	void display();//输出函数
	int change(student &r,char *na);//修改函数
	void stuin( char *n,char *pa, int a, string ad); 
};

