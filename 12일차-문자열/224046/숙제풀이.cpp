#include <iostream>

using namespace std;

void main(void)
{
#pragma region ����

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

		cout << iBingo << " ����" << endl;

		if (5 <= iBingo)
		{
			cout << "�¸�!!!!!!!!" << endl;
			return;
		}

		cout << "���ڸ� �Է��ϼ��� : ";
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

		// ���η� *�� 5���� ���

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

		// ���η� *�� 5���� ���

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

		// ������ �밢��
		for (int i = 0; i < 5; ++i)
		{
			if (0 == iArray[i * 5 + i])
				++iCount;

			if (5 == iCount)
				++iBingo;
		}
		iCount = 0;

		// ���� �밢��
		for (int i = 0; i < 5; ++i)
		{
			if (0 == iArray[i * 4 + 4])
				++iCount;

			if (5 == iCount)
				++iBingo;
		}
		iCount = 0;
	}*/

#pragma endregion ����

#pragma region ���� �ű��

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

		cout << "���ڸ� �Է��ϼ���(2. �Ʒ� 4. ���� 6. ������ 8. ���� 5. ����) : ";
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

#pragma endregion ���� �ű��
}