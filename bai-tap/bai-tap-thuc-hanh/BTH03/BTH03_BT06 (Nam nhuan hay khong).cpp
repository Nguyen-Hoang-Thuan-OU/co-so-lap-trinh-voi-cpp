/*
BTH03 - 06.
Viết chương trình nhận vào năm. Xuất ra màn hình thông báo
năm đó là năm nhuần hay năm không nhuần? Biết rằng năm nhuần là năm có 366 ngày.
Năm nhuần còn là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100.
*/

#include <iostream>
using namespace std;

int main()
{
	int nam;
	cout << "Nhap vao nam: ";
	cin >> nam;
	if ( nam > 0 )
	{
		if ( nam % 400 == 0 || ( nam % 4 == 0 && nam % 100 != 0 ) )
			cout << "Day la nam nhuan" << endl;
		else
			cout << "Day la nam khong nhuan" <<endl;
	}
	else
		cout << "Nam nhap vao khong hop le!" <<endl;
	return 0;
}