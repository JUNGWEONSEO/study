#include <iostream>

using namespace std;

void main(void)
{
	int iNumber = 1, iNumber1 = 2;

	while (10 > iNumber)
	{
		cout << iNumber1 << "*" << iNumber << "=" << iNumber1 * iNumber << endl;

		iNumber++;

		if (10 == iNumber && 9 > iNumber1)
		{
			iNumber1++;
			iNumber = 1;
			cout << endl;
			
		}
		
	}
}