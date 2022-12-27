// BTH03 - 02. Viết chương trình tìm số lớn nhất của 2 số nguyên a và b.

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int max;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> a;
	cout << "Nhap so nguyen thu hai: ";
	cin >> b;
	if ( a > b )
		max = a;
	else
		max = b;
	cout << "So lon nhat la giua 2 so " << a << " va " << b << " la: " << max << endl;
	return 0;
}