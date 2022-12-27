#include<iostream>
using namespace std;

int main()
{
	int n, tong = 0;

	cout << "Nhap so nguyen n: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			tong = tong + i;
	}

	cout << "Tong cac so le tu 1 den " << n << " la: " << tong << endl;

	return 0;
}