#include <iostream>

using namespace std;

void main(void)
{
	int iNumber = 1;
	while (10 > iNumber)
	{
		cout << 2 << "*" << iNumber << "=" << 2 * iNumber << endl;

		iNumber++;

		if (iNumber == 10)
		{
			int iNumber = 1;
			while (10 > iNumber)
			{
				cout << 3 << "*" << iNumber << "=" << 3 * iNumber << endl;

				iNumber++;

			}

		}
	}
}



