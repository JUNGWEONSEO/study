#include <iostream>
#include <time.h>

using namespace std;

void main(void)
{
#pragma region ������

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
	
#pragma endregion ������

#pragma region ¦�� ���ϱ�

	/*int	iEvenSum = 0, iInput = 0;
	int iOddSum = 0;

	do 
	{
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> iInput;

		if (0 == iInput % 2)
			iEvenSum += iInput;

		else if (0 != iInput % 2)
			iOddSum += iInput;


	} while (-1 != iInput);

	cout << "¦���� �� : " << iEvenSum << endl;
	cout << "Ȧ���� �� : " << iOddSum << endl;*/

#pragma endregion ¦�� ���ϱ�

#pragma region Ȧ¦ �����

	/*srand(unsigned(time(NULL)));

	int		iRand = 0, iCount = 5;
	int		iWin  = 0, iLose = 0;
	bool	bCheck = true;
	int		iInput = 0;
	
	while ((0 < iCount) && (true == bCheck))
	{
		system("cls");
		iRand = rand() % 2 + 1;
		cout << iCount << "ȸ ���ҽ��ϴ�" << endl;
		cout << "1. Ȧ 2. ¦ 3. ���� : ";
		cin >> iInput;

		if (1 == iInput)
		{
			if (1 == iRand)
			{
				cout << "��ǻ�� : Ȧ" << endl;
				cout << "����� : Ȧ" << endl;
				cout << "����!!!!" << endl;
				iWin++;
			}
			else
			{
				cout << "��ǻ�� : ¦" << endl;
				cout << "����� : Ȧ" << endl;
				cout << "����...." << endl;
				iLose++;
			}
		}

		else if (2 == iInput)
		{
			if (1 == iRand)
			{
				cout << "��ǻ�� : Ȧ" << endl;
				cout << "����� : ¦" << endl;
				cout << "����...." << endl;
				iLose++;
			}
			else
			{
				cout << "��ǻ�� : ¦" << endl;
				cout << "����� : ¦" << endl;
				cout << "����!!!!" << endl;
				iWin++;
			}
		}
		else if (3 == iInput)
		{
			bCheck = false;
		}
		else
		{
			cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
			continue;
		}

		--iCount;
		system("pause");
	}

	cout << "�� : " << iWin << "\t�� : " << iLose << endl;*/


#pragma endregion Ȧ¦ �����

#pragma region ���������� ����

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

		cout << iCount << "ȸ ���ҽ��ϴ�" << endl;
		cout << "1. ���� 2. ���� 3. �� 4. ���� : ";
		cin >> iInput;
		cout << "==========================" << endl;

		switch (iInput)
		{
		case 1: // �÷��̾ ������ ���� ��
			if(1 == iComputer)
			{
				cout << "��ǻ�� : ����" << endl;
				cout << "����� : ����" << endl;
				cout << "���º�" << endl;
				++iDraw;
			}
			else if (2 == iComputer)
			{
				cout << "��ǻ�� : ����" << endl;
				cout << "����� : ����" << endl;
				cout << "�й�" << endl;
				++iLose;
			}
			else
			{
				cout << "��ǻ�� : ��" << endl;
				cout << "����� : ����" << endl;
				cout << "�¸�" << endl;
				++iWin;
			}

			break;

		case 2: // �÷��̾� ���� ���� ��
			if (1 == iComputer)
			{
				cout << "��ǻ�� : ����" << endl;
				cout << "����� : ����" << endl;
				cout << "�¸�" << endl;
				++iWin;
			}
			else if (2 == iComputer)
			{
				cout << "��ǻ�� : ����" << endl;
				cout << "����� : ����" << endl;
				cout << "���º�" << endl;
				++iDraw;
			}
			else
			{
				cout << "��ǻ�� : ��" << endl;
				cout << "����� : ����" << endl;
				cout << "�й�" << endl;
				++iLose;
			}

			break;

		case 3:
			if (1 == iComputer)
			{
				cout << "��ǻ�� : ����" << endl;
				cout << "����� : ��" << endl;
				cout << "�й�" << endl;
				++iLose;
			}
			else if (2 == iComputer)
			{
				cout << "��ǻ�� : ����" << endl;
				cout << "����� : ��" << endl;
				cout << "�¸�" << endl;
				++iWin;
			}
			else
			{
				cout << "��ǻ�� : ��" << endl;
				cout << "����� : ��" << endl;
				cout << "���º�" << endl;
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

	cout << "�� : " << iWin << "\t�� : " << iDraw << "\t�� : " << iLose << endl;*/ 

#pragma endregion ���������� ����

}