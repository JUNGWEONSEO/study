#include <iostream>
#include <time.h>

using namespace std;

void main(void)
{
	// 반복문

	// while, do while, for

#pragma region while 문
	// 조건이 true인 경우 중괄호 안의 코드를 반복한다.
	// 반복문을 탈출 할 수 있는 조건을 만들어서 반복을 중지할 수 있게 해야 한다.

	//int		iNumber = 5;
	/*
	while (iNumber)
	{
	cout << 1 << endl;
	//--iNumber;
	//iNumber--;
	}*/

	/*while (true)
	{
	if (0 == iNumber)
	break;

	cout << 1 << endl;
	iNumber--;
	}*/

	/*int iNumber = 1;

	while (10 > iNumber)
	{
	cout << 2 <<  " * " << iNumber << " = " << 2 * iNumber << endl;
	iNumber++;
	}*/

	/*int	i = 1;

	while (true)
	{
	if (10 <= i)
	break;

	cout << 2 << " * " << i << " = " << 2 * i << endl;
	i++;
	}*/

	/*while (true)
	{
	cout << 1 << endl;

	continue;	// 반드시 반복문 안에서만 사용 가능, 다시 원래 초기화 구문으로 돌려보낸다.

	cout << 2 << endl;
	}*/

#pragma endregion while 문

#pragma region do while문

	// 무조건 한 번은 실행하는 while 문

	/*int iNumber = 3;
	do 
	{
		cout << 1 << endl;
		/ *continue;
		cout << 2 << endl;* /

	} while (--iNumber);*/


#pragma endregion do while문	

#pragma region 난수 만들기

	
	//time_t TempTime = time(&TempTime);
	// 컴퓨터의 최초의 시간 시작은 1970년 1월 1일

	//cout << TempTime << endl;
	srand(unsigned(time(NULL)));

	int	iA = rand();
	int	iB = rand();
	int	iC = rand();

	cout << iA << endl;
	cout << iB << endl;
	cout << iC << endl;

#pragma endregion 난수 만들기

}

// 1. while문을 이용하여 구구단 2~9단까지 출력하기

// 2. do while문을 이용하여 입력한 숫자 중 짝수일 때만 더하기하는 프로그램을 구현하라
//    -1을 누르면 반복문을 탈출 시키고, 짝수를 더한 총합을 출력하라

// 3. 홀짝게임을 구현하라, 난수를 이용하여 숫자를 추출하고 그 숫자가 홀인지 짝인지 판명하라.
//	 게임을 다섯판 진행하고, 다섯판 진행이 종료되면 몇 승 몇 패를 출력하라

// 4. 가위 바위 보 게임을 만들어라, 난수 1~3까지 중 하나를 생성하여 사용자가 입력한 숫자와 비교하여 승, 무, 패를 출력하라. 총 다섯판 진행한다.