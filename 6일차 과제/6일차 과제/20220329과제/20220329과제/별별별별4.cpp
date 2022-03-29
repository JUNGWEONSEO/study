#include <iostream>

using namespace std;

void main(void)
{
	for (int i = 0; i < 5 ; ++i)                    
	{
		if (i == 4)
		{
			cout << "*****" << endl;
			break;
		}

		for (int j = 0; j < 4; ++j)                                       //뭐가 필요한지 조건이 2개필요한데  
		{
			cout << " ";

			if (j == 3)
			{
				cout << "*" << endl;
				break;
			}

			if (i == 1 && j == 2)
			{
				cout << "**" << endl;
				break;
			}
			if (i == 2 && j == 1)
			{
				cout << "***" << endl;
				break;
			}
			if (i == 3 && j == 0)
			{
				cout << "****" << endl;
				break;
			}
			
		}
			
	}
	
		
		
}
	


//이중for문 쓸때 첫번째 for문이랑 두번째 for문이 뭘 나타내는지를 생각하고 쓰자
// i 는 층 j는 칸 느낌 4는참이고 5는거짓
//공4 별1 공3 별2 공2 별3 공1 별4 별5
//continue; - 반복문의 맨처음으로




/*
    *
   **
  ***
 ****
*****

*/
