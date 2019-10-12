#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int a, b = 0, c = 0, d = 0;
	int *p = new int[20];
	for (int i = 0; i < 20; i++)
	{
		a = rand() % 200 - 100;
		p[i] = a;
	}
	for (int i = 0; i < 20; i++)
		cout << p[i] << " ";
	cout << endl;
	for (int i = 0; i < 20; i++)
	{

		if (p[i] > 0)
			b += 1;
		if (p[i] < 0)
			c += 1;
		if (p[i] == 0)
			d += 1;
	}
	cout << "The number of positive number:" << b << endl;
	cout << "The number of negative number:" << c << endl;
	cout << "The number of zero:" << d << endl;
	delete[]p;
	system("pause");
	return 0;
}
