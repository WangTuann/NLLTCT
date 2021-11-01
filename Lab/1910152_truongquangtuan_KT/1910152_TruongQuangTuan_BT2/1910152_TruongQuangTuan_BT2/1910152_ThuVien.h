#define MAX 100
#define TAB	'\t'

typedef int DaySo[MAX];
void NhapDaySo_TuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
void TinhTong(DaySo a, int n);
int DemSo_3ChuSo(DaySo a, int n);
void ViTriCuoiCungPTNhoNhat(DaySo a, int n);
void HoanVi(int& x, int& y);
void SapXepTang_0Cuoi(DaySo a, int n);


void NhapDaySo_TuDong(DaySo a, int n)	
{
	int  i;
	cout << "\nNhap kich thuoc n : ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (-10 + rand() % 21);

}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
		if ((i + 1) % 10 == 0)
			cout << endl;
	}
}

void TinhTong(DaySo a, int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum = sum + a[i];
	cout << "\nTong cac phan tu trong mang la: " << sum;
}

int DemSo_3ChuSo(DaySo a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 99 && a[i] < 1000)
			dem++;
	return dem;
}

void ViTriCuoiCungPTNhoNhat(DaySo a, int n)
{
	int min = a[0],
		vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] <= min)
		{
			min = a[i];
			vt = i;
		}
	cout << "\nVi tri xuat hien cuoi cung cua phan tu nho nhat la a[" << vt << "]";
}
void HoanVi(int& x, int& y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
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