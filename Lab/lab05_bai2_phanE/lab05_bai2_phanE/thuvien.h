#define MAX 1000
#define TAB '\t'

typedef int DaySo[MAX];
void NhapMang(DaySo a, int& n);
void XuatMang(DaySo a, int n); 
int SoLuong_SoChinhPhuong(DaySo a, int n);
int SoLan_XuatHien_X(DaySo a, int n);

void NhapMang(DaySo a, int& n)
{
	int i;
	for (i = 0; i < n;i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << 't';
}

int SoLuong_So3ChuSo(DaySo a, int n)
{
	int i,dem=0;
	for (i = 0; i < n; i++)
	{
		if (99<a[i]<1000)
		{
			dem++;
		}
		return dem;
	}
}

int SoLuong_NamNgoaiMang(DaySo a,int n)
{
	int min, max,i,
		dem=0;
	cout << "nhap min max cua :" << min, max;
	cin >> min >> max;
	for ( i = 0; i < n; i++)
	{
		if (a[i]<min||a[i]>max)
		{
			dem++;
		}
		return dem;
	}
}

int SoLuong_SoChinhPhuong(DaySo a, int n)
{
	int dem = 0, i,m;
	for ( i = 0; i <n; i++)
	{
		m = sqrt(a[i]);
		if (m%2==0)
		{
			dem++;
		}
		return dem;
	}
}

int SoLan_XuatHien_X(DaySo a, int n)
{
	int x, i, dem = 0;
	for (i = 0; i < n; i++)
	{
		if (x==a[i])
		{
			dem++;
		}
		return dem;
	}
}

