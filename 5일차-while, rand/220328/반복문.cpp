#include <iostream>
#include <time.h>

using namespace std;

void main(void)
{
	// �ݺ���

	// while, do while, for

#pragma region while ��
	// ������ true�� ��� �߰�ȣ ���� �ڵ带 �ݺ��Ѵ�.
	// �ݺ����� Ż�� �� �� �ִ� ������ ���� �ݺ��� ������ �� �ְ� �ؾ� �Ѵ�.

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

	continue;	// �ݵ�� �ݺ��� �ȿ����� ��� ����, �ٽ� ���� �ʱ�ȭ �������� ����������.

	cout << 2 << endl;
	}*/

#pragma endregion while ��

#pragma region do while��

	// ������ �� ���� �����ϴ� while ��

	/*int iNumber = 3;
	do 
	{
		cout << 1 << endl;
		/ *continue;
		cout << 2 << endl;* /

	} while (--iNumber);*/


#pragma endregion do while��	

#pragma region ���� �����

	
	//time_t TempTime = time(&TempTime);
	// ��ǻ���� ������ �ð� ������ 1970�� 1�� 1��

	//cout << TempTime << endl;
	srand(unsigned(time(NULL)));

	int	iA = rand();
	int	iB = rand();
	int	iC = rand();

	cout << iA << endl;
	cout << iB << endl;
	cout << iC << endl;

#pragma endregion ���� �����

}

// 1. while���� �̿��Ͽ� ������ 2~9�ܱ��� ����ϱ�

// 2. do while���� �̿��Ͽ� �Է��� ���� �� ¦���� ���� ���ϱ��ϴ� ���α׷��� �����϶�
//    -1�� ������ �ݺ����� Ż�� ��Ű��, ¦���� ���� ������ ����϶�

// 3. Ȧ¦������ �����϶�, ������ �̿��Ͽ� ���ڸ� �����ϰ� �� ���ڰ� Ȧ���� ¦���� �Ǹ��϶�.
//	 ������ �ټ��� �����ϰ�, �ټ��� ������ ����Ǹ� �� �� �� �и� ����϶�

// 4. ���� ���� �� ������ ������, ���� 1~3���� �� �ϳ��� �����Ͽ� ����ڰ� �Է��� ���ڿ� ���Ͽ� ��, ��, �и� ����϶�. �� �ټ��� �����Ѵ�.