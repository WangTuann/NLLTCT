#define MAX 1000
#define tab '\t'

typedef int DaySo[MAX];

void NhapMang(DaySo a, int& n);
void XuatMang(DaySo a, int n);
void HoanVi(int& x, int& y);
void SapXep_DuongTang(DaySo a, int n);
void SapXepTang_0Cuoi(DaySo a, int n);
void SapXep_0Dau_AmGiuaGiam_DuongCuoiTang(DaySo a, int n);
void SapXep_LeDauTang_ChanCuoiGiam(DaySo a, int n);
int KT_SNT(int n);
void SapXep_SNTDauTang_ConLaiCuoiGiam(DaySo a, int n);

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
void HoanVi(int& x, int& y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}
void SapXep_DuongTang(DaySo a, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] > 0)
		{
			for (j = i + 1; j < n; j++)
			{
				if (a[i] > a[j] && a[j] > 0)
					HoanVi(a[i], a[j]);
			}
		}
	}
}
void SapXepTang_0Cuoi(DaySo a, int n)
{
	int i, j, bd;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
		{
			bd = (a[i] < 0 && a[j] < 0 && a[i] > a[j]) ||
				(a[i] > 0 && a[j] < 0) ||
				(a[i] == 0 && a[j] != 0) ||
				(a[i] > 0 && a[j] > 0 && a[i] > a[j]);
			if (bd)
				HoanVi(a[i], a[j]);
		}
}
void SapXep_0Dau_AmGiuaGiam_DuongCuoiTang(DaySo a, int n)
{
	int i, j, bd;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			bd = (a[i] < 0 && a[j] < 0 && a[i] < a[j]) ||
				(a[i] > 0 && a[j] < 0) ||
				(a[i] != 0 && a[j] == 0) ||
				(a[i] > 0 && a[j] > 0 && a[i] > a[j]);
			if (bd)
				HoanVi(a[i], a[j]);
		}
	}
}
void SapXep_LeDauTang_ChanCuoiGiam(DaySo a, int n)
{
	int i, j, bd;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			bd = (a[i] % 2 == 0 && a[j] % 2 != 0) ||
				(a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]) ||
				(a[j] % 2 != 0 && a[i] % 2 != 0 && a[i] > a[j]);

			if (bd)
				HoanVi(a[i], a[j]);
		}
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
void SapXep_SNTDauTang_ConLaiCuoiGiam(DaySo a, int n)
{
	int i, j, bd;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			bd = (KT_SNT(a[i]) == 0 && KT_SNT(a[j]) == 1) ||
				(KT_SNT(a[i]) == 1 && KT_SNT(a[j]) == 1 && a[i] > a[j]) ||
				(KT_SNT(a[i]) == 0 && KT_SNT(a[j]) == 0 && a[i] < a[j]);

			if (bd)
				HoanVi(a[i], a[j]);
		}
	}
}