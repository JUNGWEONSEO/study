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

	if (fAvrg >= 90 && fAvrg <= 100)
	{

		cout << " A ���� �Դϴ�. " << endl;

	}

	else if (fAvrg >= 80 && fAvrg < 90)
	{
		cout << " B ���� �Դϴ�. " << endl;
	}

	else if (fAvrg >= 70 && fAvrg < 80)
	{
		cout << " C ���� �Դϴ�. " << endl;
	}

	else if (fAvrg >= 60 && fAvrg < 70)
	{
		cout << " D ���� �Դϴ�. " << endl;
	}

	else

		cout << " F ���� �Դϴ�. " << endl;
}

//switch(