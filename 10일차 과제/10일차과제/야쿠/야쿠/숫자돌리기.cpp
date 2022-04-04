#include <iostream>

using namespace std;

void main(void)
{
	int k = 0;
	int iArray1[3][3] = {};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{

			iArray1[i][j] = { k + 1 };
			++k;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << iArray1[i][j] << " ";
		}
		cout << endl;
	}

}h