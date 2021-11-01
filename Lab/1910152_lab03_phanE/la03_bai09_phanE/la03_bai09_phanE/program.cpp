#include<iostream>
#include<conio.h>

using namespace std;
double tinhchisoBMI(double w, double h);

int main()
{
	float w, h;
	cout << "nhap can nang cua ban:";
	cin >> w;
	cout << "nhap chieu cao cua ban:";
	cin >> h;
	tinhchisoBMI(w, h);
}
double tinhchisoBMI(double w, double h)
{
	double BMI;
	BMI = w / h * h;
	if (BMI < 15)
		cout << "doi khat";
	else if (BMI < 17.5)
		cout << "bieng an";
	else if (BMI < 18.5)
		cout << "thieu can";
	else if (18.5 <= BMI <= 25)
		cout << "ly tuong";
	else if (25 <= BMI <= 30)
		cout << "thua can";
	else if (BMI >= 40)
		cout << "tre em beo phi";
	return 1;
	}
