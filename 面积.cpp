#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float a, b, c, i, S;
	cout << "输入：" << endl;//printf("输入");
	cin >> a >> b >> c;//scanf_s("%f %f %f", &a, &b, &c);
	
	i = (a + b + c) / 2;
	S = sqrt(i*(i - a)*(i - b)*(i - c));
	cout << "S=" << S<<endl;//printf("%f", S);
	system("pause");
	return 0;
}
