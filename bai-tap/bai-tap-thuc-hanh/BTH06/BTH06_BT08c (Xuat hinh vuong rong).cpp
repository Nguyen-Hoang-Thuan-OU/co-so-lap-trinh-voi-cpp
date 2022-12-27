/*
BTH6 - 08c.
Hàm xuất hình vuông rỗng khi nhận vào số đo cạnh và ký tự cần xuất.
Ví dụ với cạnh là 4 và ký tự nhập vào là * thì kết quả:
		* * * *
		*     *
		*     *
		* * * *
*/

#include<iostream>
using namespace std;

void hinhVuong (int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (i == 1 || j == 1 || i == n || j == n)
				cout << " * ";
			else
				cout << "   ";
		cout << endl;
	}
	cout << endl;
}

int main()
{
	int n;

	do{
		cout << "Nhap chieu dai canh cua hinh vuong: ";
		cin >> n;

		if (n <= 0)
			cout << "Nhap sai, nhap lai!";
	}while(n <= 0);

	hinhVuong(n);

	return 0;
}