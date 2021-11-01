#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int soMenu = 7,
		menu,
		n = 0;
	DaySo a;
	cout << "Nhap 1 so nguyen duong: ";
	cin >> n;
	NhapTuDong(a, n);
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}
