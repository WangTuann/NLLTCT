#include <iostream>
#include <conio.h>
using namespace std;
#include"thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 1;
}

void ChayChuongTrinh()
{
	int n, menu, somenu = 7;
	cout << "Nhap vao n: ";
	cin >> n;
	do
	{
		menu = ChonMenu(somenu);
		XyLyMenu(menu, n);
	} while (menu >0);
	

}