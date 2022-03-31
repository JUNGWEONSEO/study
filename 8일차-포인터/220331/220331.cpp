#include <iostream>

using namespace std;

#pragma region Default 매개변수

// default 매개변수 : 만약 함수 호출 시점에 매개 변수에 값을 넣어주지 않으면 default로 초기화되어 있는 값으로 세팅되는 문법

// 1. 선언 시점에 초기화식을 사용하기 때문에 몸체 구현 시점에는 default 매개 변수 문법을 사용할 수 없다.
// 2. 맨 뒤쪽에 있는 변수부터 default 값을 설정 할 수 있다.
/*
void	Draw(int iA, int iB = 100);

void main(void)
{
	Draw(20);
}

void	Draw(int iA, int iB)
{
	cout << iA << "\t" << iB << endl;
}*/

#pragma endregion Default 매개변수

#pragma region 함수 오버로딩

// 함수 오버로딩 : 같은 이름의 함수가 있을 때 매개 변수의 형태에 따라 어떤 함수가 호출될 지 결정되는 문법

// 1. 매개 변수의 자료형에 따라서 결정
// 2. 매개 변수로 넣어주는 데이터의 개수에 따라서 결정
// 3. 반환 타입이 다른 것으로 함수 오버로딩은 성립하지 않는다.

/*
void	Render(void);			// 1
void	Render(int _iTemp);		// 2 
void	Render(float _fTemp);	// 3 
void	Render(int _iTemp, int _iSour/ * = 100* /);	// 4 // default 매개 변수로 인해 인자값의 개수가 불분명해지면 오버로딩이 성립하지 않는다
//int		Render(int _iTemp);		// 5

void main(void)
{
	Render(10);
}

void	Render(void)
{
	cout << "Hello" << endl;
}
void	Render(int _iTemp)
{
	cout << "정수 값" << endl;
	cout << _iTemp << endl;
}
void	Render(float _fTemp)
{
	cout << "실수 값" << endl;
	cout << _fTemp << endl;
}
void	Render(int _iTemp, int _iSour)
{
	cout << "정수 두 개" << endl;
	cout << _iTemp << "\t" << _iSour << endl;
}*/
/*
int		Render(int _iTemp)
{
	cout << "반환 값" << endl;

	return _iTemp;
}
*/

#pragma endregion 함수 오버로딩

#pragma region 재귀 함수

/*
int	Factorial(int iNumber);

void main(void)
{
	//5 *  4*  3 * 2 * 1

	cout << Factorial(100) << endl;
}

int	Factorial(int iNumber)
{
	if (0 == iNumber)
		return 1;

	return iNumber * Factorial(iNumber - 1);
}*/

#pragma endregion 재귀 함수


#pragma region 포인터

void main(void)
{
	// 포인터 선언 방식

	// int		*p;
	// int  *  p;
	// int*	p;				// int형 포인터 p를 선언했다.

	/*int		a = 10;
	int		b = 30;
	int*	p = nullptr;	// null 또는 nullptr는 포인터가 쓰레기 값을 갖지 않도록 0으로 초기화하는 문법

	// cout << (&a) << endl;	// address 연산자 : 변수 이름 앞에 붙을 경우 주소값을 추출해주는 연산자

	////////////////////////////////////////////////////////////////////////////
	p = &a;			// int형 포인터 p는 int 형 변수의 주소 값을 저장하는 용도의 변수이다.
	////////////////////////////////////////////////////////////////////////////

	*p = 20;
	// *(0x01) = 20;

	cout << a << "\t" << b << endl;

	p = &b;

	*p = 40;

	cout << a << "\t" << b << endl;*/	
		
	//cout << (&a) << endl;
	//cout << p << endl;


	// cout << sizeof(p) << endl;
	//cout << p << endl;


}


#pragma endregion 포인터

// 1. 자판기 게임(함수로 만들기)
// 소지금을 입력받는다.
// 콜라, 사이다, 환타 중 구매를 할 수 있다.
// 소지금이 음료수 가격보다 적으면 소지금이 부족합니다 라는 메세지 띄우면서 잔액을 출력 후 종료

// 2. 함수와 포인터를 이용하여 다음의 출력 결과를 만들어 오시오(swap의 개념을 이용할 것)
 
/*
int		a = 10, b = 20;

cout << a << "\t" << b << endl;			// 10		20

		어떤 함수();

cout << a << "\t" << b << endl;	*/		// 20		10