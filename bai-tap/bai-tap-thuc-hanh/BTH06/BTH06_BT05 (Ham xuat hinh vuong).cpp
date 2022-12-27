/*
BTH6 - 05.
Viết hàm nhận vào số đo cạnh, xuất ra hình vuông gồm các dấu *
và chương trình để kiểm tra hàm.
*/

#include <iostream>
using namespace std;

void xuatHinhVuong ( int a )
{
	for ( int i = 1; i <= a; i++ )
	{
		for ( int j = 1; j <= a; j++ )
			cout << "*";
		cout << endl;
	}
}

int main()
{
	int canh;
	cout << "Nhap canh cua hinh vuong: ";
	cin >> canh;
	do{
		if ( canh <= 0 )
		cout << "Nhap sai, vui long nhap lai" << endl;
	}while( canh <= 0 );
	xuatHinhVuong ( canh );
	cout << endl;
	return 0;
}