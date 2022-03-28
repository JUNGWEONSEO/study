#include <iostream>

using namespace std;

void main(void)
{
	float		fAver = 0.f;

	cout << "평균 점수를 입력하세요 : ";
	cin >> fAver;
	
	switch ((int)fAver / 10)
	{
	case 10:
	case 9:
		cout << "A학점" << endl;
		break;

	case 8:
		cout << "B학점" << endl;
		break;

	case 7:
		cout << "C학점" << endl;
		break;

	case 6:
		cout << "D학점" << endl;
		break;

	default:
		cout << "F학점" << endl;
		break;
	}



	/*if ((90.f <= fAver) && (100.f >= fAver))
	{
		cout << "A학점" << endl;
	}

	else if ((80.f <= fAver) && (90.f > fAver))
	{
		cout << "B학점" << endl;
	}

	else if ((70.f <= fAver) && (80 > fAver))
	{
		cout << "C학점" << endl;
	}

	else if ((60.f <= fAver) && (70 > fAver))
	{
		cout << "D학점" << endl;
	}
	else
		cout << "F학점" << endl;*/
}