/*
BTH8 - 03.
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử),
tìm và in ra phần tử lớn nhất của mảng.
*/

#include<iostream>
using namespace std;

int main()
{
	int a[100], b[100];
	int phanTu;
	double max, min;

	cout << "Nhap so phan tu: ";
	cin >> phanTu;

	for ( int i = 0; i < phanTu; i++ )
	{
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}

	max = a[0];
	min = a[0];

	for ( int i = 0; i < phanTu; i++ )
	{
		if ( max < a[i] )
			max = a[i];
		if ( min > a[i] )
			min = a[i];
	}

	cout << "So lon nhat: " << max << endl;
	cout << "So nho nhat: " << min << endl;

	return 0;
}