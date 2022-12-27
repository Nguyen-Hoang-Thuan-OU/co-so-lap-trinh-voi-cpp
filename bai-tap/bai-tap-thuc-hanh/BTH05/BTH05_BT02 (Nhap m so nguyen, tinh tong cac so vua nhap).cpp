// Nhap gia tri cho m so nguyen, tinh tong cac so vua nhap

#include <iostream>
using namespace std;

int main()
{
	int soNguyen, soThu;
	int tong = 0;
	cout << "Ban can nhap bao nhieu so: ";
	cin >> soNguyen;
	if ( soNguyen > 0 )
	{
		for ( int i = 1; i <= soNguyen; i++ )
		{
			cout << "Nhap so thu " << i << ": ";
			cin >> soThu;
			tong = tong + soThu;
		}
		cout << "Tong " << soNguyen << " so vua nhap la: " << tong << endl;
	}
	else
		cout << "Nhap sai" << endl;
	return 0;
}