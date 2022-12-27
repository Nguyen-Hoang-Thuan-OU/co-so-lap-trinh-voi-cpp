/*
BTH04 - 05.
Viết chương trình nhận vào 1 số nguyên dương n. Xuất ra màn hình
số đảo ngược của n. Ví dụ n là 352 thì số đảo ngược của nó là 253.
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

	cout << "So " << n << " co so dao nguoc la: " << soDaoNguoc << endl;
	return 0;
}