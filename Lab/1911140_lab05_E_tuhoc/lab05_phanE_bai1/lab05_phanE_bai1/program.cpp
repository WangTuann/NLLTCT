#include<iostream>
#include<conio.h>	
#include<math.h>
#include<iomanip>

using namespace std;

#include"thuvien.h"
#include"menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int soMenu = 5,
		menu;
	int n = 0;
	DaySo a;
	NhapMang(a, n);
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
		_getch();
	} while (menu > 0);
	_getch();
}