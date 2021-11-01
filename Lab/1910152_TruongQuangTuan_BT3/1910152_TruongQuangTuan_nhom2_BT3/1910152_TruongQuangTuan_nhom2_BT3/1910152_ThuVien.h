#define SIZE 5

typedef int MaTranVuong[SIZE][SIZE];

void XuatMt(MaTranVuong a, int n);


void NhapMT(MaTranVuong a, int n)
{
	int i, j;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			a[i][j] = rand() % 9 - 4;
}

void XuatMt(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl;
		for (j = 0; j < n; j++)

		{
			cout << a[i][j] << "  ";
		}
	}
}

int TinhTichMT(MaTranVuong a, int n)
{
	int i, j, p = 1;
	for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
	p *= a[i][j];
	return p;

}

int Max_Cot(MaTranVuong a, int n, int c)
{
	int i;
	int max = -4;
	for (i = 0; i < n; i++)
	{
		if (a[i][c] > max)
			max = a[i][c];
	}
	return max;
}
int Tong_MaxCot(MaTranVuong a, int n)
{
	int sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		sum = sum + Max_Cot(a, n, i);
	}
	return sum;
}
int Min_Hang(MaTranVuong a, int n, int h)
{
	int j;
	int min = 100;
	for (j = 0; j < n; j++)
	{
		if (a[h][j] < min)
			min = a[h][j];
	}
	return min;
}
void MaxCot_MinHang(MaTranVuong a, int n)
{
	int i, j;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == (Max_Cot(a, n, i)) && a[i][j] == (Min_Hang(a, n, i)))
				cout << "Phan tu do la: " << a[i][j];
		}
	}
	cout << "\nKhong co phan tu thoa dieu kien.";
}