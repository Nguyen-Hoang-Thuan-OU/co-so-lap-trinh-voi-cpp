/*
BTH02 - 08.
Một cửa hàng bán đồ gỗ tính giá bán của mỗi mặt hàng bằng giá mua vào cộng thêm
60%. Viết chương trình yêu cầu nhập vào giá mua của một mặt hàng,
sau đó in ra giá bán của mặt hàng đó.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double giaMua;
	double congThem = 0.6;
	cout << "Gia mua la: ";
	cin >> giaMua;
	cout << "Gia ban la: " << setprecision(0) << fixed << giaMua + ( giaMua * congThem ) << endl;
	return 0;
}