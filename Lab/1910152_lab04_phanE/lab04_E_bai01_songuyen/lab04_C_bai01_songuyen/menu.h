void XyLyMenu(int menu, int n);
void XuatMenu();
int ChonMenu(int SoMenu);


void XuatMenu()
{
	cout << endl << "================================= CHON CHUC NANG ==================================";
	cout << endl << "0.Thoat khoi chuong trinh";
	cout << endl << "1. Day cac chu so tu 1 toi n :";
	cout << endl << "2. So luong cac so chia het cho 3 nhung khong chia het cho 4 trong doan [1,n]";
	cout << endl << "3. Dem so luong chu so cua n";
	cout << endl << "4. Dao nguoc so n";
	cout << endl << "5. Cho biet chu so dau tien trong n";
	cout << endl << "6. Xuat tat ca cac so hoan chinh trong pham vi [1,n]";
	cout << endl << "7. Tim so nguyen m lon nhat sao cho tong 1+2+...+m <= n";
	cout << endl << "===================================================================================";


}


int ChonMenu(int SoMenu)
{
	
	int Chon;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << "\n Nhap vao mot so de chon menu(0<= stt <=" << SoMenu << "): stt = ";
		cin >> Chon;
		if (0 <= Chon && Chon <= SoMenu)
			break;
	}
	return Chon;

}

void XyLyMenu(int menu, int n)
{
	int DN = 0;

	switch (menu)
	{
	case 0:
		cout << endl << "0.Thoat khoi chuong trinh ";
		break;
	case 1:
		cout << endl << "1. Xuat cac so tu 1 toi n ";
		Xuat(n);
		break;
	case 2:
		cout << endl << "2. Dem so luong cac so chia het cho 3 nhuwng khong chia het cho 4 trong doan [1,n] ";
		Chia3khong4(n);
		break;
	case 3:
		cout << endl << "3. Dem so luong chu so cua n ";
		cout << endl << "So: " << n;
		Demtongcacso(n);
		break;
	case 4:
		cout << endl << "4. Dao nguoc so n ";

		DN = DaoNguoc(n);
		break;
	case 5:
		cout << endl << "5. Cho biet chu so dau tien trong n ";
		ChuSoDauTien(n);
		break;
	case 6:
		cout << endl << "6. Xuat tat ca cac so hoan chinh trong pham vi [1,n] ";
		SoHoanChinh(n);
		break;
	case 7:
		cout << endl << "7. Tim so nguyen m lon nhat sao cho tong 1+2+...+m <= n ";
		TongSoNguyenLonNhat(n);
		break;
	}
	

}
