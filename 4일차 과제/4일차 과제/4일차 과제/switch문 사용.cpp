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


	switch ((int)fAvrg/10)
	{
	case 10: case 9 :
		cout << "A학점 입니다. " << endl;
		break;

	case 8:
		cout << "B학점 입니다. " << endl;
		break;

	case 7:
		cout << "C학점 입니다. " << endl;
		break;

	case 6:
		cout << "D학점 입니다. " << endl;
		break;
		
	default : 
		cout << "F학점 입니다." << endl;
		

	}
}