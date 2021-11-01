#include<iostream>
#include<conio.h>

using namespace std;

#include"menu.h"
#include"thuvien.h"
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int soMenu = 8, menu, n = 0;
	MaTranVuong a;
	do
	{
		menu = ChonMenu(soMenu);
		XuliMenu(menu, a, n);
	} while (menu > 0);
}