#include<iostream>
using namespace std;
#include<string>

/*******School类********/
class school
{
private:
	string college;
public:
	school();
	~school();
	school(string a)
	{
		this->college = a;
		cout << "学校名字：" << college << endl;
	}
};

school::school() {}
school::~school() {}
/**********date类*********/
class date
{
private:
	int year;
	int month;
	int day;
public:
	date();
	~date();
    date(int y,int m,int d)
	{
		this->year = y;
		this->month = m;
		this->day = d;
	}
void birth()const;//const函数实现输出出生日期和年龄；
	
};
date::date() {}
date::~date() {}
void date::birth()const
{
	int O = 2019 - year;
	cout << "出生日期：" << year <<"-"<< month <<"-"<< day << endl;
	cout << O << "岁" << endl;
}
/*****student类*******/
class student
{
private:
	string name;
	bool gender;
	string id;
	double GPA;
	school S;
	date D;
public:
	static int N;
	student();
	student(string Name, bool Gender, string Id, double Gpa, int y, int m, int d, string schoolname) : D(y, m, d), S(schoolname)//初始化学生信息；
	{
		this->name = Name;
		this->gender = Gender;
		this->id = Id;
		this->GPA = Gpa;
		cout << "Name:" << name << "  Gender:" << gender << "  ID:" << id << "  GPA:" << GPA << endl;
		N = N + 1;
		D.birth();
		cout << endl;
	}

	~student();

};
int student::N = 0;//静态数据成员的初始化；
student::student() {}
student::~student()
{}

/*******主函数*********/
int main()
{
	int a=rand() % 4 + 0.1;
	
	student s1("tom",1,"001",a,2000,9,24,"SD");
	int b= rand() % 4 + 0.1;
	student s2("tommey", 0, "002", b, 2005, 7, 29, "SL");


	cout << "共" <<student::N << "人" << endl;//输出人数
	system("pause");
     return 0;
}