#include <iostream>

using namespace std;

void main(void)
{
#pragma region 빙고

	/*int	iBingo = 0, iInput = 0;
	int iCount = 0;

	int	iArray[25] = {};

	for (int i = 0; i < 25; ++i)
		iArray[i] = i + 1;

	while (true)
	{
		system("cls");

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				int	iIndex = i * 5 + j;

				if (0 == iArray[iIndex])
					cout << " * " << "\t";
				else
					cout << iArray[iIndex] << "\t";
			}
			cout << endl;
		}

		cout << iBingo << " 빙고" << endl;

		if (5 <= iBingo)
		{
			cout << "승리!!!!!!!!" << endl;
			return;
		}

		cout << "숫자를 입력하세요 : ";
		cin >> iInput;

		iBingo = 0;

		for (int i = 0; i < 25; ++i)
		{
			if (iArray[i] == iInput)
			{
				iArray[i] = 0;
				break;
			}
		}

		// 가로로 *이 5개인 경우

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (0 == iArray[i * 5 + j])
					++iCount;

				if (5 == iCount)
					++iBingo;
			}
			iCount = 0;
		}

		// 세로로 *이 5개인 경우

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (0 == iArray[j * 5 + i])
					++iCount;

				if (5 == iCount)
					++iBingo;
			}
			iCount = 0;
		}

		// 오른쪽 대각선
		for (int i = 0; i < 5; ++i)
		{
			if (0 == iArray[i * 5 + i])
				++iCount;

			if (5 == iCount)
				++iBingo;
		}
		iCount = 0;

		// 왼쪽 대각선
		for (int i = 0; i < 5; ++i)
		{
			if (0 == iArray[i * 4 + 4])
				++iCount;

			if (5 == iCount)
				++iBingo;
		}
		iCount = 0;
	}*/

#pragma endregion 빙고

#pragma region 숫자 옮기기

/*
	int	iArray[25] = { 0 };
	int	iInput = 0;
	int	iZeroIndex = 0;
	int	iTemp = 0;

	for (int i = 0; i < 25; ++i)
		iArray[i] = i;

	while (true)
	{
		system("cls");

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				int	iIndex = i * 5 + j;
				cout << iArray[iIndex] << "\t";
			}
			cout << endl;
		}

		cout << "숫자를 입력하세요(2. 아래 4. 왼쪽 6. 오른쪽 8. 위쪽 5. 종료) : ";
		cin >> iInput;

		for (int i = 0; i < 25; ++i)
		{
			if (0 == iArray[i])
			{
				iZeroIndex = i;
				break;
			}
		}

		switch (iInput)
		{
		case 2:
			if (iZeroIndex > 19)
				break;

			iTemp = iArray[iZeroIndex];
			iArray[iZeroIndex] = iArray[iZeroIndex + 5];
			iArray[iZeroIndex + 5] = iTemp;

			break;

		case 4:
			if (0 == iZeroIndex % 5)
				break;

			iTemp = iArray[iZeroIndex];
			iArray[iZeroIndex] = iArray[iZeroIndex - 1];
			iArray[iZeroIndex - 1] = iTemp;
			break;

		case 6:
			if (4 == iZeroIndex % 5)
				break;

			iTemp = iArray[iZeroIndex];
			iArray[iZeroIndex] = iArray[iZeroIndex + 1];
			iArray[iZeroIndex + 1] = iTemp;
			break;

		case 8:
			if (iZeroIndex < 5)
				break;

			iTemp = iArray[iZeroIndex];
			iArray[iZeroIndex] = iArray[iZeroIndex - 5];
			iArray[iZeroIndex - 5] = iTemp;
			break;

		case 5:
			return;

		default:
			continue;
		}

	}*/

#pragma endregion 숫자 옮기기
}