// Nhap 1 so nguyen duong, xuat tong cac so tu 1 den n

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	int tong = 0;
	cout << "Nhap so nguyen duong (n>0): ";
	cin >> soNguyen;
	if ( soNguyen > 0 )
	{
		for ( int i = 1; i <= soNguyen; i++ )
			tong = tong + i;
		cout << "Tong cac so tu 1 den " << soNguyen << " la: " << tong << endl;
	}
	else
		cout << "Nhap sai" << endl;
	return 0;
}