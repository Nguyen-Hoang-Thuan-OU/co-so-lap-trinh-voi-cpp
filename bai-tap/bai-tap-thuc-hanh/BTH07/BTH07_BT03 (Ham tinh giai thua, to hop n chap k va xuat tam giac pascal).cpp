/*
BTH7 - 03.
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tính n! (n là số nguyên không âm).
b. Hàm tính tổ hợp n chập k theo công thức:
c. Hàm in tam giác Pascal có chiều cao h. Ví dụ với h = 5:
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Hàm tính n!

int tinhGiaiThua ( int n )
{
	int giaiThua = 1;
	for ( int i = 1; i <= n; i++ )
		giaiThua = giaiThua * i;
	return giaiThua;
}

// Hàm tính tổ hợp n chập k

int nChapK (int n, int k )
{
	int toHop = 0;
	toHop = tinhGiaiThua ( n ) / ( tinhGiaiThua ( k ) * tinhGiaiThua ( n - k ) ) ;
	return toHop;
}

// Hàm in tam giác Pascal có chiều cao h

void tamGiacPascal ( int h )
{
	for ( int i = 0; i < h; i++ )
	{
		cout << setw(3) << i << "  | ";
		for  ( int j = 0; j <= i; j++ )
			cout << setw(3) << nChapK ( i - 1 , j - 1 ) << "\t";
		cout << endl;
	}
}

int main()
{
	int m, h;

	cout << "Nhap so can tinh giai thua: ";
	cin >> m;
	cout << m << "!: " << tinhGiaiThua(m) << endl;

	int n, k;
	cout << "Nhap so can tinh to hop n chap k" << endl;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;
	cout << n << " chap " << k << ": " << nChapK(n, k) << endl;

	cout << "Nhap chieu cao cho tam giac pascal: ";
	cin >> h;
	tamGiacPascal ( h );

	return 0;
}