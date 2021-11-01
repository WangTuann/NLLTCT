#include<iostream>
#include<conio.h>


using namespace std;

#include"thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int a, n;
	XuatGiaTri_SoLan_PhanBiet(a, n);
	_getch();
}