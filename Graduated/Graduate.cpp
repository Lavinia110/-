#include "Graduate.h"
#include<string>
#include<iostream>
using namespace std;


double Graduate::m = 0;
double Graduate::S=0;
Graduate::Graduate()
{
	m++;
}
Graduate::Graduate(char *Name,bool Gender,char Id[20], double Score, string Research, string Tutor)
{
	this->name = Name;
	
	this->gender = Gender;
	for (int j = 0; j < 20; j++)
	{
		id[j] = Id[j];
	}
	this->score = Score;
	this->research = Research;
	this->tutor = Tutor;
	S = S + this->score;
	m++;

}
Graduate::Graduate(const Graduate & r)//�������캯��
{
}
Graduate::~Graduate()
{

}
void Graduate::Print()
{
	cout << "Name:" << name << "  Gender:" << gender << "  Id:" << id << "  Score:" << score << "  Reasearch:" << research << "  Tutor:" << tutor << endl;
}
void Graduate::Display()const//����Ա����
{
	cout << "����Ա������" << endl;
	cout << "Name:" << name << "  Gender:" << gender << "  Id:" << id << "  Score:" << score << "  Reasearch:" << research << "  Tutor:" << tutor << endl;
}
void Graduate::average()
{
	double A = S / m;
	cout << "ƽ���ɼ���" << A << endl;
	
}
