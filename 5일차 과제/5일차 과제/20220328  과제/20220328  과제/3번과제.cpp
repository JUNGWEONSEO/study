#include <iostream>
#include <time.h>     // 1970 ��¼�� ���

using namespace std;

void main(void)
{
	srand(unsigned(time(NULL)));
	int ire = 5 , iwin = 0, ilose = 0;

	while (ire)
	{
		int	iA = rand();
		int inumber = 0;

		cout << " Ȧ������ ¦������ ���纸����. " << endl;
		cout << " 1. Ȧ�� , 2. ¦�� " << endl;
			cin >> inumber;
			if ((2 == inumber ) && (0 == iA % 2))
			{
				cout << " �����Դϴ�! " << endl;
				iwin++; 
			}
			else if ((1 == inumber) && (0 != iA % 2))
			{
				cout << " �����Դϴ�! " << endl;
				iwin++;
			}
			else
			{
				ilose++;
				cout << " �����Դϴ�! " << endl;
			}
			cout << " ������ ���� : " << iA << endl;
			--ire;

			if (0 == ire)
			{
				cout << iwin << "��" << ilose << "��" << endl;
			}
	}


}