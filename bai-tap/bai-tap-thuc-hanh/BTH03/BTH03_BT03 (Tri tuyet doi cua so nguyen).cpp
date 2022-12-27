/*
BTH03 - 03.
Viết chương trình nhận vào số nguyên n.
Xuất ra màn hình kết quả trị tuyệt đối của số nguyên đó.
*/

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	cout << "Nhap vao mot so nguyen: ";
	cin >> soNguyen;

	//cout << abs(soNguyen) << endl;

	if ( soNguyen > 0 )
		cout << "Gia tri tuyet doi cua " << soNguyen<< " la: " << soNguyen << endl;
	else
		cout << "Gia tri tuyet doi cua " << soNguyen << " la: " << - soNguyen << endl;
	return 0;
}