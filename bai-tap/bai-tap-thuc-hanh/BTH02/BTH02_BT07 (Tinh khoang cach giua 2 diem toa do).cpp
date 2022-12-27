/*
BTH02 - 07.
Khoảng cách d giữa hai điểm (x1, y1) và (x2, y2) được tính bằng công thức sau:
d = sqrt ((x2 − x1)^2 + (y2 − y1)^2)
Viết chương trình nhập vào tọa độ hai điểm, tính và in ra khoảng cách giữa hai điểm.
Ví dụ:
	Nhap toa do diem thu 1: 0 1
	Nhap toa do diem thu 2: 1 0
	Khoang cach giua 2 diem la: 1.4
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double xA, yA;
	double xB, yB;
	double d;

	cout << "Nhap toa do diem thu nhat: ";
	cin >> xA >> yA;
	cout << "Nhap toa do diem thu hai: ";
	cin >> xB >> yB;

	d = sqrt ( (xB - xA) * (xB - xA) + (yB - yA) * (yB - yA) );

	cout << "Khoang cach gia hai diem la: " << d << endl;
	return 0;
}