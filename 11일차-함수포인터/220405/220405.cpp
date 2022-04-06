#include <iostream>

using namespace std;

void	Render(void);
int		Add(int iA, int iB);
int		Min(int iA, int iB);
int		Mul(int iA, int iB);
int		Div(int iA, int iB);

void main(void)
{
	int		iArray[3] = {};

	int*	p = iArray;


	int	iTemp[2][3] = { { 1, 2, 3}, {4, 5, 6} };

	int* p2 = iTemp[0];
		 p2 = iTemp[1];

	// 2차원 배열의 포인턴 연산은 열의 크기만큼 증가한다.
	//cout << (*iTemp) << endl;
	//cout << *(iTemp + 1) << endl;
	
	// 2차원 배열의 이름은 2중 포인터에 값을 저장할 수 있다?
	// int*	p3 = iTemp; //  2차원 배열의 이름은 배열의 특성을 갖고 있을 뿐 일반 포인터가 아니다!
	// int** pp = iTemp;	//  2차원 배열의 이름은 배열의 특성을 갖고 있을 뿐 2중 포인터가 아니다!

#pragma region 2차원 배열의 포인터 형

// 자료형(*변수명)[열]
// int(*pArr)[3] = iTemp;
// cout << pArr[1][1] << endl;
 
#pragma endregion 2차원 배열의 포인터 형

#pragma region 함수 포인터

// 함수 포인터의 선언 방식

// 타입(*변수명)(인자)
void(*pRender)(void) = Render;
//int(*ptr)(int, int) = NULL;

// cout << pAdd(10, 20) << endl;
// pRender();
//	Render();

int	iDest = 0, iSour = 0;
int iInput = 0, iResult = 0;
int(*ptr[4])(int, int) = { Add, Min, Mul, Div };

cout << "두 숫자를 입력하세요 : ";
cin >> iDest >> iSour;

cout << "메뉴를 고르세요(1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈) : ";
cin >> iInput;

cout << "결과 : " << ptr[iInput - 1](iDest, iSour) << endl;

/*
switch (iInput)
{
case 1:
	iResult = Add(iDest, iSour);
	break;

case 2:
	iResult = Min(iDest, iSour);
	break;

case 3:
	iResult = Mul(iDest, iSour);
	break;

case 4:
	iResult = Div(iDest, iSour);
	break;
}*/

/*
switch (iInput)
{
case 1:
	ptr = Add;
	break;

case 2:
	ptr = Min;
	break;

case 3:
	ptr = Mul;
	break;

case 4:
	ptr = Div;
	break;
}

cout << "결과 : " << ptr(iDest, iSour) << endl;*/


#pragma endregion 함수 포인터
	

}
void	Render(void)
{
	cout << "hello" << endl;
}
int		Add(int iA, int iB)
{
	return iA + iB;
}
int		Min(int iA, int iB)
{
	return iA - iB;
}

int		Mul(int iA, int iB)
{
	return iA * iB;
}
int		Div(int iA, int iB)
{
	return iA / iB;
}

// 1. 5 * 5 배열을 이용하여 빙고 게임 만들기
// 2. 숫자 0을 이동시키기(2. 아래 4. 왼쪽 6. 오른쪽 8. 위)

/*
	0	5	2	3	4
	6	1	7	8	9
	10	11	12	13	14
	15	16	17	18	19
	20	21	22	23	24	*/	

