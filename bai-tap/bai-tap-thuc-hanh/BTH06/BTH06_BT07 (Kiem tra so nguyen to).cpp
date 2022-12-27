/*
BTH06 - 07.
Viết hàm kiểm tra 1 số nguyên n có phải là số nguyên tố hay không?
Hàm sẽ trả về true nếu n là số nguyên tố, trả về false nếu n không là số nguyên tố.
Viết chương trình kiểm tra hàm đã viết.
*/

#include<iostream>
#include<cmath>
using namespace std;

// Ham kiem tra so nguyen to

bool kiemTraSNT ( int n )
{
	bool ketQua = true;
	int i = 2;

	if ( n < 2 )
	{
		ketQua = false;
	}
	else
	{
		while (i <= sqrt(double(n)) && ketQua)
		{
			if (n % i != 0)
				i++;
			else
				ketQua = false;
		}
	}
	return ketQua;
}

int main()
{
	int n;
	bool ketQua;

	cout << "Nhap so nguyen ( n > 0 ): ";
	cin >> n;

	ketQua = kiemTraSNT (n);
	if ( ketQua == true )
		cout << n << " la so nguyen to!" << endl;
	else
		cout << n << " khong la so nguyen to!" << endl;
	return 0;
}