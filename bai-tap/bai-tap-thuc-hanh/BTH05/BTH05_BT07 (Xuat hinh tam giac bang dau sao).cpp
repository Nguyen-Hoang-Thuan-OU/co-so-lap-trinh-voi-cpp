// Nhap chieu dai, xuat ra tam giac bang cac dau *

#include <iostream>
using namespace std;

int main()
{
	int chieuCao;
	cout << "Nhap chieu cao cua tam giac: ";
	cin >> chieuCao;
	for ( int i = 1; i <= chieuCao; i++ )
	{
		for ( int j = 1; j <= i; j++ )
			cout << "*";
		cout << endl;
	}
	return 0;
}