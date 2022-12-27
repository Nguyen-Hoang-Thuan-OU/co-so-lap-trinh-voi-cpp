/*
BTH02 - 05.
Viết chương trình yêu cầu nhập vào ba cạnh a, b, c của tam giác,
tính và in ra diện tích tam giác.
(Diện tích tam giác = sqrt(p(p − a)(p − b)(p − c))
với a, b, c là chiều dài ba cạnh, p = (a + b + c)/2).
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c;
	double p;
	double s;
	cout << "Nhap chieu dai canh a: ";
	cin >> a;
	cout << "Nhap chieu dai canh b: ";
	cin >> b;
	cout << "Nhap chieu dai canh c: ";
	cin >> c;
	p = ( a + b + c ) / 2;
	s = sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) );
	cout << "Dien tich tam giac la: " << s << endl;
	return 0;
}