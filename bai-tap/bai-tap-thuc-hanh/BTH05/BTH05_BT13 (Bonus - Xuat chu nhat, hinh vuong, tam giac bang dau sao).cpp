#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int chieuDai, chieuRong;
	int chieuDaiCanh;
	int chieuCao;

	cout << "\n/HINH CHU NHAT VA HINH VUONG\\" << endl;

	do{
		cout << endl;
		cout << "* Nhap chieu dai cua hinh chu nhat: ";
		cin >> chieuDai;
		cout << "* Nhap chieu rong cua hinh chu nhat: ";
		cin >> chieuRong;

		if(chieuDai <= 0 || chieuRong <= 0)
			cout << "\nChieu dai hoac chieu rong be hon khong, vui long nhap lai!" << endl;
	}while(chieuDai <= 0 || chieuRong <= 0);

	/*
	Xuất hình chữ nhật dưới dạng các dấu sao *
	cho phép chọn số dòng (dài), cột (rộng)
			*****
			*****
			*****
			*****
	*/
	cout << "\n/HINH CHU NHAT - CHO PHEP CHON SO DONG, COT\\" << endl;
	for (int i = 1; i <= chieuDai; i++)
	{
		for (int j = 1; j <= chieuRong; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;

	cout << "* Nhap chieu dai canh cua hinh vuong: ";
	cin >> chieuDaiCanh;

	/*
	Xuất hình vuông dưới dạng các dấu sao *
		***
		***
		***
	*/
	cout << "\n/HINH VUONG DAY DU\\" << endl;
	for (int i = 1; i <= chieuDaiCanh; i++)
	{
		for (int j = 1; j <= chieuDaiCanh; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;

	/*
	Xuất hình vuông dưới dạng các dấu sao *
	cho phép chọn số dòng (dài), cột (rộng)
		****
		*  *
		*  *
		****

	*/
	cout << "\n/HINH VUONG RONG RUOT - CHO PHEP CHON SO DONG, COT\\" << endl;
	for (int i = 1; i <= chieuDai; i++)
	{
		for (int j = 1; j <= chieuRong; j++)
			if (i == 1 || i == chieuDai || j == 1 || j == chieuRong)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	/*
	Xuất hình vuông dưới dạng các dấu sao *
		****
		*  *
		*  *
		****
	*/
	cout << "\n/HINH VUONG RONG RUOT\\" << endl;
	for (int i = 1; i <= chieuDaiCanh; i++)
	{
		for (int j = 1; j <= chieuDaiCanh; j++)
			if (i == 1 || i == chieuDaiCanh || j == 1 || j == chieuDaiCanh)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	/*
	Xuất hình vuông với đường chéo dưới dạng các dấu sao *
		*****
		** **
		* * *
		** **
		*****
	*/
	cout << "\n/HINH VUONG CO DUONG CHEO\\" << endl;
	for(int i = 1; i <= chieuDaiCanh; i++)
    {
        for(int j = 1; j<= chieuDaiCanh; j++)
        {
            if(i == 1 || i == chieuDaiCanh || j == 1 || j == chieuDaiCanh || i == j || j == (chieuDaiCanh - i + 1))
                cout << "*";
            else
                cout << " ";
        }
		cout << endl;
    }
	cout << endl;

	cout << "\n/HINH TAM GIAC\\" << endl;

	cout << "* Nhap chieu cao cua tam giac: ";
	cin >> chieuCao;

	/*
	Xuất hình tam giác dưới dạng các dấu *
		*
		**
		***
		****
		*****
	*/
	cout << "\n/HINH TAM GIAC DAY DU\\" << endl;
	for(int i = 1; i <= chieuCao; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
	cout << endl;

	/*
	Xuất hình tam giác dưới dạng các dấu *
		*
		**
		* *
		*  *
		*****
	*/
	cout << "\n/HINH TAM GIAC RONG RUOT\\" << endl;
	for (int i = 1; i <= chieuCao; i++)
	{
		for (int j = 1; j <= i; j++ )
			if (j == 1 || i == chieuCao || i == j)
				cout << "*";
			else
				cout << " ";
			cout << endl;
	}
	cout << endl;

	/*
	Xuất hình tam giác dưới dạng các dấu *
		    *
		   **
		  ***
		 ****
		*****
	*/
	cout << "\n/HINH TAM GIAC DAY DU\\" << endl;
	for (int i = 1; i <= chieuCao; i++)
	{
		for (int j = 1; j <= chieuCao; j++)
			if (j >= chieuCao - i + 1)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	/*
	Xuất hình tam giác dưới dạng các dấu *
		    *
		   **
		  * *
		 *  *
		*****
	*/
	cout << "\n/HINH TAM GIAC RONG RUOT\\" << endl;
	for(int i = 1; i <= chieuCao; i++)
    {
        for(int j = i; j < chieuCao; j++)
            cout << " ";

        for(int j = 1; j <= i; j++)
        {
            if(i == chieuCao || j == 1 || j == i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
	cout << endl;

	/*
	Xuất hình tam giác ngược dưới dạng các dấu *
		*****
		****
		***
		**
		*
	*/
	cout << "\n/HINH TAM GIAC NGUOC DAY DU\\" << endl;
	for (int i = 1; i <= chieuCao; i++)
	{
		for (int j = 1; j <= chieuCao; j++)
			if (j >= chieuCao - i + 2)
				cout << " ";
			else
				cout << "*";
		cout << endl;
	}
	cout << endl;

	/*
	Xuất hình tam giác ngược dưới dạng các dấu *
		*****
		*  *
		* *
		**
		*
	*/
	cout << "\n/HINH TAM GIAC NGUOC RONG RUOT\\" << endl;
	for (int i = 1; i <= chieuCao; i++)
	{
		for (int j = i; j <= chieuCao; j++)
			if(i == 1 || j == i || j == chieuCao)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	/*
	Xuất hình tam giác ngược dưới dạng các dấu *
		*****
		 ****
		  ***
		   **
		    *
	*/
	cout << "\n/HINH TAM GIAC NGUOC DAY DU\\" << endl;
	for ( int i = 1; i <= chieuCao; i++ )
	{
		for ( int j = 1; j <= chieuCao; j++ )
			if ( j >= i )
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
	cout << endl;

	/*
	Xuất hình tam giác ngược dưới dạng các dấu *
		*****
		 *  *
		  * *
		   **
		    *
	*/
	cout << "\n/HINH TAM GIAC NGUOC RONG RUOT\\" << endl;
	for(int i = 1; i <= chieuCao; i++)
    {
        for(int j = 1; j < i; j++)
            cout << " ";

        for(int j = i; j <= chieuCao; j++)
        {
            if(j == i || j == chieuCao || i==1)
                cout << "*";
            else
                cout << " ";
        }
		cout << endl;
    }
	cout << endl;

	/*
	Xuất hình tam giác dưới dạng các dấu *
			*
		   ***
		  *****
		 *******
		*********
	*/
	cout << "\n/HINH TAM GIAC DEU DAY DU\\" << endl;
	for(int i = 1; i <= chieuCao; i++)
    {
        for(int j = i; j < chieuCao; j++)
            cout << " ";

        for(int j = 1; j <= (2*i-1); j++)
            cout << "*";
		cout << endl;
    }
	cout << endl;

	/*
	Xuất hình tam giác dưới dạng các dấu *
			*
		   * *
		  *   *
		 *     *
		*********
	*/
	cout << "\n/HINH TAM GIAC DEU RONG RUOT\\" << endl;
	for(int i = 1; i <= chieuCao; i++)
    {
        for(int j = i; j < chieuCao; j++)
			cout << " ";

        for(int j = 1; j <= (2*i-1); j++)
        {
            if(i == chieuCao || j == 1 || j == (2*i-1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
	cout << endl;

	/*
	Xuất hình tam giác ngược dưới dạng các dấu *
		*********
		 *******
		  *****
		   ***
		    *
	*/
	cout << "\n/HINH TAM GIAC NGUOC DEU DAY DU\\" << endl;
	for(int i = 1; i <= chieuCao; i++)
    {
        for(int j = 1; j < i; j++)
            cout << " ";

        for(int j = 1; j <= (chieuCao*2 -(2*i-1)); j++)
			cout << "*";
		cout << endl;
    }
	cout << endl;

	/*
	Xuất hình tam giác dưới dạng các dấu *
		*********
		 *     *
		  *   *
		   * *
		    *
	*/
	cout << "\n/HINH TAM GIAC DEU DAY DU\\" << endl;
	for(int i = 1; i <= chieuCao; i++)
    {
        for(int j = 1; j < i; j++)
			cout << " ";

        for(int j = 1; j <= (chieuCao*2 - (2*i-1)); j++)
        {
            if(i == 1 || j == 1 || j == (chieuCao*2 - (2*i - 1)))
                cout << "*";
            else
                cout << " ";
        }
		cout << endl;
    }
	cout << endl;

    return 0;
}

//https://codeforwin.org/2015/07/star-patterns-program-in-c.html
//https://www.geeksforgeeks.org/programs-printing-pyramid-patterns-c/
//https://www.educba.com/star-patterns-in-c-plus-plus/