#define MAX 1000
#define tab '\t'

typedef int MaTran[MAX][MAX];


void NhapMaTran(MaTran a, int n);
void XuatMaTran(MaTran a, int n);

void NhapMaTran(MaTran a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}

void XuatMaTran(MaTran a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << tab;
	}

}

void HoanVi(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

void hoanvicot(MaTran a, int n, int c1, int c2)
{
	if ((c1 >= 0 && c1 < n) && (c2 >= 0 && c2 <n))
	{
		for (int i = 0; i < n; i++)
			HoanVi(a[i][c1], a[i][c2]);
	}
	XuatMaTran(a, n);
}