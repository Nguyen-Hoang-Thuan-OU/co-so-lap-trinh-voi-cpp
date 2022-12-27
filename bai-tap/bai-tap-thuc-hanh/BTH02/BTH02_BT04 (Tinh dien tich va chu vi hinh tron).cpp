/*
BTH02 - 04.
Viết chương trình yêu cầu nhập vào bán kính r,
tính và in ra diện tích (πr2) và chu vi của hình tròn (2πr).
Định nghĩa hằng số PI để lưu giá trị π = 3.141593.
*/

#include <iostream>
using namespace std;

int main()
{
	double PI = 3.141593;
	double banKinh;
	cout << "Nhap vao ban kinh hinh tron: ";
	cin >> banKinh;
	cout << "Dien tich hinh tron la: " << PI * ( banKinh * banKinh ) << endl;
	cout << "Chu vi hinh tron la: " << 2 * PI * banKinh << endl;
	return 0;
}