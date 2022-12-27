/*
BTH02 - 02.
Viết chương trình yêu cầu nhập vào hai cạnh hình chữ nhật,
sau đó tính và in ra diện tích hình chữ nhật.
*/

#include <iostream>
using namespace std;

int main()
{
	int chieuDai, chieuRong;
	cout << "Nhap chieu dai hinh chu nhat: ";
	cin >> chieuDai;
	cout << "Nhap chieu rong hinh chu nhat: ";
	cin >> chieuRong;
	cout << "Dien tich hinh chu nhat la: " << chieuDai * chieuRong << endl;
	return 0;
}