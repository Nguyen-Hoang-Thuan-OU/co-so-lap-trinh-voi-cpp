/*
BTH03 - 14.
Viết chương trình nhận vào 3 số nguyên.
Xuất ra màn hình 3 số đó được sắp xếp tăng dần.
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	cout << "Nhap so thu ba: ";
	cin >> c;

	if ( a < b ) // a->b
	{
		if ( b < c ) // a->b->c
			cout << a << b << c << endl;
		else
		{
			if ( a < c ) // a->c->b
				cout << a << c << b << endl;
			else // c->a->b
				cout << c << a << b << endl;
		}
	}
	else // b->a
	{
		if ( a < c ) // b->a->c
			cout << b << a << c << endl;
		else
		{
			if ( b < c ) // b->c->a
				cout << b << c << a << endl;
			else //c->b->a
				cout << c << b << a << endl;
		}
	}
	return 0;
}