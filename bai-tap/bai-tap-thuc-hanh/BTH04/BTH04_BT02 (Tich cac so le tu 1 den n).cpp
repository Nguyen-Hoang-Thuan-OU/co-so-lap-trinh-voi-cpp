/*
BTH04 - 02.
Viết chương trình nhận vào 1 số nguyên dương n > 1.
Tính và xuất tích các số lẻ trong phạm vi từ 1 đến n.
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	int i = 1;
	int tichLe = 1;

	do {
		cout << "Nhap 1 so nguyen duong (n>1): ";
		cin >> soNguyen;
		if ( soNguyen <= 1 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen <= 1 );
	
	while( i <= soNguyen )
	{
		tichLe = tichLe * i;
		i = i + 2;
	}

	cout << "Tich cac so le tu 1 den " << soNguyen << " la: " << tichLe << endl;
	return 0;
}