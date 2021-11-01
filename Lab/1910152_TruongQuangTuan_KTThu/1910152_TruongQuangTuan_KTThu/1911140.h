double TrangThai(double BMI);
double TinhChiSoBMI();

double TinhChiSoBMI()
{
	float w, h,BMI;
	cout << "nhap chieu cao cua ban:";
	cin >> h;
	cout << "nhap can nang cua ban:";
	cin >> w;
	BMI = w /( h * h);
	cout << "BMI=:" << BMI;
	return BMI;
}

double TrangThai(double BMI)
{
	
	if (BMI < 15)
	cout << "doi khat";
	else if (15 <= BMI &&BMI< 17.5)
	cout << "bieng an";
	else if (17.5 <= BMI&&BMI < 18.5)
	cout << "thieu can";
	else if (18.5 <= BMI&&BMI < 25)
	cout << "ly tuong ";
	else if (25 <= BMI&&BMI < 30)
	cout << "thua an";
	else if (30 <= BMI&&BMI < 40)
	cout << "beo phi";
	return 1;
	_getch();
}


