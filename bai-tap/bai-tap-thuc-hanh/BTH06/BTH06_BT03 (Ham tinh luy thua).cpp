/*
BTH6 - 03.
Viết hàm tính x^y (x là số thực, y là số nguyên) và chương trình kiểm tra hàm.
*/

#include <iostream>
using namespace std;

double tinhLuyThua ( double x, int y )
{
	double luyThua = 1.0;
	if ( y >= 0 )
	{
		for ( int i = 1; i <= y; i++ )
			luyThua = luyThua * x;
	}
	else
	{
		for ( int i = 1; i <= -y; i++ )
			luyThua = luyThua / x;
	}
	return luyThua;
}

int main()
{
	double x;
	int y;
	cout << "Nhap co so: ";
	cin >> x;
	cout << "Nhap so mu: ";
	cin >> y;
	cout <<"Gia tri cua " << x << " ^ " << y << " = " << tinhLuyThua ( x, y ) << endl;
	return 0;
}