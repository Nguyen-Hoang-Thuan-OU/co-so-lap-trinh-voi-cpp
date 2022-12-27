/*
BTH6 - 09.
Viết hàm tính tổng các chữ số của số nguyên n;
và chương trình để kiểm tra hàm đã viết.
*/

#include<iostream>
using namespace std;

int tinhTongChuSoNguyen(int n)
{
	int ketQua = 0, chuSo;
	while(n > 0)
	{
		chuSo = n % 10;
		ketQua = ketQua + chuSo;
		n = n / 10;
	}
	return ketQua;
}

int main()
{
	int n;

	cout << "Nhap so nguyen: ";
	cin >> n;

	cout << "Tong cac chu so nguyen cua " << n << " la: " << tinhTongChuSoNguyen(n);
	cout << endl;

	return 0;
}