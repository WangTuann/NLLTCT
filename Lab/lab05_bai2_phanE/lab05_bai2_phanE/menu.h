void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);

void XuatMenu()
{
	cout << "====================================CHON CHUC NANG=====================================" << endl;
	cout << "0. Thoat khoi chuong trinh." << endl;
	cout << "1. Dem so luong so co 3 chu so." << endl;
	cout << "2. Dem cac so nam ngoai pham vi[min..max] cho truoc" << endl;
	cout << "3. Dem so luong so chinh phuong" << endl;
	cout << "4. Dem so lan xuat hien cua phan tu x " << endl;
	cout << "5. Dem so luong cac duong chay trong day" << endl;
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
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SoLuong_So3ChuSo(a, n);
		cout << "\nso luong so co 3 chu so \n";
				break;
	case 2:
		system("CLS");
			cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SoLuong_NamNgoaiMang(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SoLuong_NamNgoaiMang(a, n);
		cout << "\nso nam ngoai pham vi[min..max] cho truoc \n";
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SoLuong_SoChinhPhuong(a, n);
		cout << "\n \n";
		XuatMang(a, n);
		break;
	case 5:
		system("CLS");
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SapXep_SNTDauTang_ConLaiCuoiGiam(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	}
}
