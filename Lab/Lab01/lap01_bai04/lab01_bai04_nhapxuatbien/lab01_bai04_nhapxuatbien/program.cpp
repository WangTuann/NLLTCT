
#include<iostream>
#include<conio.h>

using namespace std;

int	main()
{
	int x=10;
	int	y = 24;
	float z = 3.141;
	cout << "x=" << x << endl;	
	cout << "y=" << y<< endl;
	cout << "z=" << z<< endl;
	cout << endl 
		<< x << "+"
		<< y<< "+"
		<< z << "="
		<< x+y+z;
	int dai, rong; 
	cout << endl << "nhap chieu dai hcn:";
	cin >> dai;
		cout << endl << "nhap chieu rong hcn:";
		cin >> rong;
		cout << endl << "chieu dai hcn la " << dai << ","
					 << "chieu rong hcn la " << rong;	
		int chuvi, dientich;
		chuvi = (dai + rong) * 2;
		dientich = dai * rong;
		cout <<endl<< "chu vi hcn la " << chuvi;
		cout <<endl<< "dien tich hcn la " << dientich;

	_getch();
	
	return 1;
}
