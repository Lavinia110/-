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
	Graduate(const Graduate & r);//�������캯��

	~Graduate();

	void Print( );//��ͨ��Ա����
	void Display( )const;//����Ա����
	static void average();//��ƽ���ɼ���

	friend void Grade(Graduate&A);//�����������


};


