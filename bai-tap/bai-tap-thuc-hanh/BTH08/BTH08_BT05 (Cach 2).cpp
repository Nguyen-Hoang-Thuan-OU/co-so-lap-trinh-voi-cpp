/*
BTH8 - 05.
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử) và vị trí
của phần tử cần xóa, xóa phần tử tại vị trí đã nhập và in ra mảng sau khi xóa.
*/

#include <iostream>
using namespace std;

int main()
{
	const int MAXSIZE = 100;
	int a[MAXSIZE];
	int n = 0;
	int viTriCanXoa;

	cout << "Nhap so phan tu cua mang: ";
	cin >> n;

	cout << "Nhap vao " << n << " phan tu" << endl;
	for ( int i = 0; i < n; i++ )
	{
		cout << "Phan tu thu [" << i + 1 << "]= ";
		cin >> a[i];
	}
	cout << endl;

	cout << "Nhap vi tri can xoa: ";
	cin >> viTriCanXoa;
	if ( viTriCanXoa < 1 || viTriCanXoa > n )
	{
		cout << "Vi tri can xoa khong hop le!" << endl;
		return 1;
	}

	for ( int i = viTriCanXoa - 1; i <= n - 2; i++ )
	{
		a[i] = a[i + 1];
	}

	n = n - 1;

	cout << "Mang con lai " << n << " phan tu: ";
	for ( int i = 0; i < n; i++ )
	{
		cout << a[i] << "    ";
	}
	cout << endl;

	return 0;
}