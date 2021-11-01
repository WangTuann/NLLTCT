void XuatMenu()
{
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap MT:";
	cout << "\n2.XuatMT:";
	cout << "\n3.tinh tich cac phan tu trong ma tran";
	cout << "\n4.tinh tong cac gia tri lon nhat cua cot j";
	cout << "\n5.xuat ra man hinh cac phan tu aij thoa man aij phan tu nho nhat hang i va lon nhat cot j";
	cout << "\n==================================================\n";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");	
		XuatMenu();
		cout << "nhap vao mot so trong khoang [0,..," << soMenu << "]de chon chuc nang:";
		cin >> stt;
		if (stt >= 0 && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLiMenu(int menu, MaTranVuong a, int &n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "Thoat khoi chuong trinh";
		break;
	case 1:
		system("CLS");
		cout << "\nnhap tu dong ma tran vuong\n:";
		cout << "\nnhap cap ma tran vuong\n";
		cin >> n;
		NhapMT(a, n);	
		cout << "\nday so hien hanh la:";
		XuatMt(a, n);
		break;
	case 2:
		system("CLS");
		cout << "Xuat ma tran:";
		cout << "\nday so hien hanh la:";
		XuatMt(a, n);
		break;
	case 3:
		int p;
		system("CLS");
		cout << " tich cac phan tu trong ma tran:";
		cout << "day so hien hanh:";
		XuatMt(a, n);
		p = TinhTichMT(a, n);
		cout << "Tich cac phan tu trong ma tran la: " << p;
		break;
	case 4:
		int kq;
		system("CLS");
		cout << endl << "4. Tinh tong cac gia tri lon nhat cua cot j";
		cout << "\nMa tran vuong hien hanh:";
		XuatMt(a, n);
		kq = Tong_MaxCot(a, n);
		cout << "\nTong cac gia tri lon nhat cua cot j la: " << kq;
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Xuat phan tu a[i][j] thoa man: a[i][j] la phan tu nho nhat hang i va lon nhat cot j";
		cout << "\nMa tran vuong hien hanh:";
		XuatMt(a, n);
		MaxCot_MinHang(a, n);
		break;
	}
}