void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int Menu, SinhVien a[MAX], int& n);



void XuatMenu()
{
	cout << "\n==============He thong chuc nang=========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. tao bang diem sinh vien";
	cout << "\n2. xem bang diem sinh vien";
	cout << "\n3. xem bang diem day du-co XLHL";
	cout << "\n4. xuat bang diem sinh vien theo tung lop";
	cout << "\n5. sap bang diem sinh vien giam dan theo diem trung binh";
	cout << "\n6. sap xep xa xuat bang diem tang dan theo ten, neu trung ten, sap tang theo ma sinh vien";
	cout << "\n7.tim va xuat thong tin cua sinh vien co ten cho truoc";
	cout << "\n8. tim va xuat thong tin cua sinh vien co diem trung binh cao nhat";
	cout << "\n=================================================================";
	cout << "\n     (Du lieu da duoc khoi tao, chon 1 neu muon tao lai du lieu.)";
	cout << "\n=================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "nhap mot so trong khoang[0,..," << soMenu << "]de chon chuc nang, stt=";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(SinhVien a[MAX], int Menu, int& n)
{
	switch (Menu)
	{
	case 0:
		system("CLS");
		cout << "\n0.Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << "\n1.tao bang diem sinh vien\n";
		Nhap_DSNV(a, n);
		system("CLS");
		Xuat_DSSV(a, n);
		cout << "\nso sinh vien trong danh sach : n = " << n;
		break;
	case 2:
		system("CLS");
		cout << "\n2.Xem bang diem sinh vien";
		Xuat_DSSV(a, n);
		cout << "\nso sinh vien trong danh sach : n = " << n;
		break;
	}
}