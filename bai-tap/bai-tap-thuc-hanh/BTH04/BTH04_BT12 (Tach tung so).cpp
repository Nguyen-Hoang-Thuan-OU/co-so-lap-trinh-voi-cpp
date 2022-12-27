/*
BTH04 - 12.
Viết chương trình nhận vào 1 số nguyên n > 0. Tách từng chữ số của n và
thể hiện chúng dưới dạng cách nhau một khoảng cách.
Ví dụ n = 3456 thì kết quả từng chữ số là 3 4 5 6
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	int tam;
	int chuSo;
	int soDaoNguoc = 0;

	do{
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if ( n <= 0 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( n <= 0 );

	tam = n;

	while ( tam > 0 )
	{
		chuSo = tam % 10;
		soDaoNguoc = soDaoNguoc * 10 + chuSo;
		tam = tam / 10;
	}

	while ( soDaoNguoc > 0 )
	{
		chuSo = soDaoNguoc % 10;
		cout << chuSo << " ";
		soDaoNguoc = soDaoNguoc / 10;
	}

	cout << endl;
	return 0;
}