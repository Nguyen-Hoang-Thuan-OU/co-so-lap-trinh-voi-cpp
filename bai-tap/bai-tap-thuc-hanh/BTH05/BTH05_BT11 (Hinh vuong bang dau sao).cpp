#include<iostream>
using namespace std;

int main()
{
	int n;

	do{
		cout << "Nhap chieu dai canh cua hinh vuong: ";
		cin >> n;

		if (n <= 0)
			cout << "Nhap sai, nhap lai!";
	}while(n <= 0);

	cout << "\n-----HINH VUONG THU NHAT-----" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << "*";
		cout << endl;
	}

	cout << "\n-----HINH VUONG THU HAI-----" << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (i == 1 || i == n || j == 1 || j == n)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}

	return 0;
}