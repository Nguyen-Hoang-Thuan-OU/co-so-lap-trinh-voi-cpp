/*
BTH6 - 06.
Viết hàm tính số đảo ngược của một số nguyên dương n.
Viết chương trình kiểm tra hàm đã viết
*/

#include <iostream>
using namespace std;

int tinhSoDaoNguoc ( int so )
{
	int chuSo;
	int soDaoNguoc = 0;
	while ( so > 0 )
	{
		chuSo = so % 10;
		soDaoNguoc = soDaoNguoc * 10 + chuSo;
		so = so / 10;
	}
	return soDaoNguoc;
}

int main()
{
	int soNguyen;
	do{
		cout << "Nhap vao 1 so nguyen duong: ";
		cin >> soNguyen;
		if ( soNguyen < 0 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen < 0 );
	cout << "So dao nguoc cua " << soNguyen << " la: " << tinhSoDaoNguoc ( soNguyen ) << endl;
	return 0;
}