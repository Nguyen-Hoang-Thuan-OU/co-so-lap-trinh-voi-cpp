/*
BTH6 - 10.
Viết hàm kiểm tra một số nguyên n có phải là số hoàn thiện hay không?
Viết chương trình kiểm tra hàm vừa viết. Biết rằng số hoàn thiện
là số có tổng các ước số (kể cả 1) bằng chính nó.
Ví dụ: 6 là số hoàn thiện vì 6 = 1 + 2 + 3 (1, 2, 3 là các ước của 6).
*/

#include <iostream>
using namespace std;

bool ktSoHoanThien ( int n )
{
	// Cách 1:
	int tong = 0;

	for ( int i = 1; i <= ( n/2 ); i++ )
	{
		if ( n % i == 0 )
			tong = tong + i;
	}

	if ( tong == n )
			return true;
		else
			return false;

	// Cách 2:
	/*bool ketQua;
	int tong = 0;

	for (int i = 1; i < n; i++)
		if (n % i == 0)
			tong = tong + i;
	if(n == tong)
		ketQua = true;
	else
		ketQua = false;*/
}

void main()
{
	int soNguyen;

	cout << "Nhap so nguyen: ";
	cin >> soNguyen;

	if ( ktSoHoanThien(soNguyen) )
		cout << soNguyen << " la so hoan thien" << endl;
	else
		cout << soNguyen << " khong la so hoan thien" << endl;
}