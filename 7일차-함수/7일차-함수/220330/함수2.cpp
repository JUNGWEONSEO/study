#include <iostream>

using namespace std;

#pragma region �Լ��� ���� ����
/*

//��ȯ Ÿ��	�Լ��̸�		�Ű�����
void		Render(void);                               //��ȯŸ�Ե� ���� �Ű������� ���� Ÿ�� (�ٸ���)
void		Draw(int _iTemp);                           //��ȯŸ���� ���� �Ű������� �ִ� Ÿ�� (���°� �ְ� �����°� ����)  ** ��ȯŸ���� ������ �ݵ�� ������ �־����!!
int			Get_Sour(void);                             //��ȯŸ���� �ְ� �Ű������� ���� Ÿ�� (���°� ���� �����°� �ְ�)
int			Add(int _iA, int _iB);                      //��ȯŸ�Ե� �ְ� �Ű������� �ִ� Ÿ�� (�Ѵ�����)
                                                        // �Ű����� �ù��ּҶ���� �޾ƾ��� ������ �־���ϴϱ�  
														
														**�Լ��� ���ؼ� ���� ���� ������Ҷ�... �Ű����� ������ �־����
                                                         //�ܼ��� ����� �Ҷ� ������ ����ϰ�������� �Ű�����
void main(void)		// �Լ��� �����
{
	// �Լ� : �����͸� ����� ����� ����, �ڵ��� ������ ���� ����� ����

	//Render();	// �Լ��̸�(�Լ� ȣ�� ������) -> �Լ��� ȣ���ϴ�               
	//Render();
	//Render();

	//int	iTest = 100;
	// Draw(iTest);

	int		iResult = Get_Sour();

	/ *cout << iResult << endl;
	cout << Get_Sour() << endl;
	Draw(Get_Sour());* /

	cout << Add(Get_Sour(), 300) << endl;

}	// �Լ� ��ü, ���Ǻ�

void Render(void)
{
	cout << "Hello" << endl;
}
void		Draw(int _iTemp)
{
	cout << _iTemp << endl;
}
int			Get_Sour(void)
{
	int		iSour = 5000;

	return iSour;
}
int			Add(int _iA, int _iB)
{
	return _iA + _iB;
}*/

#pragma endregion �Լ��� ���� ����

#pragma region �޸𸮿� ���� ����

int		iGlobal = 100;		// ���� ����(Data ����)
//int		iNumber = 60000;

void	Render(void);
void	Draw(int _iTemp);
void	Global(void);
void	Print(void);

void	Func(void)
{
	cout << "���" << endl;

	return;

	cout << "����" << endl;
}


void main(void)
{
	/*Render();
	Render();
	Render();*/

	/*Draw(10);
	Draw(10);
	Draw(10);*/

	/*Global();
	Global();
	Global();*/

	//Print();
	//Print();
	//Print();

	//iNumber = 400;

	return;

	Func();
}

void	Render(void)
{
	int		iTemp = 10;		// ��������(stack)

	cout << (++iTemp) << endl;
	//cout << iGlobal << endl;	// ���� ������ �� ���� ���� �ȿ��� � �Լ������� �� �̸��� ����� �� �ִ�.
}

void	Print(void)
{
	static int	iNumber = 10;	// ��������(Data ����)

	cout << (++iNumber) << endl;
	//cout << iNumber << endl;
}

void	Draw(int _iTemp)	// �Ű�����(stack)
{
	cout << (++_iTemp) << endl;
}

void	Global(void)
{
	// cout << iTemp << endl; Render�Լ� ������ ���������̱� ������ �ٸ� ������ Global �Լ������� �� �̸��� �� ���� ����.
	cout << (++iGlobal) << endl;
}


#pragma endregion �޸𸮿� ���� ����

