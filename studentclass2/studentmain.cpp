#include<iostream>
using namespace std;
#include"student.h"
#pragma warning(disable:4996)
#include<string>
/***************������****************/
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

	//student S[2];//�����޲ι��캯��

	S[2].stuin(name, i, age, ad);//��ͨ������ȡѧ����Ϣ
	S[1] = S[2];
	char *na = new char[20]; strcpy(na, "Amy");
    student S3(na, i, 19, "dont");//�����вι��캯��
    S[3] = S3;//�������캯��
	
	S[1].display();//���ѧ����Ϣ
	S[2].display();
	S[3].display();

	cout << "�޸�ѧ����Ϣ" << endl;
	cout << "�Ƿ��޸���Ϣ���ǣ�1������0��" << endl;
	int t; cin >> t;
	if (t != 0)
	{
		cout << "����ѧ��������"; cin >> name;
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