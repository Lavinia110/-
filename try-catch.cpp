#include<iostream>
using namespace std;
float checkAgeScore(int age, float score)
{
	if (age < 16 || age >25)
		throw age;
	if (score < 0 || score>5)
		throw score;
	cout << age << " " << 20 * score;
}
int main()
{
	int age; float score; char name[10];
	cin >> name >> age >> score;
	cout << endl;
	cout << name << endl;
	try
	{
		checkAgeScore(age, score);
	}
	catch (int)
	{
		cout << "Digital out of range " << endl;
		cout << "ERROR" << endl;
	}
	cout << " " << "calculate finished" << endl;
	system("pause");
	return 0;
}