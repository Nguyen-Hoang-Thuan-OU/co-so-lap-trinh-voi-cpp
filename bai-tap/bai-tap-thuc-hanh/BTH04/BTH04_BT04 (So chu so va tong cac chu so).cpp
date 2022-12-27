/*
BTH04 - 04.
Viết chương trình nhận vào 1 số nguyên dương n.
Xuất ra màn hình số chữ số và tổng các chữ số của n.
Ví dụ: n = 3523 thì kết quả là n có 4 chữ số và tổng các chữ số là 13.
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	int tam, chuSo;
	int dem = 0;
	int tong = 0;

	do{
		cout << "Nhap 1 so nguyen duong: ";
		cin >> soNguyen;
		if ( soNguyen <= 1 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen <= 1);

	tam = soNguyen;

	while( tam > 0 )
	{
		dem++;
		chuSo = tam % 10;
		tong = tong + chuSo;
		tam = tam / 10;
	}

	cout << "So " << soNguyen << " co " << dem << " chu so" << endl;
	cout << "Tong cac chu so la: " << tong << endl;
	return 0;
}