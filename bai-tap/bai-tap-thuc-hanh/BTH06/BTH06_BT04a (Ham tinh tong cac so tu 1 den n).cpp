/*
BTH6 - 04a.
Viết các hàm sau đây và viết chương trình kiểm tra các hàm đã viết:
a. Hàm tính tổng các số từ 1 đến n (n là số nguyên dương).
*/

#include <iostream>
using namespace std;

int tinhTong ( int n )
{
	int tong = 0;
	for ( int i = 1; i <= n; i++ )
		tong = tong + i;
	return tong;
}

int main()
{
	int soNguyen;
	do{
		cout << "Nhap so nguyen duong: ";
		cin >> soNguyen;
		if ( soNguyen <= 0 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen <= 0 );
	cout << "Tong cac so tu 1 den " << soNguyen << " la: " << tinhTong ( soNguyen ) << endl;
	return 0;
}