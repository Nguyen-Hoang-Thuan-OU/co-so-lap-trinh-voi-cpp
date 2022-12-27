// Nhap chieu dai, chieu rong, xuat ra hinh chu nhat bang cac dau *

#include <iostream>
using namespace std;

int main()
{
	int chieuDai, chieuRong;
	cout << "Nhap chieu dai: ";
	cin >> chieuDai;
	cout << "Nhap chieu rong: ";
	cin >> chieuRong;
	for ( int i = 1; i <= chieuDai; i++ )
	{
		for ( int j = 1; j <= chieuRong; j++ )
			cout << "*";
		cout << endl;
	}
	return 0;
}