#include<iostream>
#include<conio.h>

using namespace std;



int main()
{
	const int MAX = 100;
	const char KHOA[] = "cong nghe thong tin";
	const float	pi = 3.1415926;
	const char tab = '\t';
	cout << endl << "gia trị cua hang so MAX là:" << MAX;
	cout << endl << "gia tri cua hang so KHOA la:" << KHOA;
	cout << endl << " gia tri cua hang so pi la:" << pi;
	cout << endl << "gia tri cua hang so tab là:" << tab;
	cout << endl << tab << "dong nay duoc thut le 1 dau tab";
	_getch();
	float r;
	cout << endl << "nhap ban kinh hinh tron:";
		cin >> r;
	float chuvi, dientich;
	chuvi = 2 * pi * r;
	dientich = pi * r * r;
	cout << endl << "ban kinh: r= " << r;	
		cout << endl << " , chu vi: c= " << chuvi;
	cout << endl << " , dien tich: p= " << dientich;

		return 1;


}