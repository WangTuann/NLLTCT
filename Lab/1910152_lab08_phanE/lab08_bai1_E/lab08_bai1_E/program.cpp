#include<iostream>
#include<conio.h>
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
	int menu;
		int	soMenu = 8, n = 10;
		SinhVien a[MAX] =
		{
		{ "1534507", "Duong Qua", { 1997 }, "CTK39", 9.0 },
		{ "1405507", "Tu Ma Ngoc Yen", { 1996 }, "CTK39", 6.5},
		{ "1334067", "Quach Tinh", { 1996 }, "CTK37", 8.0},
		{ "1300167", "Lam Xung", { 1997 }, "CTK39", 7.2},
		{ "1534507", "Hoang Dung", { 1995 }, "CTK39", 4.0},
		{ "1405507", "Hoang Dung", { 1996 }, "CTK38", 8.5},
		{ "1334067", "Vuong Ngoc Yen", { 1995 }, "CTK37", 7.0},
		{ "1334167", "Lenh Ho Xung", { 1995 }, "CTK37", 5.6},
		{ "1530007", "Trieu Minh", { 1997 }, "CTK39", 3.0},
		{ "1534123", "Nhac Dung", { 1997 }, "CTK39", 2.0},

		};
		do
		{
		menu = ChonMenu(soMenu);
		XuLyMenu(a, menu, n);
		_getch();
		} while (menu > 0);
	_getch();
}

