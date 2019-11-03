#include<iostream>
using namespace std;
#include"student.h"
#pragma warning(disable:4996)
#include<string>
/***************主函数****************/
int main()
{
	student *S=new student[4];
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

	//student S[2];//调用无参构造函数

	S[2].stuin(name, i, age, ad);//普通函数获取学生信息
	S[1] = S[2];
	char *na = new char[20]; strcpy(na, "Amy");
    student S3(na, i, 19, "dont");//调用有参构造函数
    S[3] = S3;//拷贝构造函数
	
	S[1].display();//输出学生信息
	S[2].display();
	S[3].display();

	cout << "修改学生信息" << endl;
	cout << "是否修改信息，是（1），否（0）" << endl;
	int t; cin >> t;
	if (t != 0)
	{
		cout << "输入学生姓名："; cin >> name;
		for (int i = 1; i < 4; i++)
		{
			if (S[i].change(S[i], name) == 1)
				break;
			else continue;
		}
	}

	system("pause");
	return 0;

}