void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int  a[SIZE][SIZE], int& m, int& n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran chu nhat m x n";
	cout << endl << "2. Xem ma tran chu nhat";
	cout << endl << "3. Tinh tong gia tri lon nhat cua ma tran";
	cout << endl << "4. Tinh gia tri lon nhat cua hang i";
	cout << endl << "5. Tinh tong cac phan tu hang i";
	cout << endl << "6. Tinh gia tri nho nhat cot j";
	cout << endl << "7. Tinh tich cac phan tu cot j ";
	cout << endl << "8.Xuat aij: lon nhat hang i va nho nhat cot j ";
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

void XuLyMenu(int menu, int  a[SIZE][SIZE], int& m, int& n)
{
	int sum, p;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");   
		cout << endl << "1. Nhap ma tran chu nhat";   
		cout << "\nNhap so hang : m = ";   
		cin >> m;    
		cout << "\nNhap so cot : n = ";  
		cin >> n;   
		NhapTuDong_MaTran(a, m, n);  
		cout << "\nMa tran vua nhap:\n";  
		XuatMaTran(a, m, n);   
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran chu nhat";
		//Bo sung sau   
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh gia tri lon nhat cua ma tran";
		//Bo sung sau  
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tinh gia tri lon nhat hang i ";
		//Bo sung sau  
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tinh tong cac phan tu  hang i ";
		//Bo sung sau    
		break;

	case 6:
		system("CLS");
		cout << endl << "6. Tinh gia tri nho nhat cot  j ";
		//Bo sung sau   
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Tinh tich cac phan tu cot  j ";
		//Bo sung sau    
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Xuat aij : lon nhat hang i va nho nhat cot j ";
		//Bo sung sau  
		break;
	}
	_getch();
}


