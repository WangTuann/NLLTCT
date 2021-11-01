#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

#include "Thuvien.h"

void ChayChuongTrinh();
void ThongBaoKetQua(int kq, int soDe);
int ChonMucDoan();
int SinhSoNgauNhien();
int XuLyTroChoi(int k, int soDe);

int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	char kt;
	int kq, k, soDe;
	do
	{
		system("CLS");
		soDe = SinhSoNgauNhien();
		k = ChonMucDoan();
		kq = XuLyTroChoi(k, soDe);
		system("CLS");
		cout << "\nTRO CHOI DOAN SO VOI SO LAN DOAN : k = " << k << " :\n";
		ThongBaoKetQua(kq, soDe);
		_getch();
		system("CLS");
		cout << "\nChoi nua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}
/*int ChonMucDoan()
{
	int kho,de,TB;
	do
	{	
		cout << "Chon so lan doan toi da: Kho(1-3) :";
		cin >> kho;

	} 
	return k;
}*/
int ChonMucDoan()
{
	int k;
	do
	{ 
	cout << "chon muc do doan:kho(1-3),de(4-7),trungbinh(>7)";
	cin >> k;
	if (k>=1 && k<=3)
	{
		cout << "ban duoc doan " << k << " lan";
	}
	else if (k>=3&&k<=7)
	{
		cout << "ban duoc doan " << k << " lan";
	}
	else if (k>7)
	{
		cout << "ban duoc doan "<< k << " lan";
	}
	} while (k == 0);
		 return k;
}
int SinhSoNgauNhien()
{
	int soDe;
	srand((unsigned int)time(0));
	soDe = rand() / MAX;
	return soDe;
}
int XuLyTroChoi(int k, int soDe)
{
	int i,
		soDoan,
		kq = 0;
	for (i = 1; i <= k; i++)
	{
		cout << "\nDoan lan " << i << ", so doan = ";
		cin >> soDoan;
		if (soDoan == soDe)
		{
			kq = 1;
			break;
		}
		else
			if (soDoan > soDe)
				cout << "\nSo doan lon hon";
			else
				cout << "\nSo doan nho hon";
	}
	return kq;
}
void ThongBaoKetQua(int kq, int soDe)
{
	system("CLS");
	cout << "\nKET QUA TRO CHOI : ";
	if (kq)
		cout << "\nNguoi choi thang";
	else
		cout << "\nNguoi choi thua";
	cout << "\nDe cho so : " << soDe;
}



