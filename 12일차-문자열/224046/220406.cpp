#include <iostream>

using namespace std;

void main(void)
{
	// SBCS(single byte character set) : 1����Ʈ ����ü�踦 ���� �ý���
	// MBCS(multi byte character set) : 1����Ʈ�� 2����Ʈ ����ü�踦 ���� �ý���
	// WMBCS(wide byte character set) : 2����Ʈ ���ڷ� ���ս�Ų ü�踦 ���� �ý���

	// ���� : ''�� ����, �ƽ�Ű�ڵ� �� ���ڸ� �ǹ�
	// ���ڿ� : ""�� ����, 2����Ʈ �̻��� ���ڸ� �ǹ�
	// ex) "��", "HelloWorld"

	//char	szTemp[5] = { 'j', 'u', 's', 'i', 'n' };

	// '\0' = null����

	//int		iTemp = 10;

	//char	szTemp[6] = "jusin";		// ���ڿ� ���

	//char*	pTemp = "jusin";
	//cout << pTemp << endl;
	
	/*szTemp[2] = 'A';

	cout << szTemp[2] << endl;*/
	
	/*for (int i = 0; '\0' != szTemp[i]; ++i)
		cout << szTemp[i] << endl;*/
	
// 	for (int i = 0; i < 6; ++i)
// 	{
// 		cout << szTemp[i] << endl;
// 	}

	//char*	pArray[3] = { "jusin", "game", "academy" };

	/*for (int i = 0; i < 3; ++i)
		cout << pArray[i] << endl;*/

	// ���� �迭�� ���ڿ� ����� ������

	/*- �� �� ���ڿ��� ���� �ּҸ� ���� �ִٴ� ������ ������
	- ���� �迭�� ��� ���� �ϳ��ϳ��� �迭�� ���ҷ� ��� �ִ�
	- ���� �迭�� char* const p �� ���� ���� �����ϴ�.

	- ���ڿ� ����� ������ ����(��� �޸�)�� ��ϵ� ���ڿ��� ���� �ּҸ� �ǹ��Ѵ�.
	- ���ڿ� ����� const char* p�� ���� ����̴�.*/


	/*char	szName[32] = "";

	cin >> szName;
	cout << szName << endl;*/
#pragma region ���ڿ� �Լ�

	char	szName[32] = "jusin";
	char	szTemp[32] = "_academy";

	//szTemp = szName;

	// ���ڿ� ���� �Լ�
	
	// strcpy_s(char* ���� ���� ���� �迭�� �̸�, rsize_t ������� ������ �޸� ũ��, char const* ������ ���ڿ�);
	// strcpy_s(szTemp, sizeof(char) * 32, szName);
	//cout << szTemp << endl;

	// ���ڿ� ���� �Լ�
	// strcat_s(char*  ���� ��� ���� ���� �迭�� �̸�, rsize_t  ������ ���� ���ڿ��� ������ �޸� ������ ũ��, char const* ������ ���ڿ�);
	// strcat_s(szName, sizeof(char) * 32, szTemp);

	// ���ڿ� �� �Լ�
	// strcmp: ���� �� ���ڿ��� �Ű������� �־���, ���� �� ���ڿ��� ��ġ�ϸ� 0�� ��ȯ, �� ��ġ�ϸ� 1�� ��ȯ

	if (!strcmp(szName, szTemp))
		cout << "��ġ" << endl;
	
	else
		cout << "�� ��ġ" << endl;

	// ���ڿ� ���� ��ȯ �Լ� : null���ڸ� ������ ������ ���ڿ��� ���̸� ���Ͽ� ��ȯ�ϴ� �Լ�
	cout << strlen(szName) << endl;

#pragma endregion ���ڿ� �Լ�	

}

// 1. ���ڿ��� �Է� �ް� null���ڸ� ������ ������ ���ڿ��� ���̸� ���ϴ� �Լ��� ����ÿ�.(strlen �Լ��� ���� �����϶�)
// 2. ���ڿ� ������ �Լ� �����(ex : jusin -> nisuj)
