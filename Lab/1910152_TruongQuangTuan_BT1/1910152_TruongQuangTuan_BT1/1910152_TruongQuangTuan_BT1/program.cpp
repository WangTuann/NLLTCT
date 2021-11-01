#include<iostream>
#include<conio.h>

using namespace std;

#include"1911136_Thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int x;
	x = NhapN();
	KiemTra(x);
	TongUocSo(x);
	_getch();
}