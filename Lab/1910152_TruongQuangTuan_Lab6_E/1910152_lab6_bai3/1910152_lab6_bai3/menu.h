void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& n);

void XuatMenu()
{
	cout << "============================CHON CHUC NANG============================" << endl;
	cout << "0. Thoat khoi chuong trinh." << endl;
	cout << "1. nhap kich thuoc mang" << endl;
	cout << "2. xuat mang vua nhap" << endl;
	cout << "3. hoan vi hai cot j va h cua ma tran" << endl;
	cout << "4. hoan vi hai hang i va k cua ma tran" << endl;
	cout << "5. tim ma tran hoan vi" << endl;
	cout << "======================================================================" << endl;
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "Ban chon chuc nang so: "; cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int menu, MaTran a, int& n)
{
	int dem = 0;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh.\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. nhap kich thuoc mang\n";

		break;
	case 2:
		system("CLS");
		cout << "\n2. xuat mang vua nhap\n";
		cout << "\nDay so hien hanh: \n";
		
		break;
	case 3:
		system("CLS");
		cout << "\n3. hoan doi hai cot j va k trong ma tran.\n";
		cout << "\nDay so hien hanh: \n";
	
		break;
	case 4:
		system("CLS");
		cout << "\n4. hoan doi hai hang i va k trong ma tran.\n";
		cout << "\nDay so hien hanh: \n";
	
		break;
	case 5:
		system("CLS");
		cout << "\n5. tim ma tran hoan vi\n";
		cout << "\nDay so hien hanh: \n";
	
		break;
	}
}
