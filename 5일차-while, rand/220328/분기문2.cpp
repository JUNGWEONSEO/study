#include <iostream>

using namespace std;

void main(void)
{
	//int	iInput = 0;
	//cin >> iInput;

	/*switch (iInput)
	{
		int		iTemp;

	case 1:
		iTemp = 100;
		cout << iTemp << endl;
		break;	

	case 2:	
		iTemp = 200;
		cout << iTemp << endl;
		break;
	
	}*/

	// goto : ������ ���̺��� �������� ������ �Ͱ� �������� ���� ���� �����ϴ� �б⹮
	// ��� ��ü�� ������ �ڵ��� �帧�� �����Ѵٴ� ������ ����� ���� �������� ����.
/*
	if(1)
		goto Home;

	if(1)
		goto Home;

	Home:
		cout << 2 << endl;*/


	// ���� ������ : ����, ���� �����ڿ� ������ ����� �ǹ̷� �� �����ڰ� 3���� �����ڸ� ���Ѵ�.
	// �Ϲ������� ª�� �бⰡ �ʿ��� �� ���� �������� �ڵ尡 ������ ��� ����ϱⰡ ��ٷӴ�.

	// (���ǽ�) ? (true�� �� ���� �ڵ�) : (false�� �� ���� �ڵ�)
	int	iNumber = 10, iNumber2 = 20;

	int iMax = (iNumber > iNumber2) ? iNumber : iNumber2;

	cout << iMax << endl;

}