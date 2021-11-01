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
		menu,
		n = 0;
	cout << "Nhap vao kich thuoc n: ";
	cin >> n;
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