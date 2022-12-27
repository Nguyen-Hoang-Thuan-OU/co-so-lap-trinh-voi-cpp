/*
BTH04 - 03.
Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất ra màn hình
kết quả tổng các số lẻ và tổng các số chẵn trong phạm vi từ 1 đến n.
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	int i = 1;
	int tongChan = 0;
	int tongLe = 0;

	do {
		cout << "Nhap 1 so nguyen duong (n>1): ";
		cin >> soNguyen;
		if ( soNguyen <= 1 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen <=1 );

	while ( i <= soNguyen )
	{
		if ( i % 2 == 0 )
			tongChan = tongChan + i;
		else
			tongLe = tongLe + i;
			i = i + 1;
	}

	cout << "Tong cac so le tu 1 den " << soNguyen << " la: " << tongLe << endl;
	cout << "Tong cac so chan tu 1 den " << soNguyen << " la: " << tongChan << endl;
	return 0;
}