void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);

void XuatMenu()
{
	cout << "============================CHON CHUC NANG============================" << endl;
	cout << "0. Thoat khoi chuong trinh." << endl;
	cout << "1. Dem so luong so co 3 chu so." << endl;
	cout << "2. Dem cac so nam ngoai pham vi [min..max]." << endl;
	cout << "3. Dem so luong cac so chinh phuong." << endl;
	cout << "4. Dem so lan xuat hien cua phan tu x ke tu vi tri x cho truoc." << endl;
	cout << "5. Dem cac so duong chay trong day." << endl;
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
void XuLyMenu(int menu, DaySo a, int& n)
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
		cout << "\n1. Dem so luong so co 3 chu so.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		dem = DemSo_3ChuSo(a, n);
		cout << "\nCo " << dem << " so co 3 chu so.\n";
		break;
	case 2:
		system("CLS");
		cout << "\n2. Dem cac so nam ngoai pham vi [min..max].\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		DemSo_NgoaiMinMax(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Dem so luong cac so chinh phuong.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		dem = DemSo_ChinhPhuong(a, n);
		cout << "Co " << dem << " so chinh phuong.";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Dem so lan xuat hien cua phan tu x ke tu vi tri x cho truoc.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		dem = DemX_TuVTChoTruoc(a, n);
		cout << "Phan tu x tai vi tri ban chon xuat hien " << dem << " lan.";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Dem cac so duong chay trong day.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		dem = KiemTraGiam(a, n);
		cout << "Co " << dem << " duong chay.";
		break;
	}
}