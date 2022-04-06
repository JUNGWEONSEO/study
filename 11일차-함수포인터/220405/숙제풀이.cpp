#include <iostream>
#include <time.h>

using namespace std;

void Init_Answer(int _iArray[], int _iSize);
void Main_Game(int _iAnswer[]);
int Check_Strike(int _iAnswer[], int _iInput[], int _iSize);
int Check_Ball(int _iAnswer[], int _iInput[], int _iSize);

void main(void)
{
#pragma region 회전하기

	/*const	int iSize = 3;

	int		iArray[iSize][iSize] = {};
	int		iRot[iSize][iSize] = {};

	for (int i = 0; i < iSize; ++i)
	{
		for (int j = 0; j < iSize; ++j)
		{
			iArray[i][j] = i * iSize + j + 1;
			cout << iArray[i][j] << "\t";
		}
		cout << endl;
	}

	for (int k = 0; k < 4; ++k)
	{
		cout << "=======================" << endl;

		for (int i = 0; i < iSize; ++i)
		{
			for (int j = 0; j < iSize; ++j)
			{
				iRot[j][(iSize - 1) - i] = iArray[i][j];
			}
		}

		for (int i = 0; i < iSize; ++i)
		{
			for (int j = 0; j < iSize; ++j)
			{
				iArray[i][j] = iRot[i][j];
				cout << iArray[i][j] << "\t";
			}
			cout << endl;
		}
	}*/

#pragma endregion 회전하기

#pragma region 야구게임

	srand(unsigned(time(nullptr)));

	int		iArray[9] = {};
	int		iAnswer[3] = {};

	Init_Answer(iArray, sizeof(iArray) / sizeof(int));

	for (int i = 0; i < 3; ++i)
		iAnswer[i] = iArray[i];

	cout << "정답 : " << iAnswer[0] << "\t" << iAnswer[1] << "\t" << iAnswer[2] << endl;

	Main_Game(iAnswer);

#pragma endregion 야구게임
	
}
void Init_Answer(int _iArray[], int _iSize)
{
	int	iDest = 0, iSour = 0, iTemp = 0;

	for (int i = 0; i < _iSize; ++i)
		_iArray[i] = i + 1;

	for (int i = 0; i < 500; ++i)
	{
		iDest = rand() % 9;
		iSour = rand() % 9;

		iTemp = _iArray[iDest];
		_iArray[iDest] = _iArray[iSour];
		_iArray[iSour] = iTemp;
	}

}
void Main_Game(int _iAnswer[])
{
	int		iInput[3] = {};
	int		iStrike = 0, iBall = 0, iCount = 0;

	while (true)
	{
		if (9 <= iCount)
		{
			cout << "패배" << endl;
			break;
		}

		cout << iCount + 1 << " 회차 입력 : ";
		cin >> iInput[0] >> iInput[1] >> iInput[2];

		iStrike = Check_Strike(_iAnswer, iInput, sizeof(iInput) / sizeof(int));
		iBall  = Check_Ball(_iAnswer, iInput, sizeof(iInput) / sizeof(int));

		cout << iStrike << " 스트라이크\t" << iBall << " 볼" << endl;
		
		if (3 == iStrike)
		{
			cout << iCount + 1 << " 회차 승리" << endl;
			break;
		}

		++iCount;
	}
}
int Check_Strike(int _iAnswer[], int _iInput[], int _iSize)
{
	int	iStrike = 0;

	for (int i = 0; i < _iSize; ++i)
	{
		if (_iAnswer[i] == _iInput[i])
			++iStrike;
	}
	
	return iStrike;
}
int Check_Ball(int _iAnswer[], int _iInput[], int _iSize)
{
	int iBall = 0;
	
	for (int i = 0; i < _iSize; ++i)
	{
		for (int j = 0; j < _iSize; ++j)
		{
			if(i == j)
				continue;

			if (_iAnswer[i] == _iInput[j])
				++iBall;
		}
	}

	return iBall;
}