#include<iostream>
#include<conio.h>
#include<time.h>
#include<math.h>

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
	int soMenu = 8, menu, n = 0, m = 0;
	int a[SIZE][SIZE];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n, m);
	} while (menu > 0);
}


