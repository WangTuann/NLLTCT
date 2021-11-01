#define MAX 1000
#define tab '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int DemSo_3ChuSo(DaySo a, int n);
void DemSo_NgoaiMinMax(DaySo a, int n);
int KiemTra_ChinhPhuong(int n);
int DemSo_ChinhPhuong(DaySo a, int n);
int DemX_TuVTChoTruoc(DaySo a, int n);
int KiemTraTang(DaySo a, int n);
int KiemTraGiam(DaySo a, int n);
int DemSo_DuongChay(DaySo a, int n);

void NhapTuDong(DaySo a, int& n)
{
	int  i;
	cout << "\nNhap kich thuoc n : ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}
void NhapMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << tab;
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}
int DemSo_3ChuSo(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 99 && a[i] < 1000)
			dem++;
	}
	return dem;
}
void DemSo_NgoaiMinMax(DaySo a, int n)
{
	int Min, Max, dem = 0, x;
	cout << "\nNhap vao Min: ";
	cin >> Min;
	cout << "Nhap vao Max: ";
	cin >> Max;
	for (int i = 0; i < n; i++)
	{
		if (Min <= a[i] && a[i] <= Max)
			dem++;
	}
	x = n - dem;
	cout << "Co " << x << " so nam ngoai khoang [" << Min << "..." << Max << "]";
}
int KiemTra_ChinhPhuong(int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		if (i * i == n)
			return 1;
	}
	return 0;
}
int DemSo_ChinhPhuong(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTra_ChinhPhuong(a[i]) == 1)
			dem++;
	}
	return dem;
}
int DemX_TuVTChoTruoc(DaySo a, int n)
{
	int dem = 0,
		vt;
	cout << "\nBan chon vi tri bao nhieu: ";
	cin >> vt;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[vt - 1])
			dem++;
	}
	return dem;
}
int KiemTraTang(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] <= a[j])
				return 1;
		}
	}
	return 0;
}
int KiemTraGiam(DaySo a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] >= a[j])
				return 1;
		}
	}
	return 0;
}
int DemSo_DuongChay(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraGiam(a, n) == 1)
			dem++;
		if (KiemTraTang(a, n) == 1)
			dem++;
	}
	return dem;
}

