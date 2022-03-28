#include <iostream>

using namespace std;

void main(void)
{
	//int	iInput = 0;
	//cin >> iInput;

	/*switch (iInput)
	{
		int		iTemp;

	case 1:
		iTemp = 100;
		cout << iTemp << endl;
		break;	

	case 2:	
		iTemp = 200;
		cout << iTemp << endl;
		break;
	
	}*/

	// goto : 선언한 레이블을 기준으로 실행할 것과 실행하지 않을 것을 구분하는 분기문
	// 기능 자체는 좋지만 코드의 흐름을 저해한다는 이유로 사용할 것을 권장하지 않음.
/*
	if(1)
		goto Home;

	if(1)
		goto Home;

	Home:
		cout << 2 << endl;*/


	// 삼항 연산자 : 단항, 이항 연산자와 동일한 비슷한 의미로 피 연산자가 3개인 연산자를 말한다.
	// 일반적으로 짧은 분기가 필요할 때 자주 사용되지만 코드가 복잡한 경우 사용하기가 까다롭다.

	// (조건식) ? (true일 때 실행 코드) : (false일 때 실행 코드)
	int	iNumber = 10, iNumber2 = 20;

	int iMax = (iNumber > iNumber2) ? iNumber : iNumber2;

	cout << iMax << endl;

}