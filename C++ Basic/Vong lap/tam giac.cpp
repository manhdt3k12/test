#include <iostream>

using namespace std;

int main()
{
	int h;
	cout << "Nhap chieu cao h = ";
	cin >> h;

	// Dang 1
	for (int i = 1; i <= h; ++i)
	{
		for (int j = 1; j <= h; ++j)
		{
			if (j <= i)
			{
				cout << "*";
			}
			else cout << " ";		
		}
		cout << endl;
	}
	cout << endl;

	//  Dang 2
	for (int i = 1; i <= h; ++i)
	{
		for (int j = 1; j <= h; ++j)
		{
			if (j <= h - i + 1)
			{
				cout << "*";
			}
			else cout << " ";

		}
		cout << endl;
	}

	cout << endl;

	//  Dang 3
	for (int i = 1; i <= h; ++i)
	{
		for (int j = 1; j <= h; ++j)
		{
			if (j > h - i)
			{
				cout << "*";
			}
			else cout << " ";

		}
		cout << endl;
	}
	cout << endl;

	//  Dang 4
	for (int i = 1; i <= h; ++i)
	{
		for (int j = 1; j <= h; ++j)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else cout << " ";

		}
		cout << endl;
	}


	system("pause");
	return 0;
}