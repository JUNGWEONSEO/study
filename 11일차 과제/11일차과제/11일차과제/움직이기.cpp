#include <iostream>

using namespace std;

void main(void)
{
	int iArray[25] = {};
	int check = 1;
	int iInput = 0;
	int k = 0;

	for (int i = 0; i < 25; ++i)
	{
		iArray[i] = i;

	}


	while (check)
	{

		
		
		int iTemp2 = 0;
		int iTemp4 = 0;
		int iTemp6 = 0;
		int iTemp8 = 0;
			for (int i = 0; i < 5; ++i)		// ���� ��Ģ
			{
				for (int j = 0; j < 5; ++j)	// ���� ��Ģ
				{
					int		iIndex = i * 5 + j;

					cout << iArray[iIndex] << " ";
				}
				cout << endl;
			}
			cout << "������ �Է��ϼ��� : 2. �Ʒ� , 4 ���� , 6 ������ , 8 ���� , 10 ���� ����." << endl;
			cin >> iInput;
			switch (iInput)
			{
				

		case 2:
			if (k < 25 && k > 19)
			{
				cout << "���̻� �������� ������." << endl;
				system("pause");
				break;
			}
			iTemp2 = iArray[k];
			iArray[k] = iArray[k + 5];
			iArray[k + 5] = iTemp2;
			k = k + 5;
			break;
		case 4:
			if (k % 5 == 0)
			{
				cout << "���̻� �������� ������." << endl;
				system("pause");
				break;
			}
			iTemp4 = iArray[k];
			iArray[k] = iArray[k - 1];
			iArray[k - 1] = iTemp4;
			k = k - 1;
			break;
		case 6:
			if (k == 4 || k == 9 || k == 14 || k == 19 || k == 24)
			{
				cout << "���̻� �������� ������." << endl;
				system("pause");
				break;
			}
			iTemp6 = iArray[k];
			iArray[k] = iArray[k + 1];
			iArray[k + 1] = iTemp6;
			k = k + 1;
			
			break;

		case 8:
			if (k < 5)
			{
				cout << "���̻� �������� ������." << endl;
				system("pause");
				break;
			}
			iTemp8 = iArray[k];
			iArray[k] = iArray[k - 5];
			iArray[k - 5] = iTemp8;
			k = k - 5;
			break;

		case 10 :


			--check;

				




		}
			system("cls");
	}
}

