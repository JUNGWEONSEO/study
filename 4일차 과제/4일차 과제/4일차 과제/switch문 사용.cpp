#include <iostream>

using namespace std;

void main(void)
{
	int iKor = 0, iEng = 0, iMath = 0, iTotal = 0;


	float fAvrg = 0.f;

	cout << "���� ������ �Է��ϼ��� : " << endl;
	cin >> iKor;

	cout << "���� ������ �Է��ϼ��� : " << endl;
	cin >> iEng;

	cout << "���� ������ �Է��ϼ��� : " << endl;
	cin >> iMath;

	iTotal = iKor + iEng + iMath;
	fAvrg = (float)iTotal / 3.f;

	cout << "�� ���� : " << iTotal << endl;
	cout << "��� ���� : " << fAvrg << endl;


	switch ((int)fAvrg/10)
	{
	case 10: case 9 :
		cout << "A���� �Դϴ�. " << endl;
		break;

	case 8:
		cout << "B���� �Դϴ�. " << endl;
		break;

	case 7:
		cout << "C���� �Դϴ�. " << endl;
		break;

	case 6:
		cout << "D���� �Դϴ�. " << endl;
		break;
		
	default : 
		cout << "F���� �Դϴ�." << endl;
		

	}
}