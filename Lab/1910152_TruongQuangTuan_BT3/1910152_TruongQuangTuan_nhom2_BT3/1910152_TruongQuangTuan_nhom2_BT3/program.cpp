#include<iostream>
#include<time.h>
#include<math.h>
#include<iomanip>
#include<conio.h>

using namespace std;

#include"1910152_ThuVien.h"
#include"1910152_Menu.h"


void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 5, menu, n = 0;
	MaTranVuong a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLiMenu(menu, a,n);
		_getch();
	} while (menu > 0);

}