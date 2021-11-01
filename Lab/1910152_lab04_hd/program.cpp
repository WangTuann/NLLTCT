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
	int menu,
		soMenu = 4;
	do
	{
		menu = ChonMenu(soMenu);
		XulyMenu(menu);
	} while (menu > 0);
	_getch();
}