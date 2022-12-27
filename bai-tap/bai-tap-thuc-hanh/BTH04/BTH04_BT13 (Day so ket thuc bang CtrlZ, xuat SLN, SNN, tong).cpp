/*
BTH04 - 13.
Viết chương trình nhận vào một dãy số nguyên liên tục và
kết thúc bằng tổ hợp phím Ctrl + Z. Sau đó xuất ra màn hình
giá trị số lớn nhất, số nhỏ nhất và tổng của các số vừa nhập.
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	int max = INT_MIN;
	int min = INT_MAX;
	int tong = 0;
	cout << "Nhap day so ket thuc bang Ctrl + Z: " << endl;
	while ( cin >> n )
	{
		if ( max < n )
			max = n;
		if ( min > n )
			min = n;
		tong = tong + n;
	}
	cout << "So lon nhat cua day so la: " << max << endl;
	cout << "So nho nhat cua day so la: " << min << endl;
	cout << "Tong la: " << tong << endl;
	return 0;
}