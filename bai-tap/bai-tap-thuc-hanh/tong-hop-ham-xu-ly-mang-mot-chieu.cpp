#include<iostream>
using namespace std;

// Ham nhap

void nhapMang ( int a[], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        cout << "Phan tu thu a[" << i << "]= " << endl;
        cin >> a[i];
    }
}

// Ham xuat

void xuatMang ( int a[], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        cout << a[i] << "\t";
    }
}

// Ham tim gia tri lon nhat

int max (int a[], int n)
{
	int max = a[0];
	for ( int i = 0; i < n; i++ )
	{
		if ( max < a[i] )
			max = a[i];
	}
	return max;
}

// Ham tim gia tri nho nhat

int min (int a[], int n)
{
	int min = a[0];
	for ( int i = 0; i < n; i++ )
	{
		if ( min > a[i] )
			min = a[i];
	}
	return min;
}
	
// Ham sap xep gia tri cua mang tang dan

void sapXep ( int a[], int n )
{
    int temp = 0;
    for ( int i = 0; i < n; i++ )
    {
        for ( int j = i + 1; j < n; j++ )
        {
            if ( a[i] > a[j] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Ham sap xep gia tri cua mang giam dan

void sapXep ( int a[], int n )
{
    int temp = 0;
    for ( int i = 0; i < n; i++ )
    {
        for ( int j = i + 1; j < n; j++ )
        {
            if ( a[i] < a[j] )
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Ham kiem tra mang co phai toan so duong hay khong

bool kiemTraMang ( int a[], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] < 0 )
        {
            return false;
        }
    }
    return true;
}

// Ham tim kiem

int timKiem ( int a[], int n, int x )
{
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] == x )
        {
            return 1;
        }
    }
    return 0;
}

// Ham chen (them)

void chen ( int a[], int &n, int viTriCanChen, int soCanChen )
{
    for ( int i = n; i >= viTriCanChen; i-- )
    {
        a[i] = a[i - 1];
    }
    a[viTriCanChen] = soCanChen;
    n++;
}

// Ham xoa

void xoa ( int a[], int &n, int viTriCanXoa )
{
    for ( int i = viTriCanXoa; i < n; i++ )
    {
        a[i] = a[i + 1];
    }
    n--;
}

// Ham dem so chan

int demSoChan ( int a[], int n )
{
    int dem = 0;
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] % 2 == 0 )
        {
            dem++;
        }
    }
    return dem;
}

// Ham xoa so chan

void xoaSoChan ( int a[], int &n )
{
    for ( int i = 0; i < n; )
    {
        if ( a[i] % 2 == 0 )
        {
            xoa( a, n, i );
        }
        else
        {
            i++;
        }
    }
}

// Ham tach mang (tach cac so am ra mang moi)

void tachMang ( int a[], int n, int Temp[], int &nTemp )
{
    nTemp = 0;
    for ( int i = 0; i < n; i++ )
    {
        if ( a[i] < 0 )
        {
            Temp[nTemp] = a[i];
			nTemp++;
        }
    }
}

// Gop mang vua tach vao nhu truoc

void gopMang ( int a[], int n, int Temp[], int &nTemp )
{
    n = n + nTemp;
    for ( int i = ( n - nTemp ); i < n; i++ )
    {
        a[i] = Temp[i - ( n - nTemp )];
    }
}

// Ham tinh tong

int tinhTong ( int a[], int n )
{
    int tong = 0;
    for ( int i = 0; i < n; i++ )
    {
        tong = tong + a[i];
    }
    return tong;
}