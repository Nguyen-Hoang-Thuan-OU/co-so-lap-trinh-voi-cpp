/*
BTH 8 - 02.
Viết chương trình thực hiện các công việc sau đây:
a) Định nghĩa hằng MAXSIZE là 100.
b) Khai báo mảng values có thể lưu số phần tử tối đa là MAXSIZE,
kiểu của mỗi phần tử là double.
c) Khai báo currentSize lưu số phần tử hiện có trong mảng.
d) Nhập vào giá trị của currentSize.
e) Nhập vào các giá trị trong mảng values, số phần tử đọc vào là currentSize.
f) In các phần tử trong mảng values trên một dòng, cách nhau bởi dấu phẩy.
*/

#include<iostream>
using namespace std;

int main()
{
	// Dinh nghia hang MAXSIZE
	const int MAXSIZE = 100;

	// Khai bao mang values co the luu toi da MAXSIZE phan tu
	double values[MAXSIZE];

	// Luu so phan tu hien tai trong mang
	int currentSize = 0;

	// Nhap gia tri cua currentSize
	cout << "Nhap so phan tu cua mang: ";
	cin >> currentSize;

	// Nhap gia tri cua mang values
	cout << "Nhap " << currentSize << " phan tu: " << endl;
	for ( int i = 0; i <= currentSize - 1; i++ )
	{
		cout << "Phan tu thu " << i + 1 <<": ";
		cin >> values[i];
	}
	cout << endl;

	// In cac phan tu trong mang tren mot dong, cach nhau boi khoang trang
	cout << "Cac gia tri da nhap la: ";
	for ( int i = 0; i <= currentSize - 1; i++ )
	{
		cout << values[i] << " ";
	}
	cout << endl;

	return 0;
}