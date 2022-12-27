/*
BTH04 - 11.
Viết chương trình nhận vào 1 số ở dạng nhị phân.
Xuất ra màn hình kết quả số đó chuyển qua hệ thập phân.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int nhiPhan;
	int tam;
	int chuSo;
	int thapPhan = 0;
	int soMu = 0;

	cout << "Nhap day nhi phan: ";
	cin >> nhiPhan;
	tam = nhiPhan;

	while( tam > 0)
	{
		chuSo = tam % 10;
		thapPhan = thapPhan + chuSo * pow(2.0, soMu);
		soMu++;
		tam = tam / 10;
	}

	cout << "Ket qua " << nhiPhan << " o he thap phan = " << thapPhan << endl;
	return 0;
}