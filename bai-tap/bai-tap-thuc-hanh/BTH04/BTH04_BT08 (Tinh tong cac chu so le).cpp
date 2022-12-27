/*
BTH04 - 08.
Viết chương trình nhận vào 1 số nguyên n > 0.
Tính và xuất tổng các chữ số lẻ của n.
VD: 333 -> 9 (3+3+3), 123 -> 4  (1+3).
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	int tongLe = 0;
	int tam, chuSo;
	do{
		cout << "Nhap 1 so nguyen duong (n>0): ";
		cin >> soNguyen;
		if ( soNguyen <= 0 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen <= 0 );

	tam = soNguyen;

	while( tam > 0 )
	{
		chuSo = tam % 10;
		if ( chuSo % 2 != 0 )
			tongLe = tongLe + chuSo;
		tam = tam / 10;
	}
	cout << "Tong cac chu so le cua " << soNguyen << " la: " << tongLe << endl;
	return 0;
}