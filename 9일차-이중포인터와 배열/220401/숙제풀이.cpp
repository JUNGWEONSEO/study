#include <iostream>

using namespace std;

#pragma region 자판기 만들기

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

	cout << "돈을 넣어주세요 : ";
	cin >> iMoney;

	return iMoney;
}
int		Draw_Menu(int _iCoin)
{
	int		iInput = 0;

	cout << "소지금 : " << _iCoin << endl;
	cout << "==============================" << endl;
	cout << "1. 콜라(100원) 2. 사이다(200원) 3. 환타(300원) 4. 반환 : ";
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
				cout << "콜라 구매 완료" << endl;
				iCoin -= iCoke;
			}
			else
				cout << "잔액이 부족합니다" << endl;

			break;

		case 2:
			if (iCoin >= iCider)
			{
				cout << "사이다 구매 완료" << endl;
				iCoin -= iCider;
			}
			else
				cout << "잔액이 부족합니다" << endl;
			break;

		case 3:
			if (iCoin >= iFanta)
			{
				cout << "환타 구매 완료" << endl;
				iCoin -= iFanta;
			}
			else
				cout << "잔액이 부족합니다" << endl;
			break;

		case 4:
			cout << "잔액은 " << iCoin << " 입니다" << endl;
			bCheck = false;
			break;

		default:
			cout << "잘못 누르셨습니다" << endl;
			break;
		}

		system("pause");
	}
}*/

#pragma endregion 자판기 만들기

#pragma region 숫자 교환

void	Swap(int _iTemp, int _iSour);
void	Swap(int* _pTemp, int* _pSour);

void main(void)
{
	int		iTemp = 10, iSour = 20;

	cout << iTemp << "\t" << iSour << endl;
	
	Swap(&iTemp, &iSour);		// call by value     : 값 복사에 의한 호출
								// call by reference : 주소값 참조에 의한 호출
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

#pragma endregion 숫자 교환

