#include <iostream>

using namespace std;

void main(void)
{
	for (int i = 5; (0 < i); --i)                    //이중for문 쓸때 첫번째 for문이랑 두번째 for문이 뭘 나타내는지를 생각하고 쓰자
	{


		for (int j = 0; i > j; ++j)                 // i 는 층 j는 칸 느낌
		{

			cout << "*";
		}
		cout << endl;
	}

}








/*

*****
****
***
**
*

*/