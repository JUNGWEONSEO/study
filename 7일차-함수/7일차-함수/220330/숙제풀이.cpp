#include <iostream>

using namespace std;

void main(void)
{
#pragma region ������

	/*int	iDan = 0, iGob = 0;

	cout << " �� �� : ";
	cin >> iDan;

	cout << " �� �� : ";
	cin >> iGob;

	for (int i = 2; i <= iDan; ++i)
	{
		for (int j = 1; j <= iGob; ++j)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << "=====================" << endl;
	}*/
	
#pragma endregion ������

#pragma region �����

	/*for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (i >= j)
				cout << " * " << "\t";
			else
				cout << " " << "\t";
		}

		cout << endl;
	}*/

	/*
	// 	*
	// 	**
	// 	***
	// 	****
	// 	*****
	*/

	/*for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (4 >= i + j)
				cout << " * " << "\t";
			else
				cout << " " << "\t";
		}

		cout << endl;
	}*/
/*
	*****
	****
	***
	**
	*
*/

	/*for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (4 <= i + j)
				cout << " * " << "\t";
			else
				cout << " " << "\t";
		}

		cout << endl;
	}*/

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (i <= j)
				cout << " * " << "\t";
			else
				cout << " " << "\t";
		}

		cout << endl;
	}

#pragma endregion �����


}