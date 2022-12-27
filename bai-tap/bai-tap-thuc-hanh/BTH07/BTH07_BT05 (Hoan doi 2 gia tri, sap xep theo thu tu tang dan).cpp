/*
BTH7 - 05.
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm hoán đổi giá trị 2 số nguyên.
b. Hàm sắp xếp 2 số nguyên tăng dần (sử dụng lại hàm hoán đổi ở câu a).
*/

#include <iostream>
using namespace std;

// Hàm hoán đổi giá trị 2 số nguyên.

void hoanDoi ( int &a, int &b )
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}

// Hàm sắp xếp 2 số nguyên tăng dần

void sapXep ( int &c, int &d )
{
	if ( c > d );
		hoanDoi ( c, d );
}

int main()
{
	int a, b;

	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;

	cout << "Truoc khi hoan doi: " << a << " " << b << endl;
	sapXep ( a, b );
	cout << "Sau khi hoan doi: " << a << " " << b << endl;

	return 0;
}