#include <iostream>
#include <time.h>


using namespace std;


void main(void)
{
	srand(unsigned(time(NULL)));

	int iDest = 0, iSour = 0, iSwap = 0;
	int off = 1;
	int iNum = 0;

	int iArray[25] = {};    //섞기용
	int iArray1[25] = {};   //출력용

	for (int i = 0; i < 25; ++i)
	{
		iArray[i] = i + 1;
		iArray1[i] = i + 1;
	}
	for (int j = 0; j < 100; ++j)
	{


		iDest = rand() % 25;
		iSour = rand() % 25;

		iArray[iSwap] = iArray[iDest];
		iArray[iDest] = iArray[iSour];
		iArray[iSour] = iArray[iSwap];
	}

	
	while (off)
	{
		cout << " 숫자를 입력하세요 : " << endl;
		cin >> iNum;
       for (int j = 0; j < 25; ++j)
		{
			iArray1[j] = iArray[j];
			cout << iArray1[j] << " ";
			if (j == 4 || j == 9 || j == 14 || j == 19)
			{
				cout << endl;
			}
			if (iArray[iNum])
			{
				iArray1[0]
			}

		}
	
	







}