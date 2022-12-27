/*
BTH07 - 02.
Viết hàm tìm ước chung lớn nhất của 2 số nguyên dương bằng thuật giải Euclid.
Thuật giải Euclid:
	- Nhận vào: 2 số nguyên dương m và n.
	- Trả về: ước chung lớn nhất của m và n.
	- Thuật giải:
		o Bước 1: nếu n = 0 thì kết quả là m và kết thúc. Ngược lại sang bước 2.
		o Bước 2: tính số dư r của phép chia m cho n.
		o Bước 3: gán n cho m, r cho n. Quay lại bước 1.
Viết chương trình nhận vào 1 phân số (gồm tử số và mẫu số), xuất kết quả rút gọn
của phân số (dùng hàm ước chung lớn nhất vừa xây dựng).
*/

#include <iostream>
using namespace std;

int timUCLN ( int m, int n )
{
	int r;

	while( n != 0 )
	{
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int main()
{
	int a, b;

	cout << "Nhap tu so: ";
	cin >> a;
	cout << "Nhap mau so: ";
	cin >> b;

	cout << a << " / " << b << " = " << a / timUCLN ( a, b ) << " / " << b / timUCLN ( a, b ) << endl;
	return 0;
}