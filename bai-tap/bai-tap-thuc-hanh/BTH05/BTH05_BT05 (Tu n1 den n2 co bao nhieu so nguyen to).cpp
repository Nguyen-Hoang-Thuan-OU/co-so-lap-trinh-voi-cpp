// Nhap 2 so nguyen duong, dem xem tu n1 den n2 co bao nhieu so nguyen to
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n1, n2;
	int demSNT = 0;
	int k;

	cout << "Nhap so nguyen duong thu nhat: ";
	cin >> n1;
	cout << "Nhap so nguyen duong thu hai: ";
	cin >> n2;

	do{
		if ( n1 >= n2 )
		{
			cout << "so thu nhat phai nho hon so thu hai, nhap lai ca 2 so\n";
			_getch();
			system("cls");
			cout << "Nhap so nguyen duong thu nhat: ";
			cin >> n1;
			cout << "Nhap so nguyen duong thu hai: ";
			cin >> n2;
		}
		if ( n1 <= 0 )
		{
			cout << "Nhap lai so thu nhat: ";
			cin >> n1;
		}
		if ( n2 <= 0 )
		{
			cout << "Nhap lai so thu hai: ";
			cin >> n2;
		}
	}while( n1 >= n2 || n1 <= 0 || n2 <= 0 );

	for (int i = n1; i <= n2; i++)
	{
		for (k = 2; k <= n2; k++)
			if (i % k == 0)
				break;

		if (k == i)
			demSNT++;
	}

	cout << "Tu " << n1 << " den " << n2 << " co " << demSNT << " so la so nguyen to\n";
	return 0;
}