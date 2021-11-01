int NhapN();
int KiemTra(int n);
int TongUocSo(int n);

int NhapN()
{
	int k;
	cout << "Nhap vao so nguyen duong N: ";
	cin >> k;
	return k;
}
int KiemTra(int n)
{
	if (n < 2)
		cout << n << " khong phai la so nguyen to." << endl;
	int so = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			so++;
	}
	if (so == 0)
		cout << n << " la so nguyen to." << endl;
	else
		cout << n << " khong la so nguyen to." << endl;
	return 0;

}
int TongUocSo(int n)
{
	int tong = 0, a;
	int so = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			so++;
	}
	if (so == 0)
	{
		for (int i = 2; i <= n; i++)
		{
			if (n % i == 0)
				tong = tong + i;
		}
	}
	else
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
				tong = tong + i;
		}
	cout << "Tong cac uoc so nguyen to cua " << n << " la: " << tong << endl;
	return tong;
}