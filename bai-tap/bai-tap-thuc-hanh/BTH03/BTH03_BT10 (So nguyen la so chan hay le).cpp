/*
BTH03 - 10.
Viết chương trình nhận vào 1 số nguyên.
Xuất ra màn hình số nguyên đó là số chẵn hay số lẻ.
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;

	cout << "Nhap 1 so nguyen: ";
	cin >> soNguyen;

	if ( soNguyen % 2 == 0 )
		cout << "So nguyen " << soNguyen << " la so chan" << endl;
	else
		cout << "So nguyen " << soNguyen << " la so le" << endl;
	return 0;
}