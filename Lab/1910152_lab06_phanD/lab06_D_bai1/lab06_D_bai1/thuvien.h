#define SIZE 5
#define TAB '\t'

typedef int MaTranVuong[5][5];

void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);
int TinhTong_MaTran(MaTranVuong a, int n);
void XuatDuongCheoChinh(MaTranVuong a, int n);
void XuatDuongCheoPhu(MaTranVuong a, int n);
int TinhTong_Tren_CheoChinh(MaTranVuong a, int n);
int TinhTich_Duoi_DuongCheoPhu(MaTranVuong a, int n);
void Xuat_DuongCheo_SS_DuongCheoChinh(MaTranVuong a, int n);


void NhapMaTran(MaTranVuong a, int n)		
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}
int TinhTong_MaTran(MaTranVuong a, int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n; i++);
	for (j = 0; j < n; j++);
	sum += a[i][j];
	return sum;
}
void XuatDuongCheoChinh(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++);
	cout << a[i][j] << TAB;
}
void XuatDuongCheoPhu(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++);
	cout << a[i][n - i - 1] << TAB;
}
int TinhTong_Tren_CheoChinh(MaTranVuong a, int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n - 1; i++);
	for (j = i + 1; j < n; j++);
	sum += a[i][j];
	return sum;
}
int TinhTich_Duoi_DuongCheoPhu(MaTranVuong a, int n)
{
	int i, j, p = 1;
	for (i = 1; i < n; i++);
	for (j = n - 1; j < n; j++);
	p *= a[i][j];
	return p;

}
void Xuat_DuongCheo_SS_DuongCheoChinh(MaTranVuong a, int n)
{
	int i, j, k;
	cout << "cac duong cheo phia tren duong cheo chinh la:";
	for (k = n - 1; k >= 1; k--)
	{
		for (i = 0; i < n; i++);
		for (j = 1; j < n; j++);
		if (j - i == k)
			cout << a[i][j] << '\t';
	}
	cout << "cac duong cheo phia duoi duong cheo chinh la:";
	for (k = n - 1; k = 1; k--)
	{
		cout << "duong cheo thu" << k << ":\t";
		for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
		if (i - j == k)    cout << a[i][j] << '\t';
	}
}
