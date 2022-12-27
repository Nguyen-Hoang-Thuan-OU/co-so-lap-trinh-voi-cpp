/*
BTH6 - 02a.
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tìm số lớn nhất giữa 2 số nguyên.
*/

#include <iostream>
using namespace std;

// Hàm tìm số lớn nhất giữa 2 số nguyên.

int soNguyenLonNhat ( int a, int b )
{
	int max;
	if ( a >= b )
		max = a;
	else
		max = b;
	return max;
}

int main()
{
	int a, b;
	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	cout << "So lon nhat giua 2 so " << a << " va " << b << " la: " << soNguyenLonNhat ( a, b ) << endl;
	return 0;
}