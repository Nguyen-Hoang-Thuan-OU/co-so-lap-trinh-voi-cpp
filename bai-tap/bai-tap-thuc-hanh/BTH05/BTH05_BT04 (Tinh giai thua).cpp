// Nhap 1 so nguyen duong, tinh n giai thua

#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	int giaiThua = 1;
	cout << "Nhap so nguyen duong (n>0): ";
	cin >> soNguyen;
	if ( soNguyen >= 0 )
	{
		for ( int i = 1; i <= soNguyen; i++ )
			giaiThua = giaiThua * i;
		cout << soNguyen << "! bang: " << giaiThua << endl;
	}
	else
		cout << "Nhap sai" << endl;
	return 0;
}