void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);

void XuatMenu()
{
	cout << "====================================CHON CHUC NANG=====================================" << endl;
	cout << "0. Thoat khoi chuong trinh." << endl;
	cout << "1. Sap xep cac so duong tang dan, cac so khac giu nguyen vi tri." << endl;
	cout << "2. Sap xep so 0 o cuoi mang, cac so khac o dau mang va tang dan." << endl;
	cout << "3. Sap xep so 0 o dau mang, so am o giua va giam dan, so duong o cuoi va tang dan." << endl;
	cout << "4. Sap xep so le o dau mang va tang dan, so chan o cuoi mang va giam dan." << endl;
	cout << "5. Sap xep cac SNT o dau mang va tang dan, cac so khac o cuoi va giam dan." << endl;
	cout << "=======================================================================================" << endl;
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
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh.\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1. Sap xep cac so duong tang dan, cac so khac giu nguyen vi tri.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SapXep_DuongTang(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Sap xep so 0 o cuoi mang, cac so khac o dau mang va tang dan.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SapXepTang_0Cuoi(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Sap xep so 0 o dau mang, so am o giua va giam dan, so duong o cuoi va tang dan.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SapXep_0Dau_AmGiuaGiam_DuongCuoiTang(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << "\n4. Sap xep so le o dau mang va tang dan, so chan o cuoi mang va giam dan.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SapXep_LeDauTang_ChanCuoiGiam(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Sap xep cac SNT o dau mang va tang dan, cac so khac o cuoi va giam dan.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SapXep_SNTDauTang_ConLaiCuoiGiam(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	}
}