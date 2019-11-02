#include <iostream>
#include <cmath>
#include"sphere.h"
using namespace std;
//const double pi = 3.1415926;
//------------------其他函数------------------
sphere function_1(sphere t)
{
	sphere s = t;//第二种拷贝构造函数

	return  s;//第三种构造函数，对象作为函数返回值

}

sphere& function_2(sphere& t)
{
	sphere s(t);//拷贝构造函数

	return  t;
}
//=================主函数===================

int main()
{

	sphere Earth;//无参构造函数被自动调用
	sphere Mars(3.398);//有参构造函数被自动调用
	sphere Venus(Mars);//拷贝构造函数被自动调用
	sphere Saturn = Venus;//拷贝构造函数被自动调用

	Saturn = Mars;//未调用构造函数

	sphere *p = new sphere(2.44);//有参构造函数被调用


	Earth = function_1(Mars);//调用function_1函数，实参Mars传值给形参t时调用拷贝构造函数；
	/*在函数内部，定义对象s时以t为实参调用拷贝函数；对象作为函数返回值时调用拷贝构造函数；然后析构三个对象*/

	Earth = function_2(Venus);//拷贝构造函数调用+析构s
	Earth.display();//球的统计信息
	p->display();//球体统计信息

	delete p;//析构函数调用,析构p
	//析构主函数中未被析构的类的对象Earth,Mars,Venus,Saturn共调用四次析构函数(删除system，并逐句运行可显示)
	//system("pause");
	return 0;

}