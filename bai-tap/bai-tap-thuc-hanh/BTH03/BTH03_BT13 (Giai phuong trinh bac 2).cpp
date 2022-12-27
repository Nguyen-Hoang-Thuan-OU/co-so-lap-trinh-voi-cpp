/*
BTH03 - 13.
Viết chương trình giải và biện luận phương trình bậc hai: ax2 + bx + c = 0.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;
	double delta;

	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	cout << "Nhap so thu ba: ";
	cin >> c;

	delta = ( b * b ) - 4 * a * c;

	if ( delta > 0 )
		cout << "Phuong trinh co 2 nghiem phan biet: "
			 << " x1= " << ( - b + sqrt(delta) ) / 2 * a
			 << " va "
			 << " x2= " << ( - b - sqrt(delta) ) / 2 * a << endl;
	else
	{
		if ( delta = 0 )
			cout << "Phuong trinh co nghiem kep" << " x1, x2 = " << ( - b ) / ( 2 * a ) << endl;
		else
			cout << "Phuong trinh vo nghiem" << endl;
	}
	return 0;
}