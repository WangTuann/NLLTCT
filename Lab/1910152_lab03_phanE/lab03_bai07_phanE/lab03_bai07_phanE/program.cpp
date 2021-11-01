#include<iostream>
#include<conio.h>
#include<math.h>

using	namespace std;
double tinhBT(double x, double y, char k);

int main()
{
	int x, y;
	char k;
	cout << "nhap x";
	cin >> x;
	cout << "nhap y";
	cin >> y;
	cout << "dau cua bieu thuc:";
	cin >> k;
	tinhBT(x, y, k);
	return 1;
}
double tinhBT(double x, double y, char k)
{
	double z;
	switch (k)
	{
	case '+':
		z = x + y;
		break;
	case '-':
		z = x - y;
		break;
	case '*':
		z = x * y;
		break;
	case '/':
		z = x / y;
	}
	cout << "gia tri cua bt z:" << z;
	return z;
}