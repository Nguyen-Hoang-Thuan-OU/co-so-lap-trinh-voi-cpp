/*
BTH02 - 12.
Viết chương trình nhập vào một chuỗi ký tự và in ra chiều dài của chuỗi.
Hướng dẫn: Sử dụng biến s có kiểu string, dùng getline(cin, s)
để nhập chuỗi (kể cả khoảng trắng) và s.length() để tính chiều dài chuỗi.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string chuoi;

	cout << "Nhap vao mot chuoi ky tu (ke ca khoang trang): ";
	getline(cin, chuoi);

	cout << "Do dai chuoi la: " << chuoi.length() << endl;
	return 0;
}