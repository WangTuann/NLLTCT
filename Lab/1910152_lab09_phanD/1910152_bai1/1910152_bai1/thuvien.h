
int Nhap(int *a, int n)
{
	
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		cout << "a[" << i << "]";
		cin >> *(a + i);
	}
}

int XUat(int *a, int n)
{
	int i;
	for ( i	= 0; i < n;i++)
	{
		cout<<""
	}
}






void XuatGiaTri_SoLan_PhanBiet(int* a, int n)
{
	int i,
		dau;
	int* b,
		j,
		* c,
		m;
	m = 0;
	b = new int[n];
	for (i=0;i<n;i++)
	{
		dau = 1;
		for (j = 0; j < n; j++)
			dau = dau && (*(a + i) != *(b + j));
		if (dau)
		{
			*(b + m) = *(a + i);
			m++;
		}
	}
	c = new int[n];
	int k;
	for (k = 0; k < m; k++)
		*(c + k) = 0;
	for ( j = 0; j < m; j++)
	{
		for(i=0;i<n;i++)
			if (a[i]==*(b+j))
			{
				*(c + j) = *(c + j) + 1;
			}
	}
	cout << "\ncac gia tri phan biet trong a va so lan xuat hien cac gia tri nay:\n";
	for ( k = 0; k < m; k++)
	{
		cout << "\nGiatri" << *(b + k) << "xuat hien" << *(c + k) << "lan";
	}
	delete[]b;
	delete[]c;
	
}

