#include<iostream>
#include<conio.h>
#include<math.h>
#include<time.h>

using namespace std;

#include"thuvien.h"
void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int S,T,i,j,n = 0;
	MaTran a;
	cout << "nhap cap ma tran vuong n=:";
	cin >> n;
	NhapMaTran(a, n);
	cout << "ma tran vuong vua nhap:";
	XuatMaTran(a, n);
	S = TinhS(a,n);
	cout << "\ntong so am lon nhat cot j:" << T;       
	cout << "\nMini = " << S;
	T = TinhT(a, n);
	cout << endl << "\ntong so duong nho nhat hang i" << S;
	cout << "\nmaxj=" << T;
	_getch();
}