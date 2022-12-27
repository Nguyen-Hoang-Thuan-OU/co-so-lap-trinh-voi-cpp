// BTH02 - 10a. Nhập vào một ký tự, sau đó in ra mã ASCII của ký tự đó.

#include <iostream>
using namespace std;

int main()
{
	char kyTu;

	cout << "Nhap vao mot ky tu: ";
	cin >> kyTu;

	cout << "Ma ASCII cua ky tu " << kyTu << " la: " << int (kyTu) << endl;
	return 0;
}