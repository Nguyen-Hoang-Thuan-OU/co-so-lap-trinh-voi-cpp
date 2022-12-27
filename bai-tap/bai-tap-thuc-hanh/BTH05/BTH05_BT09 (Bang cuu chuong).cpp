#include<iostream>
using namespace std;

int main()
{
	int n;

	do{
		cout << "Nhap so can xuat bang cuu chuong: ";
		cin >> n;

		if (n < 2 || n > 9)
			cout << "Nhap sai, nhap lai!";
	}while(n < 2 || n > 9);

	for (int i = 1; i <= 10; i++)
	{
		cout << n << " x " << i << " = " << n * i << endl;
	}

	return 0;
}