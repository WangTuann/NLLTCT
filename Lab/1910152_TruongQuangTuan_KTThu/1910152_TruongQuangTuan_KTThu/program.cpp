#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
#include"1910152.h"
void ChayChuongTrinh();
int main();

int main()
{
	ChayChuongTrinh();
	return	1;
}

void ChayChuongTrinh()
{
	double BMI;
	BMI=TinhChiSoBMI();
    TrangThai(BMI);
	_getch();
}