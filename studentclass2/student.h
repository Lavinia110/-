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
	student();//�޲ι��캯��
	student(char *a, char b[], int c, string d);//�вι���
	student(const student & r);//�������캯��
	
	~student();

	void display();//�������
	int change(student &r,char *na);//�޸ĺ���
	void stuin( char *n,char *pa, int a, string ad); 
};

