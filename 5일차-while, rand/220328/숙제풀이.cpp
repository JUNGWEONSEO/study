#include <iostream>

using namespace std;

void main(void)
{
	float		fAver = 0.f;

	cout << "��� ������ �Է��ϼ��� : ";
	cin >> fAver;
	
	switch ((int)fAver / 10)
	{
	case 10:
	case 9:
		cout << "A����" << endl;
		break;

	case 8:
		cout << "B����" << endl;
		break;

	case 7:
		cout << "C����" << endl;
		break;

	case 6:
		cout << "D����" << endl;
		break;

	default:
		cout << "F����" << endl;
		break;
	}



	/*if ((90.f <= fAver) && (100.f >= fAver))
	{
		cout << "A����" << endl;
	}

	else if ((80.f <= fAver) && (90.f > fAver))
	{
		cout << "B����" << endl;
	}

	else if ((70.f <= fAver) && (80 > fAver))
	{
		cout << "C����" << endl;
	}

	else if ((60.f <= fAver) && (70 > fAver))
	{
		cout << "D����" << endl;
	}
	else
		cout << "F����" << endl;*/
}