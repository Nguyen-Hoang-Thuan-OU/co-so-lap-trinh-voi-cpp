/*
BTH06 - 01.
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tính diện tích hình chữ nhật.
b. Hàm tính chu vi hình chữ nhật
*/

#include <iostream>
using namespace std;

// Hàm tính diện tích hình chữ nhật.

double dienTichHCN ( double chieuDai, double chieuRong )
	{
		double dienTich = chieuDai * chieuRong;
		return dienTich;
	}

// Hàm tính chu vi hình chữ nhật

double chuViHCN ( double chieuDai, double chieuRong )
	{
		double chuVi = ( chieuDai + chieuRong ) * 2;
		return chuVi;
	}

int main()
{
	int chieuDai, chieuRong;
	cout << "Nhap chieu dai hinh chu nhat: ";
	cin >> chieuDai;
	cout << "Nhap chieu rong hinh chu nhat: ";
	cin >> chieuRong;

	cout << "Dien tich hinh chu nhat la: " << dienTichHCN (chieuDai, chieuRong ) << endl;
	cout << "Chu vi hinh chu nhat la: " << chuViHCN (chieuDai, chieuRong ) << endl;
	return 0;
}