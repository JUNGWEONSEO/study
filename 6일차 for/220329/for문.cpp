#include <iostream>

using namespace std;

void main(void)
{
#pragma region for��

	// for : �Ϲ������� �ݺ��� ȸ���� �����س��� �ݺ��� �����ϰ��� �� �� ����ϴ� �ݺ���

	/*for (�ʱ�ȭ�� ; ���ǽ� ; ������ )
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

#pragma endregion for��

#pragma region 2�� for��

	for (int i = 0; i < 2; ++i)
	{
		cout << 1 << endl;

		for (int j = 0; j < 3; ++j)
		{
			cout << 2 << endl;
		}

		cout << 3 << endl;
	}

#pragma endregion  2�� for��
	

}
/*
for���� �̿��� ���� 

1. ������ 2~9�� ���
2. �ܰ� ���� �Է� �޾Ƽ� ����ϱ�

5�� 3��

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
3. �����

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