#include <iostream>
#include <time.h>

using namespace std;

//void		Bubble_Sort(int* _pLotto, int _iSize);
void		Bubble_Sort(int iLotto[], int _iSize);

void main(void)
{
#pragma region ���� ���

	/*const int iNumber = 5;

	int	iArray[iNumber * iNumber] = { 0 };

	for (int i = 0; i < 25; ++i)
	{
		iArray[i] = i + 1;
	}

	for (int i = 0; i < iNumber; ++i)		// ���� ��Ģ
	{
		for (int j = 0; j < iNumber; ++j)	// ���� ��Ģ
		{
			int		iIndex = i * 5 + j;

			cout << iArray[iIndex] << "\t";
		}
		cout << endl;
	}*/

#pragma endregion ���� ���

#pragma region �ζ� �����

	// 1. �迭�� �̸��� sizeof �����ڿ� �־��ָ� �迭 ��ü�� ũ�⸦ �����ش�.


	srand(unsigned(time(NULL)));

	int	iLotto[45] = {};
	int	iAnswer[6] = {};

	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}
	
	int	iTemp = 0, iDest = 0, iSour = 0;

	for (int j = 0; j < 5; ++j)
	{

		for (int i = 0; i < 500; ++i)
		{
			iDest = rand() % 45;
			iSour = rand() % 45;

			iTemp = iLotto[iDest];
			iLotto[iDest] = iLotto[iSour];
			iLotto[iSour] = iTemp;
		}
				
		
		for (int i = 0; i < 6; ++i)
			iAnswer[i] = iLotto[i];

		Bubble_Sort(iAnswer, sizeof(iAnswer) / sizeof(int));

		for (int i = 0; i < 6; ++i)
		{
			cout << iAnswer[i] << "\t";
		}

		cout << endl;
	}
			
#pragma endregion �ζ� �����

	
	

}

void		Bubble_Sort(int iLotto[], int _iSize)
{
	int		iTemp = 0;

	for (int i = 0; i < _iSize; ++i)
	{
		for (int j = 0; j < _iSize - 1; ++j)
		{
			if (iLotto[j] > iLotto[j + 1])
			{
				iTemp = iLotto[j];
				iLotto[j] = iLotto[j + 1];
				iLotto[j + 1] = iTemp;
			}
		}
	}
}


/*
void		Bubble_Sort(int* _pLotto, int _iSize)
{
	int		iTemp = 0;

	for (int i = 0; i < _iSize; ++i)
	{
		for (int j = 0; j < _iSize - 1; ++j)
		{
			if (_pLotto[j] > _pLotto[j + 1])
			{
				iTemp = _pLotto[j];
				_pLotto[j] = _pLotto[j + 1];
				_pLotto[j + 1] = iTemp;
			}
		}
	}
}
*/
