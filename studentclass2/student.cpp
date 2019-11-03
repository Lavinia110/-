#include "student.h"
#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)

/**************构造函数+析构函数******************************/
student::student()
{
	cout << "**无参构造函数被调用**" << endl;
}

student::student(char *a,char b[],int c,string d)
{
	cout << "**有参构造函数被调用**" << endl;
	this->name = a;
	for (int j = 0; j < 20; j++)
	{
		id[j] = b[j];
	}
	this->age = c;
	this->address = d;
}

student::student(const student & r)
{
	for (int j = 0; j < 20; j++)
	{
		id[j] = r.id[j];
	}
	this->age = r.age;
	this->address =r.address;
	// this->name = r.name;//浅拷贝<-----栈上操作

	if (r.name != NULL)//深度拷贝<---堆上操作
	{
		int len = strlen(r.name);

		this->name = new char[len + 1];

		strcpy(this->name, r.name);
	}
}

student::~student()
{
	cout << "**析构函数被调用**" << endl;
}
/******************普通函数************************************/
void student::display()
{
	cout << "*******学生基本信息**********" << endl;

	cout <<"Name: " << name <<"   Age: " << age <<"    ID:"<<id<<"   Address:"<< address<< endl;
	cout << endl;
	
} 

void student::stuin(char *n, char *pa,int a, string ad)
{
	this->name = n;
	age = a;
	address = ad;
	for (int j = 0; j<20; j++)
	{
		id[j] = pa[j];
	}
}
int student::change(student &r,char *na)
{
	cout << "******************修改信息************************************" << endl;
	student S;
		S=r;
	for (int i = 0; i < 4; i++)
	{
		if (strcmp(S.name, na) == 0)
		{
			cout << "原信息："; S.display();
			cout << "更改信息：";
			char n[20];
			char *name = new char[20];
			cout << "Name:"; cin >> n;
			strcpy(name, n);//Name

			char i[20];
			cout << "ID: "; cin >> i;//ID
			int age; 
			cout << "Age:  "; cin >> age;
			string ad;
			cout << "Adress:"; cin >> ad;
			S.stuin(name, i, age, ad);
			cout << "更改后信息：" << endl;
			S.display();	
		}
		else continue;
	}
	return 1;
}
