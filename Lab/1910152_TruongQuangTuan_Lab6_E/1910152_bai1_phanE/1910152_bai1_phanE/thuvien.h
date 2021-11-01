#define	MAX 100
#define TAB '\t'

typedef double  MaTran[MAX][MAX];
void XuatMaTran(MaTran a, int n);
int	 SoDuongMin_Hangi(MaTran a, int n, int i);
int SoAmMax_Cotj(MaTran a, int n, int j);

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
			cout << a[i][j] << TAB;
	}

}

int SoDuongMin_Hangi(MaTran a, int n, int i)
{
	int mini, j;
	mini = a[i][0];
	for (j = 0; j < n; j++)
		if (a[i][j] > 0 && a[i][j] > mini)
		mini = a[i][j];
	return mini;

}

int SoAmMax_Cotj(MaTran a, int n, int j)
{
	int maxj, i;
	maxj = a[j][0];
	for (i = 0; i < n; i++)
		if (a[i][j] < 0 && a[i][j] < maxj)
			maxj = a[i][j];
	return maxj;
}

int TinhT(MaTran a,int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += SoDuongMin_Hangi(a, n, i);
	}
	return sum;
}

int TinhS(MaTran a, int n)
{
	double sum = 0;
	for (int j = 0; j < n; j++)
	{
		sum += SoAmMax_Cotj(a, n, j);
	}
	return sum;
}