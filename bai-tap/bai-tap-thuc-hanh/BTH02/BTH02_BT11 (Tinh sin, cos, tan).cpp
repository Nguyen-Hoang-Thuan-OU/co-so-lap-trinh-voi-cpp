/*
BTH02 - 11.
Viết chương trình yêu cầu nhập vào góc x theo độ, sau đó in ra sin, cos, tan của x.
Hướng dẫn: Đổi x sang radians (x ∗ π/180), dùng hàm toán học trong thư viện.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double goc;
	double x, y, z;
	double PI = 3.141593;

	cout << "Nhap goc x (theo do): ";
	cin >> x;

	goc = x;
	x = ( x * PI / 180 );

	cout << "Sin(" << goc << ") la: " << endl;
	cout << "Cos(" << goc << ") la: " << endl;
	cout << "tan(" << goc << ") la: " << endl;
	return 0;
}