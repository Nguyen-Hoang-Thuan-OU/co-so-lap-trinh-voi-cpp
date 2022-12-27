/*
BTH03 - 04.
Viết chương trình nhận vào 2 số nguyên. Xuất ra màn hình kết quả so sánh giữa
hai số (số thứ nhất lớn hơn, nhỏ hơn hay hai số bằng nhau).
*/

#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	if ( a > b )
		cout << "So thu nhat lon hon so thu hai\n";
	else
		if ( a < b )
			cout << "So thu nhat nho hon so thu hai\n";
		else
			cout << "Hai so bang nhau\n";
}