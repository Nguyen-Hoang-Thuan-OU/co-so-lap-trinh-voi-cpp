/*
BTH03 - 11.
Viết chương trình nhận vào 1 số nguyên.
Xuất ra màn hình số nguyên đó là số âm? Số dương hay số 0?
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;

	cout << "Nhap 1 so nguyen: ";
	cin >> soNguyen;

	if ( soNguyen > 0 )
		cout << "So nguyen la so duong" << endl;
	else
	{
		if ( soNguyen < 0 )
			cout << "So nguyen la so am" << endl;
		else
			cout << "So nguyen la so 0" << endl;
	}
	return 0;
}