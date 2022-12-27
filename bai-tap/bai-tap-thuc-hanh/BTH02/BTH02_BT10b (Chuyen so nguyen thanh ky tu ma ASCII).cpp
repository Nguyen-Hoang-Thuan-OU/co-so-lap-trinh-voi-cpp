// BTH02 - 10b. Nhập vào một số nguyên (1..255), sau đó in ra ký tự có mã ASCII tương ứng.

#include <iostream>
using namespace std;

int main()
{
	char kyTu;
	int soNguyen;

	cout << "Nhap vao mot so nguyen (1...255): ";
	cin >> soNguyen;
	kyTu = soNguyen;

	cout << "So nguyen " << soNguyen << " co ma ASCII tuong ung la: " << kyTu << endl;
	return 0;
}