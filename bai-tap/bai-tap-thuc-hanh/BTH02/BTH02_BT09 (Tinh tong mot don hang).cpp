/*
BTH02 - 09.
Thuật giải sau đây mô tả cách tính tổng trị giá một đơn hàng
của một cửa hàng bán sách, dựa trên tổng số tiền mua sách và tổng số sách mua:
	Đọc vào tổng số sách và tổng số tiền.
	Tính thuế (7.5% của tổng số tiền).
	Tính tiền vận chuyển (2000 đ/cuốn).
	Tổng trị giá đơn hàng = tổng tiền mua sách + tiền thuế + tiền vận chuyển.
	In ra tổng trị giá của đơn hàng.
*/

#include <iostream>
using namespace std;

int main()
{
	double tienMotCuonSach;
	double soLuongSach;
	double thue = 0.75;
	double phiVanChuyen = 2000;
	cout << "Gia tien cua mot cuon sach: ";
	cin >> tienMotCuonSach;
	cout << "So luong cuon sach: ";
	cin >> soLuongSach;
	cout << "Tong tri gia don hang: " << ( tienMotCuonSach * soLuongSach ) + thue + ( phiVanChuyen * soLuongSach ) << endl;
	return 0;
}