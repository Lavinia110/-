#include<stdio.h>
#include<iostream>
using namespace std; 
int main()
{
	int year,month,day,T=0,week;//�������������
	int  leapyear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};//����ÿ��������
	int commonyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//ƽ��ÿ��������
	
	cout << "���������գ�" << endl;
	cin >> year>> month>> day;
	int m = month - 1;
	cout << year<< "-" << month << "-" << day << endl;//��ʾ��������ڣ�
	if ((month <= 12) && (month >= 1)) //��֤���������Ƿ���ȷ��
	{
		if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))//��������������У�
		{
			if (day <= leapyear[m])//����������ڲ�������������ֵ��
			{
				for (int i = 0; i < month; i++)
					T = T + leapyear[i];
				if (T % 7 != 0)
					week = T / 7 + 1;
				else
					week = T / 7;
				cout << "��" << T << "��" << "��" << week << endl;
			}
			else cout << "�������ڲ���ȷ" << endl;
		}
		else
		{
			if (day <= commonyear[m])
			{
				for (int j = 0; j < month; j++)
					T = T + leapyear[j];
				if (T % 7 != 0)
					week = T / 7 + 1;
				else
					week = T / 7;
				cout << "��" << T << "��" << week << "��" << endl;
			}
			else cout << "�������ڲ���ȷ" << endl;
		}
	//else cout << "�������ڲ���ȷ" << endl;	
	}
	system("pause");
	return 0;
}
