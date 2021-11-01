#include<iostream>
#include<conio.h>
#include<math.h>
#include<time.h>

using namespace std;

#include"1910152_ThuVien.h"
#include"1910152_Menu.h"
void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu , soMenu = 6,
	n = 0;
	DaySo a;
	NhapDaySo_TuDong(a, n);
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
		_getch();
	} while (menu > 0);
	
}