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
	for (int j = 0; j < 20; j++)
	{
		iDest = rand() % 9;
		iSour = rand() % 9;

		iSwap = iArray1[iDest];
		iArray1[iDest] = iArray1[iSour];
		iArray1[iSour] = iSwap;
	}




	for (int p = 0; p < 9; ++p)
	{
		cout << "1���� 9������ ���� �߿� 3�� �Է��ϼ���" << endl;
		cin >> iInput;
		cin >> iInput1;
		cin >> iInput2;
		system("cls");
		cout << "����� �Է��� ���� " << iInput << " " << iInput1 << " " << iInput2 << endl;
		int iStrike = 0, iBall = 0, iOut = 0;

		cout << p + 1 << "ȸ�� : ";
	

		for (int num = 0; num < 3; ++num)
		{

			iArray[num] = iArray1[num];

			
		}
		cout << iArray[0] << " " << iArray[1] << " " << iArray[2] << endl;

		if (iArray[0] == iInput)
		{
			iStrike++;
		}
		else if (iArray[0] == iInput1 || iArray[0] == iInput2)
		{
			iBall++;
		}
		else
			iOut++;
		if (iArray[1] == iInput1)
		{
			iStrike++;
		}
		else if (iArray[1] == iInput || iArray[1] == iInput2)
		{
			iBall++;
		}
		else
			iOut++;
		if (iArray[2] == iInput2)
		{
			iStrike++;
		}
		else if (iArray[2] == iInput || iArray[2] == iInput1)
		{
			iBall++;
		}
		else
			iOut++;
		cout << "->" << iStrike << "��Ʈ����ũ" << " " << iBall << "��" << " " << iOut << "�ƿ�" << endl;
		system("pause");
		system("cls");

		if (iStrike == 3)
		{
			cout << "�¸��ϼ̽��ϴ�!!!" << endl;
			break;
		}
		if (p == 8)
		{
			cout << "�й��ϼ̽��ϴ�!!!" << endl;
		}


	}
}