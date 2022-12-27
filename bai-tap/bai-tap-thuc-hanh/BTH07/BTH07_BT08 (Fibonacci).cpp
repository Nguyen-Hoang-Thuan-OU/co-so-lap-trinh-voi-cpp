#include<iostream>
using namespace std;

int fibo (int n)
{
	int t, u = 0;
	int v = 1;
	if (n == 0)
		t = 0;
	else
	{
		if(n == 1)
			t = 1;
		else
			for (int i = 2; i <= n; i++)
			{
				t = u + v;
				u = v;
				v = t;
			}
	}
	return t;

}

int main()
{
	int n;

	cout << "Nhap n: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << fibo(i);

		if(i < n)
			cout << ", ";
	}
	cout << endl;
	return 0;
}