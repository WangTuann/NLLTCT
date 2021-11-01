void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);

void XuatMenu()
{
	cout << "\n========= CHON CHUC NANG =============";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap day so a";
	cout << "\n2. Xuat day so ra man hinh";
	cout << "\n3. Tinh tong cac phan tu trong day";
	cout << "\n4. Dem so luong phan tu co 3 chu so";
	cout << "\n5. Tim vi tri cuoi cung ma gia tri nho nhat cua day so a xuat hien trong a";
	cout << "\n6. Sap xep day a sao cho cac so khac 0 o dau day va tang dan";
	cout << "\n7. 7. Sap xep day a sao cho cac so 0 nam o cuoi day";
	cout << "\n==========================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "Nhap so cua muc can thao tac: ";
		cin >> stt;
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
		cout << "\n1. Nhap tu dong mang a.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xuat mang.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh tong cac phan tu trong day so.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		TinhTong(a, n);
		break;
	case 4:
		int dem;
		system("CLS");
		cout << "\n4. Dem cac so co 3 chu so.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		dem = DemSo_3ChuSo(a, n);
		cout << "\nCo " << dem << " so co 3 chu so.";
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim vi tri cuoi cung ma phan tu nho nhat xuat hien.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		ViTriCuoiCungPTNhoNhat(a, n);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Sap xep day a sao cho: So 0 nam o cuoi, cac so con lai nam o dau va tang dan.\n";
		cout << "\nDay so hien hanh: \n";
		XuatMang(a, n);
		SapXepTang_0Cuoi(a, n);
		cout << "\nDay vua duoc sap xep: \n";
		XuatMang(a, n);
		break;
	}
}