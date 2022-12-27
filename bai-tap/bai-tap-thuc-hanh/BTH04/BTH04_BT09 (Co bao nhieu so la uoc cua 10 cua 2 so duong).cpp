/*
BTH04 - 09.
Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2).
Đếm và xuất ra màn hình kết quả có bao nhiêu số
là ước của 10 trong phạm vi từ n1 đến n2.
*/

#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int dem = 0;

	do {
		cout << "Nhap so nguyen duong thu nhat: ";
		cin >> n1;
		cout << "Nhap so nguyen duong thu hai: ";
		cin >> n2;
		if ( n1 <= 0 || n2 <= 0 || n1 >= n2 )
			cout << "Nhap sai, vui long nhap lai\n";
	} while( n1 <= 0 || n2 <= 0 || n1 >= n2 );

	for (int i = n1; i < n2; i++)
	{
		if (10 % i == 0)
			dem++;
	}
	cout << "Co " << dem << " so la uoc cua 10 trong pham vi tu " << n1 << " den " << n2 << endl;
	return 0;
}