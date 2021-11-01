void XuatMenu();
int ChonMenu(int soMenu);
void XuliMenu(int menu, MaTranVuong a, int n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Xem ma tran vuong";
	cout << endl << "3. Tinh tong cac phan tu cua ma tran";
	cout << endl << "4. Xuat cac phan tu thuoc duong cheo chinh";
	cout << endl << "5. Xuat cac phan tu thuoc duong cheo phu";
	cout << endl << "6. Tinh tong cac phan tu nam phia tren duong cheo chinh";
	cout << endl << "7. Tinh tich cac phan tu nam phia duoi duong cheo phu ";
	cout << endl << "8.Xuat cac duong cheo // duong cheo chinh ";
	cout << endl << "==========================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "Nhap 1 so trong khoang [0,..," << soMenu << "]de chon chuc nang,stt";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)

			break;
	}
	return stt;
}

void XuliMenu(int menu, MaTranVuong a, int n)
{
	int sum, p;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1: system("CLS");

		cout << endl << "1. Nhap ma tran vuong";
		cout << "nhap cap ma tran vuong n=:";
		cin >> n;
		NhapMaTran(a, n);
		cout << "ma tran vuong vua nhap:";
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran vuong";
		cout << "ma tran hien hanh:";
		XuatMaTran(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tính tổng các phần tử của ma trận ";
		cout << "ma tran hien hanh:";
		XuatMaTran(a, n);
		sum = TinhTong_MaTran(a, n);
		cout << "tong cac phan tu cua ma tran la:sum=" << sum;
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Xuat cac phan tu thuoc duong cheo chinh";
		cout << "ma tran hien hanh:";
		XuatMaTran(a, n);
		cout << "cac phan tu thuoc duong cheo chinh:";
		XuatDuongCheoChinh(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Xuat cac phan tu thuoc duong cheo phu";
		cout << "ma tran hien hanh la:";
		XuatMaTran(a, n);
		cout << "cac phan tu thuoc duong cheo phu:";
		XuatDuongCheoPhu(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Tinh tong cac phan tu nam phia tren duong cheo chinh";
		cout << "ma tran hien hanh:";
		XuatMaTran(a, n);
		sum = TinhTong_Tren_CheoChinh(a, n);
		cout << "tong cac phan tu phia tren duong cheo chinh" << sum;
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Tinh tich cac phan tu nam phia duoi duong cheo phu ";
		cout << "ma tran hien hanh :";
		XuatMaTran(a, n);
		p = TinhTich_Duoi_DuongCheoPhu(a, n);
		cout << "tinh cac phan tu nam duoi duong cheo chinh la" << p;
		break;
	case 8:
		system("CLS");
		cout << endl << "8.Xuat cac duong cheo // duong cheo chinh ";    
		cout << "ma tran hien hanh";
		XuatMaTran(a, n);
		Xuat_DuongCheo_SS_DuongCheoChinh(a, n);
		break;
	}
	_getch();
}
