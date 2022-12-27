/*
BTH03 - 01.
Viết chương trình nhận vào điểm trung bình 1 môn học của một sinh viên.
Xuất ra màn hình thông báo cho biết sinh viên này đậu hay rớt?
Biết rằng nếu điểm trung bình từ 5 trở lên là đậu, ngược lại là rớt.
*/

#include <iostream>
using namespace std;

int main()
{
	double diemTrungBinh;

	cout << "Nhap diem trung binh cua ban: ";
	cin >> diemTrungBinh;

	if ( diemTrungBinh >= 5 )
		cout << "Chuc mung, ban da dau!" << endl;
	else
		cout << "Chia buon, ban da rot roi :'(" << endl;
	return 0;
}