#include "student.h"
#include<string>
#include<iostream>
using namespace std;
#pragma warning(disable:4996)

/**************���캯��+��������******************************/
student::student()
{
	cout << "**�޲ι��캯��������**" << endl;
}

student::student(char *a,char b[],int c,string d)
{
	cout << "**�вι��캯��������**" << endl;
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
	// this->name = r.name;//ǳ����<-----ջ�ϲ���

	if (r.name != NULL)//��ȿ���<---���ϲ���
	{
		int len = strlen(r.name);

		this->name = new char[len + 1];

		strcpy(this->name, r.name);
	}
}

student::~student()
{
	cout << "**��������������**" << endl;
}
/******************��ͨ����************************************/
void student::display()
{
	cout << "*******ѧ��������Ϣ**********" << endl;

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
	cout << "******************�޸���Ϣ************************************" << endl;
	student S;
		S=r;
	for (int i = 0; i < 4; i++)
	{
		if (strcmp(S.name, na) == 0)
		{
			cout << "ԭ��Ϣ��"; S.display();
			cout << "������Ϣ��";
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
			cout << "���ĺ���Ϣ��" << endl;
			S.display();	
		}
		else continue;
	}
	return 1;
}
