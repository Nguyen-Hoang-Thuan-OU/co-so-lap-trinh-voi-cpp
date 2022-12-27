/*
BTH03 - 15 (cách 2).
Viết chương trình nhận vào số đo 3 cạnh của 1 tam giác.
Kiểm tra xem 3 cạnh đó có hợp lệ hay không?
Nếu hợp lệ thì tam giác đó là loại tam giác gì (đều, vuông, cân, vuông cân hay thường)?
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double soThu1, soThu2, soThu3;

	cout << "Nhap canh thu nhat: ";
	cin >> soThu1;
	cout << "Nhap canh thu hai: ";
	cin >> soThu2;
	cout << "Nhap canh thu ba: ";
	cin >> soThu3;

	// Tam giác thường
	bool tamGiacThuong = (soThu1 < soThu2 + soThu3) &&
						 (soThu2 < soThu1 + soThu3) &&
						 (soThu3 < soThu1 + soThu2);

	// Tam giác đều
	bool tamGiacDeu = (soThu1 == soThu2) && (soThu2 == soThu3);

	// Tam giác vuông
	bool tamGiacVuong = (pow(soThu1, 2) == pow (soThu2, 2) + pow (soThu3, 2)) ||
						(pow(soThu2, 2) == pow (soThu1, 2) + pow (soThu3, 2)) ||
						(pow(soThu3, 2) == pow (soThu1, 2) + pow (soThu2, 2));
	// Tam giác cân
	bool tamGiacCan = ((soThu1 == soThu2) || (soThu1 == soThu3) || (soThu2 == soThu3)) &&
						tamGiacDeu;

	// Tam giác vuông cân
	bool tamGiacVuongCan = tamGiacVuong && tamGiacCan;

	if (tamGiacDeu)
		cout << "La tam giac deu!" << endl;
	else
		if (tamGiacVuongCan)
			cout << "La tam giac vuong can!" << endl;
		else
			if (tamGiacVuong)
				cout << "La tam vuong!" << endl;
			else
				if (tamGiacCan)
					cout << "La tam can!" << endl;
				else
					cout << "La tam giac thuong!" << endl;
	return 0;
}