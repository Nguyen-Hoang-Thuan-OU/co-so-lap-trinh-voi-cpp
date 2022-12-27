// Xuat ket qua cua cac phep tinh

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int soNguyen;
	double s1 = 0;
	double s2 = 0;
	double s3 = 0;

	cout << "Nhap so nguyen duong (n>0): ";
	cin >> soNguyen;

	//int j = 1, k = 1;
	/*for ( int i = 1; i <= soNguyen; i++ )
			s1 = s1 + pow((double)i, 2);

	for ( int j = 1; j <= soNguyen; j++ )
			s2 = s2 + 1.0 / j;

	for ( int k = 1; k <= soNguyen; k++ )
			s3 = s3 + 1.0 / ( 2 * k - 1 );*/

	for (int i = 1; i <= soNguyen; i++)
	{
		s1 = s1 + pow((double)i, 2);
		s2 = s2 + 1.0 / i;
		s3 = s3 + 1.0 / ( 2 * i - 1 );
	}
	
	cout << "Gia tri cua s1 la: " << s1 << endl;
	cout << "Gia tri cua s2 la: " << s2 << endl;
	cout << "Gia tri cua s3 la: " << s3 << endl;
	system("pause");
	return 0;
}