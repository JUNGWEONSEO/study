#include <iostream>
#include <time.h>


using namespace std;


void main(void)
{
	srand(unsigned(time(NULL)));

	int iArray[3] = {};

	int iArray1[9] = {};

	int iDest = 0, iSour = 0, iSwap = 0, inum = 0;
	int iInput = 0, iInput1 = 0, iInput2;
	
    
	for (int i = 0; i < 9; i++)
	{
		iArray1[i] = i + 1;
	}
     
	

	cout << "1부터 9까지의 숫자 중에 3번 입력하세요" << endl;
	cin >> iInput;
	cin >> iInput1;
	cin >> iInput2;
	system("cls");
	cout << "당신이 입력한 숫자 " << iInput << " " << iInput1 << " " << iInput2 << endl;
	for (int p = 0; p < 9 ; ++p)
	{
		int iStrike = 0, iBall = 0;

		cout << p + 1 << "회차 : ";
		for (int j = 0; j < 20; j++)
		{
			iDest = rand() % 9;
			iSour = rand() % 9;

			iSwap = iArray1[iDest];
			iArray1[iDest] = iArray1[iSour];
			iArray1[iSour] = iSwap;
		}

		for (int num = 0; num < 3; ++num)
		{

			iArray[num] = iArray1[num];

			if (iArray[num] == iInput || iArray[num] == iInput1 || iArray[num] == iInput2)
			{
				iStrike++;
			}
			else
				iBall++;


			cout << iArray[num] << " ";
			
			

		}
		cout << "->" << iStrike << "스트라이크" << " " << iBall << "볼" << endl;
		
		if (iStrike >= 3)
		{
			cout << "승리하셨습니다!!!" << endl;
			break;
		}
		if (p == 8)
		{
			cout << "패배하셨습니다!!!" << endl;
		}


	}
	
	
    

	

	

}