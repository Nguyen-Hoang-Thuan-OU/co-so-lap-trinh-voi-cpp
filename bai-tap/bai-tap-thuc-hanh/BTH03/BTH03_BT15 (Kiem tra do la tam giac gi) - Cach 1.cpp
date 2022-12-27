/*
BTH03 - 15 (cách 1).
Viết chương trình nhận vào số đo 3 cạnh của 1 tam giác.
Kiểm tra xem 3 cạnh đó có hợp lệ hay không?
Nếu hợp lệ thì tam giác đó là loại tam giác gì (đều, vuông, cân, vuông cân hay thường)?
*/

#include <iostream>
using namespace std;

int main()
{
	double a, b, c;

	cout << "Nhap do dai canh thu nhat: ";
	cin >> a;
	cout << "Nhap do dai canh thu hai: ";
	cin >> b;
	cout << "Nhap do dai canh thu ba: ";
	cin >> c;

	if ( ( a + b ) > c && ( a + c ) > b && ( b + c ) > a && a > 0 && b > 0 && c > 0 )
	{
		if ( a == b && b == c && c == a )
			cout << "Day la tam giac deu.\n";
		else
			if ( a == b || b == c || c == a )
				cout << "Day la tam giac can.\n";
			else
				if ( a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b )
					cout << "Day la tam giac vuong.\n";
				else
					if ( a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b && a == b || b == c || c == a )
						cout << "Day la tam giac vuong can.\n";
					else
						cout << "Day la tam giac thuong.\n";
	}
	else
		cout << "Do dai cua 3 canh khong tao thanh 1 tam giac!\n";
	return 0;
}