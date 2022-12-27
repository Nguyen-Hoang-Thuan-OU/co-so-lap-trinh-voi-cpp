/*
BTH02 - 06.
Viết chương trình yêu cầu nhập vào một số nguyên dương gồm 3 chữ số,
sau đó in ra tổng của 3 chữ số và số đảo ngược. Ví dụ:
	Nhap 1 so co 3 chu so: 123
	Tong 3 chu so la: 6
	So dao nguoc la: 321
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyenDuong;
	int tram, chuc, donVi;
	int soDaoNguoc = 0;

	cout << "Nhap so nguyen duong co 3 chu so: ";
	cin >> soNguyenDuong;

	donVi = soNguyenDuong % 10;
	chuc = soNguyenDuong / 10 % 10;
	tram = soNguyenDuong / 10 / 10;
	soDaoNguoc = tram + ( chuc * 10 ) + ( donVi * 100 );

	cout << "Tong 3 chu so la: " << tram + chuc + donVi << endl;
	cout << "So dao nguoc cua  " << soNguyenDuong << " la: " << soDaoNguoc << endl;
	return 0;
}