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

		for (int j = 0; j < 4; ++j)                                       //���� �ʿ����� ������ 2���ʿ��ѵ�  
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
	


//����for�� ���� ù��° for���̶� �ι�° for���� �� ��Ÿ�������� �����ϰ� ����
// i �� �� j�� ĭ ���� 4�����̰� 5�°���
//��4 ��1 ��3 ��2 ��2 ��3 ��1 ��4 ��5
//continue; - �ݺ����� ��ó������




/*
    *
   **
  ***
 ****
*****

*/
