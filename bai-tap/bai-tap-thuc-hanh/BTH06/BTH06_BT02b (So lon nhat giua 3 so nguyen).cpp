/*
BTH6 - 02b.
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
b. Hàm tìm số lớn nhất giữa 3 số nguyên.
*/

#include <iostream>
using namespace std;

// Hàm tìm số lớn nhất giữa 3 số nguyên.

int soNguyenLonNhat ( int a, int b, int c )
{
	int max;
	if ( a >= b )
		max = a;
	else
		max = b;
	if ( c >= max )
		max = c;
	return max;
}

int main()
{
	int a, b, c;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> a;
	cout << "Nhap so nguyen thu hai: ";
	cin >> b;
	cout << "Nhap so nguyen thu ba: ";
	cin >> c;
	cout << "So lon nhat giua 3 so " << a << ", " << b << " va " << c << " la: " << soNguyenLonNhat ( a, b, c ) << endl;
	return 0;
}