#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;
double CanBacHai(double a);

int main()
{
	double a,x;
	cout << "nhap mot so a:";
	cin >> a;
	x = CanBacHai(a);
	cout << "can bac hai cua a la:" << x;
	return 1;
}
double CanBacHai(double a)
{
	double xo, xn;
	if (a == 0)
		xn = 0;
	else
	{
		xn = 1;
		do
		{
			xo = xn;
			xn = (a / xo + xo) / 2.0;
		} while (abs(xn - xo) >= pow(10,-15));
	}
	return xn;
}
