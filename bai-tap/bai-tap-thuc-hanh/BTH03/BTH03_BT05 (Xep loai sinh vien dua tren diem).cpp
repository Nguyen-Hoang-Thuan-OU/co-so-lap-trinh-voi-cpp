/*
BTH03 - 05.
Viết chương trình nhận vào điểm tích lũy của 1 sinh viên. Xuất ra màn hình
kết quả xếp loại của sinh viên đó dựa trên điểm tích lũy. Biết rằng:
	- Điểm tích lũy từ 9 trở lên xếp loại xuất sắc.
	- Điểm tích lũy từ 8 đến dưới 9 xếp loại giỏi.
	- Điểm tích lũy từ 7 đến dưới 8 xếp loại khá.
	- Điểm tích lũy từ 6 đến dưới 7 xếp loại trung bình khá.
	- Điểm tích lũy từ 5 đến dưới 6 xếp loại trung bình.
	- Điểm tích lũy dưới 5 là yếu.
*/

#include <iostream>
using namespace std;

int main()
{
	double diemTichLuy;

	cout << "Nhap so diem tich luy cua ban: ";
	cin >> diemTichLuy;

	if ( diemTichLuy >= 9 )
		cout << "Ban xep loai xuat sac" << endl;
	else
		if ( diemTichLuy < 9 && diemTichLuy >= 8 )
			cout << "Ban xep loai gioi" << endl;
		else
			if ( diemTichLuy < 8 && diemTichLuy >= 7 )
				cout << "Ban xep loai kha" << endl;
			else
				if ( diemTichLuy < 7 && diemTichLuy >= 6 )
					cout << "Ban xep loai trung binh kha" << endl;
				else
					if ( diemTichLuy < 6 && diemTichLuy >= 5 )
						cout << "Ban xep loai trung binh" << endl;
					else
						cout << "Ban xep loai yeu" << endl;
	return 0;
}