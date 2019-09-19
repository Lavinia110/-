#include<stdio.h>
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	float a, b, c, x1, x2, i;
	cout << "ÊäÈë£º" << endl;//printf("ÊäÈë£º");
	cin >> a >> b >> c;//scanf_s("%f %f %f", &a, &b, &c);
	//cout << "a=" << "b=" << "c=";
	i = sqrt(b*b - 4 * a*c);
	if (i == 0)
	{
		x1 = (-b) / (2 * a);
		x2 = x1;
		cout << "x1=" << x1 << "  x2=" << x2 << endl;//printf("x1=%f x2=%f\n", x1, x2);
	}
	else if (i > 0)
	{
		x1 = (-b + i) / (2 * a);
		x2 = (-b - i) / (2 * a);
		cout << "x1=" << x1 << "  x2=" << x2 << endl;//printf("x1=%f x2=%f\n", x1, x2);	
	}
	else if ((b*b - 4 * a*c) < 0)
		cout << "faulse" << endl;//printf("faulse\n");
	system("pause");
	return 0;

}