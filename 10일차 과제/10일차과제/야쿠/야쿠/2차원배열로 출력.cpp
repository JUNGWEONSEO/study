#include <iostream>

using namespace std;

void main(void)

{
	
	int iArray1[5][5] = {};

	int k = 0;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{

			iArray1[i][j] = { k + 1 };
			++k;
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << iArray1[i][j] << " ";
		}
		cout << endl;
	}



}
