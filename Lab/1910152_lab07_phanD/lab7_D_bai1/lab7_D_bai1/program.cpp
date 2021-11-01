#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>
#include<string.h>

using namespace std;

#include"thuvien.h"
#include"menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
}
void ChayChuongTrinh()
{
	int soMenu = 11,
		menu;
	String a, b;
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b);
	} while (menu > 0);
	_getch();
}
