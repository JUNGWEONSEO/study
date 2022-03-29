#include <iostream>
#include <time.h>

using namespace std;

void main(void)
{
#pragma region 구구단

	/*int i = 1, j = 2;

	while (10 > j)
	{
		cout << j << " * " << i << " = " << j * i << endl;
		++i;

		if (9 < i)
		{
			++j;
			i = 1;
			cout << "=======================" << endl;
		}	
	}*/
	
#pragma endregion 구구단

#pragma region 짝수 더하기

	/*int	iEvenSum = 0, iInput = 0;
	int iOddSum = 0;

	do 
	{
		cout << "숫자를 입력하세요 : ";
		cin >> iInput;

		if (0 == iInput % 2)
			iEvenSum += iInput;

		else if (0 != iInput % 2)
			iOddSum += iInput;


	} while (-1 != iInput);

	cout << "짝수의 합 : " << iEvenSum << endl;
	cout << "홀수의 합 : " << iOddSum << endl;*/

#pragma endregion 짝수 더하기

#pragma region 홀짝 만들기

	/*srand(unsigned(time(NULL)));

	int		iRand = 0, iCount = 5;
	int		iWin  = 0, iLose = 0;
	bool	bCheck = true;
	int		iInput = 0;
	
	while ((0 < iCount) && (true == bCheck))
	{
		system("cls");
		iRand = rand() % 2 + 1;
		cout << iCount << "회 남았습니다" << endl;
		cout << "1. 홀 2. 짝 3. 종료 : ";
		cin >> iInput;

		if (1 == iInput)
		{
			if (1 == iRand)
			{
				cout << "컴퓨터 : 홀" << endl;
				cout << "사용자 : 홀" << endl;
				cout << "정답!!!!" << endl;
				iWin++;
			}
			else
			{
				cout << "컴퓨터 : 짝" << endl;
				cout << "사용자 : 홀" << endl;
				cout << "오답...." << endl;
				iLose++;
			}
		}

		else if (2 == iInput)
		{
			if (1 == iRand)
			{
				cout << "컴퓨터 : 홀" << endl;
				cout << "사용자 : 짝" << endl;
				cout << "오답...." << endl;
				iLose++;
			}
			else
			{
				cout << "컴퓨터 : 짝" << endl;
				cout << "사용자 : 짝" << endl;
				cout << "정답!!!!" << endl;
				iWin++;
			}
		}
		else if (3 == iInput)
		{
			bCheck = false;
		}
		else
		{
			cout << "잘못 입력하셨습니다" << endl;
			continue;
		}

		--iCount;
		system("pause");
	}

	cout << "승 : " << iWin << "\t패 : " << iLose << endl;*/


#pragma endregion 홀짝 만들기

#pragma region 가위바위보 게임

	/*srand(unsigned(time(NULL)));

	int		iComputer = 0, iCount = 5;
	int		iWin = 0, iLose = 0, iDraw = 0;
	bool	bCheck = true;
	int		iInput = 0;

	while (true)
	{
		if (0 >= iCount)
			break;
	
		if (false == bCheck)
			break;

		system("cls");
		iComputer = rand() % 3 + 1;

		cout << iCount << "회 남았습니다" << endl;
		cout << "1. 가위 2. 바위 3. 보 4. 종료 : ";
		cin >> iInput;
		cout << "==========================" << endl;

		switch (iInput)
		{
		case 1: // 플레이어가 가위를 냈을 때
			if(1 == iComputer)
			{
				cout << "컴퓨터 : 가위" << endl;
				cout << "사용자 : 가위" << endl;
				cout << "무승부" << endl;
				++iDraw;
			}
			else if (2 == iComputer)
			{
				cout << "컴퓨터 : 바위" << endl;
				cout << "사용자 : 가위" << endl;
				cout << "패배" << endl;
				++iLose;
			}
			else
			{
				cout << "컴퓨터 : 보" << endl;
				cout << "사용자 : 가위" << endl;
				cout << "승리" << endl;
				++iWin;
			}

			break;

		case 2: // 플레이어 바위 냈을 때
			if (1 == iComputer)
			{
				cout << "컴퓨터 : 가위" << endl;
				cout << "사용자 : 바위" << endl;
				cout << "승리" << endl;
				++iWin;
			}
			else if (2 == iComputer)
			{
				cout << "컴퓨터 : 바위" << endl;
				cout << "사용자 : 바위" << endl;
				cout << "무승부" << endl;
				++iDraw;
			}
			else
			{
				cout << "컴퓨터 : 보" << endl;
				cout << "사용자 : 바위" << endl;
				cout << "패배" << endl;
				++iLose;
			}

			break;

		case 3:
			if (1 == iComputer)
			{
				cout << "컴퓨터 : 가위" << endl;
				cout << "사용자 : 보" << endl;
				cout << "패배" << endl;
				++iLose;
			}
			else if (2 == iComputer)
			{
				cout << "컴퓨터 : 바위" << endl;
				cout << "사용자 : 보" << endl;
				cout << "승리" << endl;
				++iWin;
			}
			else
			{
				cout << "컴퓨터 : 보" << endl;
				cout << "사용자 : 보" << endl;
				cout << "무승부" << endl;
				++iDraw;
			}
			break;

		case 4:
			bCheck = false;
			break;

		default:
			continue;
		}
		--iCount;
		system("pause");
	}

	cout << "승 : " << iWin << "\t무 : " << iDraw << "\t패 : " << iLose << endl;*/ 

#pragma endregion 가위바위보 게임

}