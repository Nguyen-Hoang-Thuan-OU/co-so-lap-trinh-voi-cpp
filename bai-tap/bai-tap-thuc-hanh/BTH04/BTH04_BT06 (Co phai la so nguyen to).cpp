/*
BTH04 - 06.
Viết chương trình nhận vào 1 số nguyên n.
Xuất ra màn hình thông báo n có phải là số nguyên tố hay không?
Biết rằng số nguyên tố là số từ 2 trở lên,
chỉ chia hết cho 1 và cho chính bản thân nó.
*/

#include<iostream>
#include<iostream>
using namespace std;

int main()
{
	int soNguyen;

	do{
		cout << "Nhap 1 so nguyen: ";
		cin >> soNguyen;
		if ( soNguyen <= 0 )
			cout << "Nhap sai, vui long nhap lai" << endl;
	}while( soNguyen <= 0 );

	int demUoc = 0;

	for (int i = 0; i <= soNguyen, i++)
	{
		if (soNguyen % i == 0)
			demUoc = demUoc + 1;
	}

	if (demUoc == 2)
		cout << soNguyen << " la so nguyen to!" << endl;
	else
		cout << soNguyen << " khong la so nguyen to!" << endl;
}