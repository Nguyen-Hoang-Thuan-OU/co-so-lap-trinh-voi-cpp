/*
BTH04 - 07. //chuahoanthanh//
Viết chương trình có giao diện là một menu lựa chọn 1 trong 4 phép tính (+ - * / )
và lựa chọn thoát. Khi người dùng chọn lựa chọn nào sẽ xử lý tương ứng.

	+ Với 4 phép tính thì cho người dùng nhập tiếp 2 số nguyên a và b.
	Thực hiện phép tính đã chọn với 2 số đó
	(lưu ý lỗi chia 0 và kết quả phép chia phải làm tròn lấy 2 chữ số thập phân).
	+ Với lựa chọn thoát thì sẽ kết thúc chương trình.
	+ Sau khi lựa chọn và tính 1 kết quả phép tính tương ứng, chương trình thể hiện lại
	menu cho người dùng tiếp tục có lựa chọn phép tính hay thoát để kết thúc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	int luaChon;
	do{
		cout << "1. Cong (+)" << endl;
		cout << "2. Tru (-)" << endl;
		cout << "3. Nhan (*)" << endl;
		cout << "4. Chia (/)" << endl;
		cout << "Ban chon: ";
		cin >> luaChon;

		switch(luaChon)
		{
			// Cộng
		case '+': case 'cong': case 'Cong': case '1': case '1.':
			{
				cout << "Nhap so nguyen thu nhat: ";
				cin >> a;
				cout << "Nhap so nguyen thu hai: ";
				cin >> b;
				cout << a << " + " << b << " = " << a + b << endl;
				break;
			}

			// Trừ
		case '-': case 'tru': case 'Tru': case '2': case '2.':
			{
				cout << "Nhap so nguyen thu nhat: ";
				cin >> a;
				cout << "Nhap so nguyen thu hai: ";
				cin >> b;
				cout << a << " - " << b << " = " << a - b << endl;
				break;
			}

			// Nhân
		case '*': case 'nhan': case 'Nhan': case '3': case '3.':
			{
				cout << "Nhap so nguyen thu nhat: ";
				cin >> a;
				cout << "Nhap so nguyen thu hai: ";
				cin >> b;
				cout << a << " * " << b << " = " << a * b << endl;
				break;
			}

			// Chia
		case '/': case 'chia': case 'Chia': case '4': case '4.':
			{
				cout << "Nhap so nguyen thu nhat: ";
				cin >> a;
				cout << "Nhap so nguyen thu hai: ";
				if ( b == 0 )
					cout << "Khong the thuc hien phep chia cho 0" << endl;
				else
					cout << a << " / " << b << " = " << fixed << setprecision (2) << ( a * 1.0 ) / b << endl;
				break;
			}
		default:
				cout << "Chao tam biet";
		}
	}while( luaChon >= 1 && luaChon <= 4 );
	return 0;
}