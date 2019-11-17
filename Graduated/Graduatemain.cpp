#include<iostream>
using namespace std;
#include<string>
#pragma warning(disable:4996)
#include"Graduate.h"

void Grade(Graduate& A)
{
	double s = A.score;
		if (s >= 0 && s <= 59)
			cout << A.name<<":   E"<<endl;
		else if (s >= 60 && s < 69)
			cout << A.name<<":   D" << endl;
		else if (s >= 70 && s <= 79)
		    cout << A.name<<":   C" << endl;
		else if (s >= 80 && s <= 89)
			  cout << A.name<<":   B" << endl;
		else  if (s >= 90 && s <= 100)
			cout << A.name<<":   A" << endl;
		
}


int main()
{
	
	
	char i[20] = "13456";
  char *name = new char[20];
 strcpy(name,"tom");//Name
 char *na = new char[20];
 strcpy(na, "lucy");//Name
 char *nam = new char[20];
 strcpy(nam, "wuyi");//Name
	Graduate stu[3] = {Graduate(name, 1, i, 65,"abc","def"),Graduate(na,0,i,70,"ghi","gkl"),Graduate(nam,0,i,70,"mno","pqi") };

	for (int i = 0; i < 3; i++)//调用普通函数；
		stu[i].Print();

	for (int i = 0; i < 3; i++)//调用常成员函数；
		stu[i].Display();
	Graduate::average();//输出平均成绩；
	for (int i = 0; i < 3; i++)
		Grade(stu[i]);

	system("pause");
	return 0;
}