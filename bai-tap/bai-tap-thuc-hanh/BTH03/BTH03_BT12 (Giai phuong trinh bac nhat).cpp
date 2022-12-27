/*
BTH03 - 12.
Viết chương trình giải và biện luận phương trình bậc nhất: ax + b = 0.
*/

#include <iostream>
using namespace std;

int main()
{
	double a, b;
	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	if ( a == 0 )
	{
		if ( b ==0 )
			cout << "Phuong trinh co vo so nghiem" << endl;
		else
			cout << "Phuong trinh vo nghiem" << endl;
	}
	else
		cout << "Phuong trinh co nghiem = " << ( - b / a ) << endl;
	return 0;
}