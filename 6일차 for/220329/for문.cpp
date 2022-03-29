#include <iostream>

using namespace std;

void main(void)
{
#pragma region for문

	// for : 일반적으로 반복의 회수를 결정해놓고 반복을 실행하고자 할 때 사용하는 반복문

	/*for (초기화식 ; 조건식 ; 증감식 )
	{
	cout << 1 << endl;
	}*/

	//int	i = 100;

	/*for (int i = 0, j = 0; i < 3; ++i, ++j)
	{
	cout << i << endl;
	cout << j << endl;
	}*/

	/*cout << i << endl;

	{
	int a = 10;
	}
	{
	int a = 20;
	}*/


	/*for (int i = 1; i < 10; ++i)
	{
	cout << 2 << " * " << i << " = " << 2 * i << endl;
	}*/

#pragma endregion for문

#pragma region 2중 for문

	for (int i = 0; i < 2; ++i)
	{
		cout << 1 << endl;

		for (int j = 0; j < 3; ++j)
		{
			cout << 2 << endl;
		}

		cout << 3 << endl;
	}

#pragma endregion  2중 for문
	

}
/*
for문을 이용한 과제 

1. 구구단 2~9단 출력
2. 단과 곱을 입력 받아서 출력하기

5단 3곱

2 * 1 = 2
2 * 2 = 4
2 * 3 = 6 

3 * 1 = 3
3 * 2 = 6
3 * 3 = 9

4 * 1 = 4
4 * 2 = 8
4 * 3 = 12

5 * 1 = 5
5 * 2 = 10
5 * 3 = 15*/

/*
3. 별찍기

*
**
***
****
*****
/////////////////

*****
****
***
**
*
/////////////////

     *
	**
   ***
  ****
 *****

/////////////////

 *****
  ****
   ***
    **
	 *
/////////////////*/