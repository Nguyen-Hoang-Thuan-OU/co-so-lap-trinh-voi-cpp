/*
BTH02 - 03.
Viết chương trình yêu cầu nhập tên, số ngày làm việc và tiền công 1 ngày,
sau đó in ra tên và tiền lương nhận được
(tiền lương = số ngày làm việc × tiền công 1 ngày).
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string ten;
	int soNgayLamViec;
	double tienCongMotNgay = 100000;
	cout << "Nhap ten cua ban: ";
	cin >> ten;
	cout << "Nhap so ngay lam viec cua ban: ";
	cin >> soNgayLamViec;
	cout << "Tien luong ma " << ten << " nhan duoc la (100000vnd/ngay): " << setprecision(0) << fixed << soNgayLamViec * tienCongMotNgay << endl;
	return 0;
}