#include <iostream>
#include <cmath>
#include"sphere.h"
using namespace std;
//const double pi = 3.1415926;
//------------------��������------------------
sphere function_1(sphere t)
{
	sphere s = t;//�ڶ��ֿ������캯��

	return  s;//�����ֹ��캯����������Ϊ��������ֵ

}

sphere& function_2(sphere& t)
{
	sphere s(t);//�������캯��

	return  t;
}
//=================������===================

int main()
{

	sphere Earth;//�޲ι��캯�����Զ�����
	sphere Mars(3.398);//�вι��캯�����Զ�����
	sphere Venus(Mars);//�������캯�����Զ�����
	sphere Saturn = Venus;//�������캯�����Զ�����

	Saturn = Mars;//δ���ù��캯��

	sphere *p = new sphere(2.44);//�вι��캯��������


	Earth = function_1(Mars);//����function_1������ʵ��Mars��ֵ���β�tʱ���ÿ������캯����
	/*�ں����ڲ����������sʱ��tΪʵ�ε��ÿ���������������Ϊ��������ֵʱ���ÿ������캯����Ȼ��������������*/

	Earth = function_2(Venus);//�������캯������+����s
	Earth.display();//���ͳ����Ϣ
	p->display();//����ͳ����Ϣ

	delete p;//������������,����p
	//������������δ����������Ķ���Earth,Mars,Venus,Saturn�������Ĵ���������(ɾ��system����������п���ʾ)
	//system("pause");
	return 0;

}