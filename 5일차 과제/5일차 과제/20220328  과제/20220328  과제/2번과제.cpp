#include <iostream>

using namespace std;

// 2. do while���� �̿��Ͽ� �Է��� ���� �� ¦���� ���� ���ϱ��ϴ� ���α׷��� �����϶�
//    -1�� ������ �ݺ����� Ż�� ��Ű��, ¦���� ���� ������ ����϶�

void main(void)
{
	int iNumber = 0, iNumber1 = 0; 

	do
	{
		cout << "���ڸ� �Է��ϼ��� : ";
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