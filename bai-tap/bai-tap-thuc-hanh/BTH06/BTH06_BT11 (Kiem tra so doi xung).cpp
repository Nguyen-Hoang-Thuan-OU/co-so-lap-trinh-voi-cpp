/*
BTH6 - 11.
Viết hàm kiểm tra một số nguyên n có phải là số đối xứng (Palindrome) hay không?
Viết chương trình kiểm tra hàm vừa viết.
Biết rằng số đối xứng là số có số đảo ngược của nó bằng chính nó.
*/

#include <iostream>
using namespace std;

int tinhSoDaoNguoc ( int so )
{
	int soDaoNguoc = 0;
	int chuSo;

	while ( so > 0 )
	{
		chuSo = so % 10;
		soDaoNguoc = soDaoNguoc * 10 + chuSo;
		so = so / 10;
	}
	return soDaoNguoc;
}

bool ktDoiXung ( int n )
{
	// Cách 1:
	int soDao = tinhSoDaoNguoc ( n );

	if ( soDao == n )
		return true;
	else
		return false;

	// Cách 2:
	/*bool ketQua;
	int chuSo, tam, soDao = 0;

	tam = n;

	while(tam > 0)
	{
		chuSo = tam % 10;
		soDao *= 10 + chuSo;
		tam /= 10;
	}

	if(soDao == n)
		return true;
	else
		return false;*/
}

int main()
{
	int soNguyen;

	cout << "Nhap so nguyen duong ( n > 0 ): ";
	cin >> soNguyen;

	if ( ktDoiXung ( soNguyen ) )
		cout << soNguyen << " la so doi xung" << endl;
	else
		cout << soNguyen << " khong la so doi xung" << endl;

	return 0;
}