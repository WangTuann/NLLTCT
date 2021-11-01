void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Kiem tra x nam trong mang a";
	cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
	cout << endl << "3. Kiem tra mang a la day tang";
	cout << endl << "4. Tim phan tu lon nhat";
	cout << endl << "5. Tim vi tri cuoi cung gia tri lon nhat xuat hien";
	cout << endl << "6. Neu a chua x thi cung chua -x";
	cout << endl << "7. Xem du lieu day so";
	cout << endl << "8. Chon lai bo du lieu moi cho day so";
	cout << endl << "==========================================" << endl;
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
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Kiem tra x nam trong mang a" << endl;
		int x, kq;
		cout << "Nhap gia tri x: ";
		cin >> x;
		kq = ChuaX(a, n, x);
		system("CLS");
		cout << "Mang hien hanh: " << endl;
		XuatMang(a, n);
		if (kq)
			cout << "\nMang co chua " << x;
		else
			cout << "Mang khong chua " << x;
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tim vi tri dau tien x xuat hien trong a" << endl;
		cout << "Nhap gia tri cua x: ";
		cin >> x;
		kq = Tim_VTDT_X(a, n, x);
		system("CLS");
		cout << "Mang hien hanh: " << endl;
		XuatMang(a, n);
		if (kq == -1)
			cout << "\nMang khong chua " << x;
		else
			cout << "\nVi tri dau tien cua so " << x << " xuat hien trong a la: " << kq << endl;
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Kiem tra mang a la day tang";
		kq = KiemTraMangTang(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << "\na la mang tang.";
		else
			cout << "\na khong phai la mang tang.";
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim phan tu lon nhat";
		kq = TinhMax(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << "\nMax[0,..," << n << "] = " << kq;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tim vi tri phan tu lon nhat";
		kq = TimViTriMax_CuoiCung(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		cout << endl << "Vi tri xuat hien cuoi cung cua gia tri lon nhat la: "
			<< kq;
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Neu a chua x thi cung chua -x";
		kq = ChuaXChuaTruX(a, n);
		system("CLS");
		cout << "\nMang hien hanh:\n";
		XuatMang(a, n);
		if (kq)
			cout << endl << "Phat bieu dung ";
		else
			cout << endl << "Phat bieu sai ";
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Xem du lieu day so";
		cout << "\nDay so hien hanh:\n" << endl;
		XuatMang(a, n);
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Chon bo du lieu khac";
		cout << "\nNhap lai kich thuoc n : ";
		cin >> n;
		NhapTuDong(a, n);
		system("CLS");
		cout << "\nDay so moi nhap:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}

