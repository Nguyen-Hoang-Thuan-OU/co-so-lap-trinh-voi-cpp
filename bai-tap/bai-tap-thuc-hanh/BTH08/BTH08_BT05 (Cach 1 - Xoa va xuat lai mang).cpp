/*
BTH8 - 05.
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử) và vị trí
của phần tử cần xóa, xóa phần tử tại vị trí đã nhập và in ra mảng sau khi xóa.
*/

#include<iostream>
using namespace std;

void nhapMang ( int a[], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        cout << "Phan tu thu a[" << i << "]= ";
        cin >> a[i];
    }
}

void xuatMang ( int a[], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        cout << a[i] << "    ";
    }
}

int xoa ( int a[], int &n, int viTriCanXoa )
{
	for ( int i = viTriCanXoa; i < n; i++ )
	{
		a[i] = a[i + 1];
	}
	n--;
	return 0;
}

int main()
{
	int a[100];
	int n;
	int viTriCanXoa;

	cout << "Nhap so luong phan tu: ";
	cin >> n;
	nhapMang( a, n );

	cout << "Mang sau khi nhap la: ";
	xuatMang( a, n );

	cout << "\nNhap vi tri can xoa: ";
	cin >> viTriCanXoa;
	xoa( a, n, viTriCanXoa );

	cout << "Mang sau khi xoa: ";
	xuatMang( a, n );
	cout << endl;
	return 0;
}