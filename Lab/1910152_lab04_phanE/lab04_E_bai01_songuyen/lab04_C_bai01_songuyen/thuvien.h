void Xuat(int n);
void Chia3khong4(int n);
void Demtongcacso(int n);
int DaoNguoc(int n);
void TongChuSo(int n);
void ChuSoDauTien(int n);
void SoHoanChinh(int n);
void TongSoNguyenLonNhat(int n);

void Xuat(int n)
{
		for (int i = 0; i <= n; i++)
	{
		cout << i << '\t';
		if (i % 10 == 0)
			cout << endl << endl;
	}
		_getch();
}



void Chia3khong4(int n)
{	int d = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i % 3 == 0 && i % 4 != 0)
			d++;
	}


	cout << endl << "Tong cong co *" << d << "* so chia het cho 3 nhung khong chia het cho 4 ";
	_getch();

}


void Demtongcacso(int n)
{	int i = 1, t;
	for (i; (n / 10) > 0; i++)
	{		t = n / 10;
		n = t;
	}
		cout << " co " << i << " chu so.";
}


int  DaoNguoc(int n)
{	int  m, d;
		do
	{
		d = n % 10;
		m = n / 10;
		cout << d;
		n = m;
	} while (m != 0);
	_getch();
	return d;
}

void TongChuSo(int n)
{	int d, t = 0;
	do
	{
		d = n % 10;
		t += d;
	} while (d >= 0);
	cout << endl << "Tong cac chu so trong n la: " << t;
}

void  ChuSoDauTien(int n)
{		int m, d;
	do
	{
		m = n / 10;
		d = n % 10;
		n = m;
	} 
	while (m != 0);
	cout << d;
	_getch();
}

void SoHoanChinh(int n)
{
	int i = 1, s;
	while (i < n)
	{
		s = 0;
		for (int j = 1; j < i; j++)
		{
			if (j%i == 0)
			{
				s += j;
			}
		}
		if (s == i)
		{
			cout << i;
		}
		i++;
	}
	_getch();
}
void TongSoNguyenLonNhat(int n)
{
	int t = 0, i = 1;
	while (i <= n)
	{
		t += i;

		if (t == n)
		{
			cout << i;
			break;
		}
		if (t>n)
		{
			cout << (i - 1);
			break;
		}
		i++;
	}
	_getch();
}