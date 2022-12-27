#include<iostream>
using namespace std;

int main()
{
	int n1, n2;
	int demChan = 0, demLe = 0, demUoc = 0;

	do{
		cout << "Nhap so thu nhat: ";
		cin >> n1;
		cout << "Nhap so thu hai: ";
		cin >> n2;

		if (n1 >= n2)
			cout << "Nhap sai, nhap lai!";
	}while (n1 >= n2);

	for (int i = n1; i <= n2; i++)
	{
		if (i % 2 == 0)
			demChan++;
		else
			demLe++;

		if (10 % i == 0 && i <= n2)
			demUoc++;
	}

	cout << "Tu " << n1 << " den " << n2 << " co:" << endl
		 << demChan << " so la so chan" << endl
		 << demLe << " so la so le" << endl
		 << demUoc << " so la uoc cua 10" << endl;

	return 0;
}