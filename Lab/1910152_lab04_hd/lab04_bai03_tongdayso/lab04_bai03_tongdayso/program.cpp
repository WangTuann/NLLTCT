#include<iostream>
#include<conio.h>
using namespace std;
#include "thuvien.h"
#include"menu.h"

void chaychuongtrinh()
{
	_getch();
}
int main()
{
	void ChayChuongTrinh() {   int menu,     soMenu = 4;     ùng chọn chức năng 0. Thoát khỏi CT.  do  {


			menu = ChonMenu(soMenu);   XuLyMenu(menu);
	} while (menu > 0);
}
	chaychuongtrinh();
	return 1;
}
int ChonMenu(int soMenu) 
{
	int stt; 
	for (;;)
	{ 
		system("CLS");   
	XuaMenu();   
	cout << "\nNhap 1 so de chon menu ( 0 <= stt <= " << soMenu << " ) : stt = ";   
	cin >> stt;   
	if (0 <= stt && stt <= soMenu)   
	break; }  
	return stt; 
}
void XuLyMenu(int menu) 
{
	switch (menu)
	{
	case 0:
	cout << endl << "0. Thoat khoi chuong trinh";   
	break;   
	case 1:   
	cout << endl << "1. Tinh dien tich hinh vuong";  
	break;  
	case 2:    
	cout << endl << "2. Tinh dien tich hinh chu nhat";       
	break;   
	case 3:    cout << endl << "3. Tinh dien tich hinh tam giac";        
	break;   
	case 4:    cout << endl << "4. Tinh dien tich hinh tron";        
	break;  
	} 
} 