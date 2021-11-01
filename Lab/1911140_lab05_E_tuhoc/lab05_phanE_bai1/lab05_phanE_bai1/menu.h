#define MAX 1000
#define tab '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int& n);
void XuatMang(DaySo a, int n);
int KT_SNT(int n);
void TimViTriSNT(DaySo a, int n);
int CountX(int a[], int n, int x);
void XuatHienNhieuNhat_VTDauTien(DaySo a, int n);
void SoNhoNhat(DaySo a, int n);
void SoAmLonNhat(DaySo a, int n);
void SoDuongNhoNhat(DaySo a, int n);

void NhapMang(DaySo a, int& n)
{
	int  i;
	cout << "\nNhap kich thuoc n : ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
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
int KT_SNT(int n)
{
	if (n < 2)
		return 0;
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				return 0;
		}
	}
	return 1;
}
void TimViTriSNT(DaySo a, int n)
{
	int	vt = 1;
	for (int i = (n - 1); i >= 0; i--)
	{
		if (KT_SNT(a[i]) == 1)
		{
			vt = i;
			cout << "Vi tri cua so nguyen to cuoi cung la: a[" << vt << "]";
			break;
		}
		else
		{
			cout << "\nMang a khong co SNT\n";
		}
	}
}
int CountX(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
			dem++;
	}
	return dem;
}
void XuatHienNhieuNhat_VTDauTien(DaySo a, int n)
{
	int max = 0, xuatHien;
	for (int i = 0; i < n; i++)
	{
		if (max < CountX(a, n, a[i]))
		{
			max = CountX(a, n, a[i]);
			xuatHien = a[i];
		}
	}
	if (max > 1)
	{
		cout << "\nPhan tu xuat hien nhieu nhat la: " << xuatHien;
		cout << "\nXuat hien " << max << " lan.";
	}
	if (max < 2)
		cout << "\nKhong co phan tu nao lap lai.";
}
void SoNhoNhat(DaySo a, int n)
{
	int min = a[0],
		vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			vt = i;
		}
	}
	cout << "\nGia tri nho nhat cua mang a la: " << min << endl;
	cout << "Xuat hien lan dau o vi tri a[" << vt << "]" << endl;
}
void SoAmLonNhat(DaySo a, int n)
{
	int max, vt;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			max = a[i];
			vt = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0 && a[i] > max)
		{
			max = a[i];
		}
	}
	cout << "\nSo am lon nhat cua mang a la: " << max << endl;
	for (int i = 0; i < n; i++)
	{
		if (max == a[i])
		{
			vt = i;
			cout << "Xuat hien o vi tri a[" << vt << "]" << endl;
		}
	}
}
void SoDuongNhoNhat(DaySo a, int n)
{
	int min, vt;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			min = a[i];
			vt = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < min)
		{
			min = a[i];
			vt = i;
		}
	}
	cout << "\nSo duong nho nhat cua mang a la: " << min << endl;
	for (int i = 0; i < n; i++)
	{
		if (min == a[i])
		{
			vt = i;
			cout << "Xuat hien o vi tri a[" << vt << "]" << endl;
		}
	}
	cout << "Xuat hien o vi tri a[" << vt << "]" << endl;
}

