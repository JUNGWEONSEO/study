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
	char star[2] = { "*" };




	for (int i = 0; i < 25; ++i)
	{
		iArray[i] = i + 1;

	}


	while (off)
	{
		int bingo = 0;

	
		for (int j = 0; j < 25; ++j)
		{
			if (iNum == iArray[j])
			{
				iArray[iNum - 1] = iArray1[0];
				
			}
			if (iArray[j] == 0)
			{
				cout << "*" << " ";
			}
			else

			cout << iArray[j] << " ";
			if (j == 4 || j == 9 || j == 14 || j == 19)
			{
				cout << endl;
			}
		}
		cout << endl;
		if (iArray[0] == iArray[1] && iArray[0] == iArray[2] && iArray[0] == iArray[3] && iArray[0] == iArray[4])
		{
			++bingo;
		}
		if (iArray[0] == iArray[5] && iArray[0] == iArray[10] && iArray[0] == iArray[15] && iArray[0] == iArray[20])
		{
			++bingo;
		}
		if (iArray[5] == iArray[6] && iArray[5] == iArray[7] && iArray[5] == iArray[8] && iArray[5] == iArray[9])
		{
			++bingo;
		}
		if (iArray[15] == iArray[16] && iArray[15] == iArray[17] && iArray[15] == iArray[18] && iArray[15] == iArray[19])
		{
			++bingo;
		}
		if (iArray[10] == iArray[11] && iArray[10] == iArray[12] && iArray[10] == iArray[13] && iArray[10] == iArray[14])
		{
			++bingo;
		}
		if (iArray[20] == iArray[21] && iArray[20] == iArray[22] && iArray[20] == iArray[23] && iArray[20] == iArray[24])
		{
			++bingo;
		}
		if (iArray[1] == iArray[6] && iArray[1] == iArray[11] && iArray[1] == iArray[16] && iArray[1] == iArray[21])
		{
			++bingo;
		}
		if (iArray[2] == iArray[7] && iArray[2] == iArray[12] && iArray[2] == iArray[17] && iArray[2] == iArray[22])
		{
			++bingo;
		}
		if (iArray[3] == iArray[8] && iArray[3] == iArray[13] && iArray[3] == iArray[18] && iArray[3] == iArray[23])
		{
			++bingo;
		}
		if (iArray[4] == iArray[9] && iArray[4] == iArray[14] && iArray[4] == iArray[19] && iArray[4] == iArray[24])
		{
			++bingo;
		}
		if (iArray[0] == iArray[6] && iArray[0] == iArray[12] && iArray[0] == iArray[18] && iArray[0] == iArray[24])
		{
			++bingo;
		}
		if (iArray[4] == iArray[8] && iArray[4] == iArray[12] && iArray[4] == iArray[16] && iArray[4] == iArray[20])
		{
			++bingo;
		}
		if (bingo > 0)
		{
			cout << "현재" << bingo << "빙고입니다!" << endl;

		}
		if (bingo == 5)
		{
			cout << "5빙고를 완성하여 승리했습니다." << endl;
			--off;
		}
	
		

		cout << endl;
		cout << " 숫자를 입력하세요 : " << endl;
		cin >> iNum;

	}
}
			
			
				
				
				
				
			
			
			
		


	

