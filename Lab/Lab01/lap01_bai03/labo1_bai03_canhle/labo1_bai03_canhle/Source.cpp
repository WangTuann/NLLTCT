
#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
int main()
{
	cout << setiosflags(ios::left)
		<< setw(10) << " mssv"
		<< setw(25) << " ho va ten"
		<< setw(10)<<  " ten lop"
		<< setw(10) << " diem tb"
		<< setw(10) << "diem tl"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << " 1410123"
		<< setw(25) << " nguyen quang tam"
		<< setw(10) << " ctk38d"
		<< setw(10) << " 7.5"
		<< setw(10) << setprecision(2) << 5.75
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << " 1910152"
		<< setw(25) << " truong quang tuan"
		<< setw(10) << " ctk43"
		<< setw(10) << " 7.5"
		<< setw(10) << setprecision(2) << 5.75
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(10) << " 1911136"
		<< setw(25) << " nguyen viet duy danh"
		<< setw(10) << " ctk43"
		<< setw(10) << " 6.95"
		<< setw(10) << setprecision(2) << 8.89
		<< endl;
	cout<<setiosflags(ios::left)
		<< setw(10) << " 1910124"
		<< setw(25) << " tra ngoc hau"
		<< setw(10) << " ctk43"
		<< setw(10) << " 5.375"
		<< setw(10) << setprecision(2) << 7.125
		<< endl;
	cout<<setiosflags(ios::left)
		<< setw(10) << " 1910140"
		<< setw(25) << " hoang ngoc duc"
		<< setw(10) << " ctk43"
		<< setw(10) << " 4.35"
		<< setw(10) << setprecision(2) <<  3.99
		<< endl;
		
	_getch;
	return 1;

}

