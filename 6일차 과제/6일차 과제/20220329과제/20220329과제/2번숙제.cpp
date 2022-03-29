#include <iostream>

using namespace std;
/*2. 단과 곱을 입력 받아서 출력하기

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

void main(void)
{
	int iInput = 0, iInput1 = 0;
	cout << "단을 입력하세요 : ";
	cin >> iInput;
	cout << "곱을 입력하세요 : ";                 //  초기화식 - 조건식 - 코드실행 - 증감식!
	cin >> iInput1;
	for (int i  = 2; i <= iInput ; ++i)
	{ 
		for (int j = 1; j <= iInput1; ++j)
		{

			cout << i << "*" << j << "=" << i*j << endl;
			


		}
		
		 
		cout << "===============================" << endl;
	}
}