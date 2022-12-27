/*
BTH8 - 03.
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử),
tìm và in ra phần tử lớn nhất của mảng.
*/

#include<iostream>
using namespace std;

int max (int a[], int phanTu)
{
	int max = a[0];
	for ( int i = 0; i < phanTu; i++ )
	{
		if ( max < a[i] )
			max = a[i];
	}
	return max;
}

int min (int a[], int phanTu)
{
	int min = a[0];
	for ( int i = 0; i < phanTu; i++ )
	{
		if ( min > a[i] )
			min = a[i];
	}
	return min;
}

void nhap (int a[], int phanTu)
{
	for ( int i = 0; i < phanTu; i++ )
	{
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

int main()
{
	int a[100];
	int phanTu;

	cout << "Nhap so phan tu: ";
	cin >> phanTu;

	nhap (a, phanTu);

	cout << "Phan tu lon nhat: " << max(a, phanTu) << endl;
	cout << "Phan tu nho nhat: " << min(a, phanTu) << endl;

	return 0;
}