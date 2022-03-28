#include <iostream>

using namespace std;

// 2. do while문을 이용하여 입력한 숫자 중 짝수일 때만 더하기하는 프로그램을 구현하라
//    -1을 누르면 반복문을 탈출 시키고, 짝수를 더한 총합을 출력하라

void main(void)
{
	int iNumber = 0, iNumber1 = 0; 

	do
	{
		cout << "숫자를 입력하세요 : ";
		cin >> iNumber1;

		if ((0 == iNumber1 % 2))
		{
			(iNumber = iNumber + iNumber1); 
		}


		else if (-1 == iNumber1 )
		{
			cout << iNumber << endl;
			break;
		}
		
		




	} while (true);
}