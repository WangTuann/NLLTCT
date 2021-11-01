#define MAX 100
#define NGANGDOI '='
#define NGANGDON '-'

typedef unsigned short int Byte;

struct SinhVien
{
	char maSV[8];
	char HovaTen[26];
	double NamSinh;
	char lop[11];
	double diemTB;
	
};

void Nhap_1NV(SinhVien& p)
{
	cout << "\nMa Nhan Vien (dung 7 ky so) : ";
	_flushall();
	gets_s(p.maSV, 8);

	cout << "\nHo va ten: ";
	_flushall();
	gets_s(p.HovaTen, 26);

	cout << "nam sinh";
	_flushall();
	cout << "\nNhap lop: ";
	cin >> p.NamSinh;
	_flushall();
	gets_s(p.lop, 20);
	cout << "\nNhap luong: ";
	_flushall();
	cin >> p.lop;

	cout << "\nNhap diem TB: ";
	_flushall();
	cin >> p.diemTB;
}

void Nhap_DSNV(SinhVien a[MAX], int& n)
{
	int i;
	cout << "\nnhap n:";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		system("CLS");
		cout << "\nNhap thong tin nhan vien thu:" << i + 1 << ":";
		Nhap_1NV;
	}
}

void XuatKeNgang()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left) << ':';  for (i = 1; i <= 76; i++)
		cout << NGANGDOI;
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << "Ma SV"
		<< ':'
		<< setw(16)
		<< "Ho & Ten"
		<< ':'
		<< setw(12)
		<< "Nam sinh"
		<< setw(12)
		<< "lop"
		<< ':' << setw(12)
		<< "DiemTB"
		<< ':';
	XuatKeNgang();
}

void Xuat_1SV(SinhVien& p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << p.maSV
		<< ':'
		<< setw(16) << p.HovaTen
		<< ':'
		<< setw(12) << p.NamSinh
		<< '/'
		<< setw(12) << p.lop
		<< '/'
		<< setw(12) << setiosflags(ios::fixed) << setprecision(2) << p.diemTB
		<< ':';
}


void Xuat_DSSV(SinhVien a[MAX], int n)
{
	int i;
	XuatTieuDe();
	for (i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_1SV(a[i]);
	}
	XuatKeNgang();
}



