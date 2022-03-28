#include <iostream>
#include <time.h>     // 1970 어쩌고 사용

using namespace std;

void main(void)
{
	srand(unsigned(time(NULL)));
	int ire = 5 , iwin = 0, ilose = 0;

	while (ire)
	{
		int	iA = rand();
		int inumber = 0;

		cout << " 홀수인지 짝수인지 맞춰보세요. " << endl;
		cout << " 1. 홀수 , 2. 짝수 " << endl;
			cin >> inumber;
			if ((2 == inumber ) && (0 == iA % 2))
			{
				cout << " 정답입니다! " << endl;
				iwin++; 
			}
			else if ((1 == inumber) && (0 != iA % 2))
			{
				cout << " 정답입니다! " << endl;
				iwin++;
			}
			else
			{
				ilose++;
				cout << " 오답입니다! " << endl;
			}
			cout << " 랜덤한 숫자 : " << iA << endl;
			--ire;

			if (0 == ire)
			{
				cout << iwin << "승" << ilose << "패" << endl;
			}
	}


}