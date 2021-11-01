




void XuatMenu()
{
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap mang:";
	cout << "\n2.Xem mang:";
	cout << "\n3.cong ma tran";
	cout << "\n4.tru ma tran";
	cout << "\n5.nhan ma tran";
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





