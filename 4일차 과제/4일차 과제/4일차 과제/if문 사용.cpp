#include <iostream>

using namespace std;

void main(void)
{
	int iKor = 0, iEng = 0, iMath = 0, iTotal = 0;


	float fAvrg = 0.f;

	cout << "국어 점수를 입력하세요 : " << endl;
	cin >> iKor;

	cout << "영어 점수를 입력하세요 : " << endl;
	cin >> iEng;

	cout << "수학 점수를 입력하세요 : " << endl;
	cin >> iMath;

	iTotal = iKor + iEng + iMath;
	fAvrg = (float)iTotal / 3.f;

	cout << "총 점수 : " << iTotal << endl;
	cout << "평균 점수 : " << fAvrg << endl;

	if (fAvrg >= 90 && fAvrg <= 100)
	{

		cout << " A 학점 입니다. " << endl;

	}

	else if (fAvrg >= 80 && fAvrg < 90)
	{
		cout << " B 학점 입니다. " << endl;
	}

	else if (fAvrg >= 70 && fAvrg < 80)
	{
		cout << " C 학점 입니다. " << endl;
	}

	else if (fAvrg >= 60 && fAvrg < 70)
	{
		cout << " D 학점 입니다. " << endl;
	}

	else

		cout << " F 학점 입니다. " << endl;
}

//switch(