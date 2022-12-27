/*
BTH6 - 04b.
Viết các hàm sau đây và viết chương trình kiểm tra các hàm đã viết:
b. Hàm tính n! (n là số nguyên dương).
*/

#include <iostream>
using namespace std;

int tinhGiaiThua ( int n )
{
	int giaiThua = 1;
	for ( int i = 1; i <= n; i++ )
		giaiThua = giaiThua * i;
	return giaiThua;
}

int main()
{
	int soNguyen;
	do{
		cout << "Nhap so nguyen: ";
		cin >> soNguyen;
		if ( soNguyen < 0 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen < 0 );
	cout << soNguyen << "! = " << tinhGiaiThua ( soNguyen ) << endl;
	return 0;
}