/*
BTH8 - 01.
Viết chương trình thực hiện các công việc sau đây:
a) Khai báo một mảng alpha lưu 50 phần tử kiểu double.
b) Gán giá trị của 25 phần tử đầu tiên là bình phương của chỉ số phần tử,
25 phần tử còn lại có giá trị là lập phương của chỉ số.
c) In các giá trị trong mảng alpha ra màn hình, mỗi dòng gồm 10 phần tử.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	// Khai bao luu 50 phan tu
	double alpha[50];

	// 25 phan tu dau tien la binh phuong cua chi so phan tu
	for ( int i = 0; i <= 24; i++ )
	{
		alpha[i] = i * i;
	}

	// 25 phan tu con lai la lap phuong cua chi so phan tu
	for ( int i = 25; i <= 49; i++ )
	{
		alpha[i] = i * i * i;
	}

	// In ra mang alpha moi dong 10 phan tu
	for ( int i = 0; i <= 49; i++ )
	{
		cout << setw(8) << alpha[i];
		if ( ( i + 1 ) % 10 == 0 ) cout << endl;
	}

	return 0;
}