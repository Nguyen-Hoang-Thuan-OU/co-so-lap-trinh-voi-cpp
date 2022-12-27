/*
BTH03 - 07.
Viết chương trình nhận vào tháng. Xuất ra màn hình số ngày của tháng đó.
Giao diện chương trình khi thực hiện được mô phỏng ở 2 ví dụ dưới đây:

	Ví dụ 1:
	Nhap thang: 2
	So ngay cua thang 2 la 28 hoac 29 ngay
	
	Ví dụ 2:
	Nhap thang: 3
	So ngay cua thang 3 la 31 ngay
*/

#include <iostream>
using namespace std;

int main()
{
	int thang;

	cout << "Nhap vao thang: ";
	cin >> thang;

	if ( thang >=1 && thang <=12 )
	{
		switch(thang)
		{
		case 4: case 6: case 9: case 11:
			cout << "Thang " << thang << " co 30 ngay" << endl;
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "Thang " << thang << " co 31 ngay" << endl;
			break;
		default:
			cout << "Thang " << thang << " co the co 28 hoac 29 ngay" << endl;
		}
	}
	else
		cout << "Thang khong hop le!" << endl;
	return 0;
}