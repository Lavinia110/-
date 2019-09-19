#include<stdio.h>
#include<iostream>
using namespace std; 
int main()
{
	int year,month,day,T=0,week;//定义输入变量；
	int  leapyear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};//闰年每月天数；
	int commonyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//平年每月天数；
	char c;
	cout << "输入年月日：(2000-9-24)" << endl;
	cin >> year>>c>>month>>c>> day;
	int m = month - 1;
	cout << year<< "-" << month << "-" << day << endl;//显示输入的日期；
	if ((month <= 12) && (month >= 1)) //验证输入日期是否正确；
	{
		if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))//如果是闰年则运行；
		{
			if (day <= leapyear[m])//且输入的日期不超过天数正常值；
			{
				for (int i = 0; i < m; i++)
					T = T + commonyear[i];
				if (T % 7 != 0)
					week = T / 7 + 1;
				else
					week = T / 7;
				cout << "第" << T << "天" << "周" << week << endl;
			}
			else cout << "输入日期不正确" << endl;
		}
		else
		{
			if (day <= commonyear[m])
			{
				for (int j = 0; j < m; j++)
					T = T + leapyear[j];
				if (T % 7 != 0)
					week = T / 7 + 1;
				else
					week = T / 7;
				cout << "第" << T << "天" << week << "周" << endl;
			}
			else cout << "输入日期不正确" << endl;
		}
	//else cout << "输入日期不正确" << endl;	
	}
	system("pause");
	return 0;
}
