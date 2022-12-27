/*
BTH7 - 04.
Viết các hàm sau đây:
a. Hàm kiểm tra một ký tự có phải là ký tự số hay không?
b. Hàm kiểm tra một ký tự có phải là ký tự chữ cái hay không?
c. Chương trình nhận vào một chuỗi (string), xuất kết quả chuỗi vừa nhập
có bao nhiêu ký tự số? bao nhiêu ký tự chữ? Lưu ý: sử dụng 2 hàm đã xây dựng ở trên.
*/

#include <iostream>
#include <string>
using namespace std;

// Hàm kiểm tra một ký tự có phải là ký tự số hay không?

bool ktKiTuSo ( char kt )
{
	if ( kt >= '0' && kt <= '9' )
		return true;
	return false;
}

//Hàm kiểm tra một ký tự có phải là ký tự chữ cái hay không?

bool ktKiTuChu ( char kt )
{
	if ( kt >= 'A' && kt <= 'Z' || kt >= 'a' && kt <= 'z' )
		return true;
	return false;
}

int main()
{
	string s;

	int demSo = 0, demChu = 0;
	cout << "Nhap chuoi: ";
	getline(cin,s);

	for ( int i = 0; i < s.length(); i++ )
		if ( ktKiTuSo (s.at(i)) == true )
			demSo++;
		else
		{
			if ( ktKiTuChu (s.at(i)) == true )
				demChu++;
		}

	cout << "Chuoi vua nhap co " << demSo << " ky tu la so\n";
	cout << "Chuoi vua nhap co " << demChu << " ky tu la chu cai\n";
	return 0;
}