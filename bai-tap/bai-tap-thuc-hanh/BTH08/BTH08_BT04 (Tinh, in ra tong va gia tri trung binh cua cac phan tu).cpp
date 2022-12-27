/*
BTH8 - 04.
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử),
tính và in ra tổng và giá trị trung bình của các phần tử trong mảng.
*/

#include<iostream>
using namespace std;

void nhap (int a[], int n )
{
	for ( int i = 0; i < n; i++ )
	{
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

double trungBinh (int a[], int n)
{
	int tong = 0;
	for ( int i = 0; i < n; i ++ )
	{
		tong  = tong + a[i];
	}
	return tong;
}

int main()
{
	int a[100];
	int n;

	cout << "Nhap so luong phan tu cua mang: ";
	cin >> n;
	nhap(a, n);

	cout << "Tong la: " << trungBinh(a, n) << endl;
	cout << "Gia tri tung binh la: " << ( (double)trungBinh(a, n) ) / n << endl;

	return 0;
}