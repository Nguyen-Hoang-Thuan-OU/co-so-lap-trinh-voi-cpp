// Nhap chieu cao, xuat ra hinh tam giac

#include <iostream>
using namespace std;

int main()
{
	int chieuCao;
	do{
		cout << "Nhap chieu cao cua tam giac: ";
		cin >> chieuCao;
		if ( chieuCao < 0 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( chieuCao < 0 );

	for ( int i = 1; i <= chieuCao; i++ )
	{
		for ( int j = 1; j <= i; j++ )
			if ( j == 1 || i == chieuCao || i == j )
				cout << "*";
			else
				cout << " ";
			cout << endl;
	}
	return 0;
}