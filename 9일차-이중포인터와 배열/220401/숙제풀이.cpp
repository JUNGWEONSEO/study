#include <iostream>

using namespace std;

#pragma region ���Ǳ� �����

/*
int		Input_Coin(void);
int		Draw_Menu(int _iCoin);
void	Update(void);

void main(void)
{
	Update();
}

int		Input_Coin(void)
{
	int		iMoney = 0;

	cout << "���� �־��ּ��� : ";
	cin >> iMoney;

	return iMoney;
}
int		Draw_Menu(int _iCoin)
{
	int		iInput = 0;

	cout << "������ : " << _iCoin << endl;
	cout << "==============================" << endl;
	cout << "1. �ݶ�(100��) 2. ���̴�(200��) 3. ȯŸ(300��) 4. ��ȯ : ";
	cin >> iInput;

	return iInput;
}

void	Update(void)
{
	bool	bCheck = true;

	int		iCoin = 0, iInput = 0;
	int		iCoke = 100, iCider = 200, iFanta = 300;

	iCoin = Input_Coin();

	while (bCheck)
	{
		system("cls");

		switch (Draw_Menu(iCoin))
		{
		case 1:
			if (iCoin >= iCoke)
			{
				cout << "�ݶ� ���� �Ϸ�" << endl;
				iCoin -= iCoke;
			}
			else
				cout << "�ܾ��� �����մϴ�" << endl;

			break;

		case 2:
			if (iCoin >= iCider)
			{
				cout << "���̴� ���� �Ϸ�" << endl;
				iCoin -= iCider;
			}
			else
				cout << "�ܾ��� �����մϴ�" << endl;
			break;

		case 3:
			if (iCoin >= iFanta)
			{
				cout << "ȯŸ ���� �Ϸ�" << endl;
				iCoin -= iFanta;
			}
			else
				cout << "�ܾ��� �����մϴ�" << endl;
			break;

		case 4:
			cout << "�ܾ��� " << iCoin << " �Դϴ�" << endl;
			bCheck = false;
			break;

		default:
			cout << "�߸� �����̽��ϴ�" << endl;
			break;
		}

		system("pause");
	}
}*/

#pragma endregion ���Ǳ� �����

#pragma region ���� ��ȯ

void	Swap(int _iTemp, int _iSour);
void	Swap(int* _pTemp, int* _pSour);

void main(void)
{
	int		iTemp = 10, iSour = 20;

	cout << iTemp << "\t" << iSour << endl;
	
	Swap(&iTemp, &iSour);		// call by value     : �� ���翡 ���� ȣ��
								// call by reference : �ּҰ� ������ ���� ȣ��
	cout << iTemp << "\t" << iSour << endl;
}

void	Swap(int _iTemp, int _iSour)
{
	int		iDest = 0;

	iDest = _iSour;
	_iSour = _iTemp;
	_iTemp = iDest;
}
void	Swap(int* _pTemp, int* _pSour)
{

	int		iDest = 0;

	iDest   = *_pSour;
	*_pSour = *_pTemp;
	*_pTemp = iDest;
}

#pragma endregion ���� ��ȯ

