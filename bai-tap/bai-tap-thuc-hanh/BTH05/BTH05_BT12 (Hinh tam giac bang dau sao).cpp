#include<iostream>
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

	cout << "\n-----1-----" << endl;
	for ( int i = 1; i <= chieuCao; i++ )
	{
		for ( int j = 1; j <= i; j++ )
			if ( j == 1 || i == chieuCao || i == j )
				cout << "*";
			else
				cout << " ";
			cout << endl;
	}

	cout << "\n-----2-----" << endl;
	for ( int i = 1; i <= chieuCao; i++ )
	{
		for ( int j = 1; j <= chieuCao; j++ )
			if ( j >= chieuCao - i + 1 )
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}

	cout << "\n-----3-----" << endl;
	for ( int i = 1; i <= chieuCao; i++ )
	{
		for ( int j = 1; j <= chieuCao; j++ )
			if ( j >= chieuCao - i + 2 )
				cout << " ";
			else
				cout << "*";
		cout << endl;
	}

	cout << "\n-----4-----" << endl;
	for ( int i = 1; i <= chieuCao; i++ )
	{
		for ( int j = 1; j <= chieuCao; j++ )
			if ( j >= i )
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}

	cout << "\n-----4-----" << endl;

	return 0;
}