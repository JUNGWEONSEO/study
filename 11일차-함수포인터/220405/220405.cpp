#include <iostream>

using namespace std;

void	Render(void);
int		Add(int iA, int iB);
int		Min(int iA, int iB);
int		Mul(int iA, int iB);
int		Div(int iA, int iB);

void main(void)
{
	int		iArray[3] = {};

	int*	p = iArray;


	int	iTemp[2][3] = { { 1, 2, 3}, {4, 5, 6} };

	int* p2 = iTemp[0];
		 p2 = iTemp[1];

	// 2���� �迭�� ������ ������ ���� ũ�⸸ŭ �����Ѵ�.
	//cout << (*iTemp) << endl;
	//cout << *(iTemp + 1) << endl;
	
	// 2���� �迭�� �̸��� 2�� �����Ϳ� ���� ������ �� �ִ�?
	// int*	p3 = iTemp; //  2���� �迭�� �̸��� �迭�� Ư���� ���� ���� �� �Ϲ� �����Ͱ� �ƴϴ�!
	// int** pp = iTemp;	//  2���� �迭�� �̸��� �迭�� Ư���� ���� ���� �� 2�� �����Ͱ� �ƴϴ�!

#pragma region 2���� �迭�� ������ ��

// �ڷ���(*������)[��]
// int(*pArr)[3] = iTemp;
// cout << pArr[1][1] << endl;
 
#pragma endregion 2���� �迭�� ������ ��

#pragma region �Լ� ������

// �Լ� �������� ���� ���

// Ÿ��(*������)(����)
void(*pRender)(void) = Render;
//int(*ptr)(int, int) = NULL;

// cout << pAdd(10, 20) << endl;
// pRender();
//	Render();

int	iDest = 0, iSour = 0;
int iInput = 0, iResult = 0;
int(*ptr[4])(int, int) = { Add, Min, Mul, Div };

cout << "�� ���ڸ� �Է��ϼ��� : ";
cin >> iDest >> iSour;

cout << "�޴��� ������(1. ���� 2. ���� 3. ���� 4. ������) : ";
cin >> iInput;

cout << "��� : " << ptr[iInput - 1](iDest, iSour) << endl;

/*
switch (iInput)
{
case 1:
	iResult = Add(iDest, iSour);
	break;

case 2:
	iResult = Min(iDest, iSour);
	break;

case 3:
	iResult = Mul(iDest, iSour);
	break;

case 4:
	iResult = Div(iDest, iSour);
	break;
}*/

/*
switch (iInput)
{
case 1:
	ptr = Add;
	break;

case 2:
	ptr = Min;
	break;

case 3:
	ptr = Mul;
	break;

case 4:
	ptr = Div;
	break;
}

cout << "��� : " << ptr(iDest, iSour) << endl;*/


#pragma endregion �Լ� ������
	

}
void	Render(void)
{
	cout << "hello" << endl;
}
int		Add(int iA, int iB)
{
	return iA + iB;
}
int		Min(int iA, int iB)
{
	return iA - iB;
}

int		Mul(int iA, int iB)
{
	return iA * iB;
}
int		Div(int iA, int iB)
{
	return iA / iB;
}

// 1. 5 * 5 �迭�� �̿��Ͽ� ���� ���� �����
// 2. ���� 0�� �̵���Ű��(2. �Ʒ� 4. ���� 6. ������ 8. ��)

/*
	0	5	2	3	4
	6	1	7	8	9
	10	11	12	13	14
	15	16	17	18	19
	20	21	22	23	24	*/	

