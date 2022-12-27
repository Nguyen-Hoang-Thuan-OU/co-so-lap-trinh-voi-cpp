/*
BTH04 - 01.
Viết chương trình nhận vào 1 số nguyên n ( n > 0 ).
Tính và xuất ra màn hình kết quả tổng các số từ 1 đến n.
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	int i = 1;
	int tong = 0;

	cout << "Nhap vao 1 so nguyen (n>0): ";
	cin >> soNguyen;

	while(i <= soNguyen )
	{
		tong = tong + i;
		i++;
	}

	cout << "Tong cac so tu 1 den " << soNguyen << " la: " << tong << endl;
	return 0;
}