/*
BTH7 - 01.
Viết hàm kiểm tra 1 giá trị năm nhận vào có phải là năm nhuần hay không.
Viết chương trình kiểm tra lại hàm vừa xây dựng.
*/

#include <iostream>
using namespace std;

bool ktNamNhuan ( int nam )
{
	if ( nam % 400 == 0 || ( nam % 4 == 0 && nam % 100 != 0 ) )
		return true;
	else
		return false;
}

int main()
{
	int nam;

	cout << "Nhap nam: ";
	cin >> nam;

	if ( ktNamNhuan ( nam ) )
		cout << nam << " la nam nhuan" << endl;
	else
		cout << nam << " khong la nam nhuan" << endl;
	return 0;
}