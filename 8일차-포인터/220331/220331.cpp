#include <iostream>

using namespace std;

#pragma region Default �Ű�����

// default �Ű����� : ���� �Լ� ȣ�� ������ �Ű� ������ ���� �־����� ������ default�� �ʱ�ȭ�Ǿ� �ִ� ������ ���õǴ� ����

// 1. ���� ������ �ʱ�ȭ���� ����ϱ� ������ ��ü ���� �������� default �Ű� ���� ������ ����� �� ����.
// 2. �� ���ʿ� �ִ� �������� default ���� ���� �� �� �ִ�.
/*
void	Draw(int iA, int iB = 100);

void main(void)
{
	Draw(20);
}

void	Draw(int iA, int iB)
{
	cout << iA << "\t" << iB << endl;
}*/

#pragma endregion Default �Ű�����

#pragma region �Լ� �����ε�

// �Լ� �����ε� : ���� �̸��� �Լ��� ���� �� �Ű� ������ ���¿� ���� � �Լ��� ȣ��� �� �����Ǵ� ����

// 1. �Ű� ������ �ڷ����� ���� ����
// 2. �Ű� ������ �־��ִ� �������� ������ ���� ����
// 3. ��ȯ Ÿ���� �ٸ� ������ �Լ� �����ε��� �������� �ʴ´�.

/*
void	Render(void);			// 1
void	Render(int _iTemp);		// 2 
void	Render(float _fTemp);	// 3 
void	Render(int _iTemp, int _iSour/ * = 100* /);	// 4 // default �Ű� ������ ���� ���ڰ��� ������ �Һи������� �����ε��� �������� �ʴ´�
//int		Render(int _iTemp);		// 5

void main(void)
{
	Render(10);
}

void	Render(void)
{
	cout << "Hello" << endl;
}
void	Render(int _iTemp)
{
	cout << "���� ��" << endl;
	cout << _iTemp << endl;
}
void	Render(float _fTemp)
{
	cout << "�Ǽ� ��" << endl;
	cout << _fTemp << endl;
}
void	Render(int _iTemp, int _iSour)
{
	cout << "���� �� ��" << endl;
	cout << _iTemp << "\t" << _iSour << endl;
}*/
/*
int		Render(int _iTemp)
{
	cout << "��ȯ ��" << endl;

	return _iTemp;
}
*/

#pragma endregion �Լ� �����ε�

#pragma region ��� �Լ�

/*
int	Factorial(int iNumber);

void main(void)
{
	//5 *  4*  3 * 2 * 1

	cout << Factorial(100) << endl;
}

int	Factorial(int iNumber)
{
	if (0 == iNumber)
		return 1;

	return iNumber * Factorial(iNumber - 1);
}*/

#pragma endregion ��� �Լ�


#pragma region ������

void main(void)
{
	// ������ ���� ���

	// int		*p;
	// int  *  p;
	// int*	p;				// int�� ������ p�� �����ߴ�.

	/*int		a = 10;
	int		b = 30;
	int*	p = nullptr;	// null �Ǵ� nullptr�� �����Ͱ� ������ ���� ���� �ʵ��� 0���� �ʱ�ȭ�ϴ� ����

	// cout << (&a) << endl;	// address ������ : ���� �̸� �տ� ���� ��� �ּҰ��� �������ִ� ������

	////////////////////////////////////////////////////////////////////////////
	p = &a;			// int�� ������ p�� int �� ������ �ּ� ���� �����ϴ� �뵵�� �����̴�.
	////////////////////////////////////////////////////////////////////////////

	*p = 20;
	// *(0x01) = 20;

	cout << a << "\t" << b << endl;

	p = &b;

	*p = 40;

	cout << a << "\t" << b << endl;*/	
		
	//cout << (&a) << endl;
	//cout << p << endl;


	// cout << sizeof(p) << endl;
	//cout << p << endl;


}


#pragma endregion ������

// 1. ���Ǳ� ����(�Լ��� �����)
// �������� �Է¹޴´�.
// �ݶ�, ���̴�, ȯŸ �� ���Ÿ� �� �� �ִ�.
// �������� ����� ���ݺ��� ������ �������� �����մϴ� ��� �޼��� ���鼭 �ܾ��� ��� �� ����

// 2. �Լ��� �����͸� �̿��Ͽ� ������ ��� ����� ����� ���ÿ�(swap�� ������ �̿��� ��)
 
/*
int		a = 10, b = 20;

cout << a << "\t" << b << endl;			// 10		20

		� �Լ�();

cout << a << "\t" << b << endl;	*/		// 20		10