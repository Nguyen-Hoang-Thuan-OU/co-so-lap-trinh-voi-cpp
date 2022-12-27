/*
Viết các hàm sau đây:
	a. void menu(): hiển thị menu gồm 4 phép tính cộng, trừ, nhân, chia
	b. int cong(int a, int b): cộng hai số nguyên
	c. int tru(int a, int b): trừ hai số nguyên.
	d. double chia(int a, int b): chia hai số nguyên.
	e. Chương trình in ra menu, yêu cầu người dùng nhập vào hai số nguyên và chọn
	phép toán. Sau đó in ra kết quả. Giao diện chương trình có dạng như sau:

		1. Cong
		2. Tru
		3. Nhan
		4. Chia

		Nhap 2 so nguyen: 4 5
		Chon (1-4): 1

		4 + 5 = 9

		Tiep tuc (C/K): c

		Nhap 2 so nguyen: 5 2
		Chon (1-4): 4

		5 / 2 = 2.5

		Tiep tuc (C/K): k
*/

#include <iostream>
using namespace std;

// Cộng

int cong ( int a, int b)
{
	return a + b;
}

// Trừ

int tru ( int a, int b)
{
	return a - b;
}

// Nhân

int nhan ( int a, int b)
{
	return a *b;
}

// Chia

double chia ( int a, int b)
{
	return ( a * 1.0 ) / b;
}

// Hiển thị

void menu()
{
	cout << "1. Cong\n";
	cout << "2. Tru\n";
	cout << "3. Nhan\n";
	cout << "4. Chia\n";
}

int main()
{
	int phepTinh, a, b;
	char tiepTuc;

	menu();

	do{
		int a, b;

		cout << "Nhap so nguyen thu nhat: ";
		cin >> a;
		cout << "Nhap so nguyen thu hai: ";
		cin >> b;
		cout << "Chon phep tinh ( 1 - 4 ): ";
		cin >> phepTinh;

		switch (phepTinh)
		{
		case 1:
			cout << a << " + " << b << " = " << cong( a, b ) << endl;
			break;
		case 2:
			cout << a << " - " << b << " = " << tru( a, b ) << endl;
			break;
		case 3:
			cout << a << " * " << b << " = " << nhan( a, b ) << endl;
			break;
		case 4:
			if ( b != 0 )
				cout << a << " / " << b << " = " << chia( a, b ) << endl;
			else
				cout << "Khong thuc hien duoc phep tinh chia cho 0\n";
			break;
		}

		cout << "Tiep tuc? ( C / K ): ";
		cin >> tiepTuc;

	}while( tiepTuc == 'c' || tiepTuc == 'C' || tiepTuc == 'y' || tiepTuc == 'Y');
}