
#define size 10

typedef int MaTranVuong[size][size];


void NhapMaTran(MaTranVuong& a, int n, char kt)
{
	int i, j;  
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << endl << kt << "[" << i << "][" << j << "]= ";
			cin >> *(a + i * n + j);
		}
} void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << endl << endl;
		for (j = 0; j < n; j++)
			cout << setw(4) << *(a + i * n + j);

	}
}

MaTranVuong TinhTong_2_MaTran(MaTranVuong a, MaTranVuong b, int n)

{
	int i, j;  MaTranVuong c;
	c = new int[n * n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			*(c + i * n + j) = *(a + i * n + j) + *(b + i * n + j);
	return c;
}





