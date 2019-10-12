#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
	double r, S, C;
	for (int i = 0; i != 10; i++)
	{
		cin >> r;
		if (r >= 0)
		{
			S = PI * r*r;
			C = 2 * PI*r;
			cout << "S=" << S << endl << "C=" << C;

		}
		else cout << "ERROR!" << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}
