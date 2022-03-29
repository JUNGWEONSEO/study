#include <iostream>

using namespace std;

void main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << "*";

			if ((i == 1) && (j == 3))
			{
				cout << " ";
				break;
			}
			if ((i == 2) && (j == 2))
			{
				cout << " " << " ";
				break;
			}
			if ((i == 3) && (j == 1))
			{
				cout << " " << " " << " ";
				break;
			}
			if ((i == 4) && (j == 0))
			{
				cout << " " << " " << " " << " ";
				break;
			}
			
			
		}
		cout << endl;
	}
}













/*

*****
****
***
**
*

*/