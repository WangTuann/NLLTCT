#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void giaiPTbacnhat(double a, double b);

int main()
{
	double a, b;
	cout << "nhap a";
	cin >> a;
	cout << "nhap b";
	cin >> b;
	giaiPTbacnhat(a, b);
	return 1;
}
void giaiPTbacnhat(double a, double b)
{
	double x;
	if (a == 0 && b == 0)
	{
		cout << "phuong trinh vo nghiem";

	}
	else if (a == 0 && b != 0)
	{
		cout << "phuong trinh co vo so nghiem";
	}
	else if (a != 0)
	{
		x = (-b) / a;
		cout << "phuong trinh co nghiem la x=:" << x;
	}
}
