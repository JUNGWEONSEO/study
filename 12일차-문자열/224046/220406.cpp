#include <iostream>

using namespace std;

void main(void)
{
	// SBCS(single byte character set) : 1바이트 문자체계를 가진 시스템
	// MBCS(multi byte character set) : 1바이트와 2바이트 문자체계를 가진 시스템
	// WMBCS(wide byte character set) : 2바이트 문자로 통합시킨 체계를 가진 시스템

	// 문자 : ''로 묶음, 아스키코드 한 글자를 의미
	// 문자열 : ""로 묶음, 2바이트 이상의 글자를 의미
	// ex) "ㄱ", "HelloWorld"

	//char	szTemp[5] = { 'j', 'u', 's', 'i', 'n' };

	// '\0' = null문자

	//int		iTemp = 10;

	//char	szTemp[6] = "jusin";		// 문자열 상수

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

	// 문자 배열과 문자열 상수의 차이점

	/*- 둘 다 문자열의 시작 주소를 갖고 있다는 측면은 동일함
	- 문자 배열의 경우 문자 하나하나를 배열의 원소로 담고 있다
	- 문자 배열은 char* const p 와 같은 경우와 동일하다.

	- 문자열 상수는 데이터 영역(상수 메모리)에 등록된 문자열의 시작 주소를 의미한다.
	- 문자열 상수는 const char* p와 같연 경우이다.*/


	/*char	szName[32] = "";

	cin >> szName;
	cout << szName << endl;*/
#pragma region 문자열 함수

	char	szName[32] = "jusin";
	char	szTemp[32] = "_academy";

	//szTemp = szName;

	// 문자열 복사 함수
	
	// strcpy_s(char* 복사 받을 문자 배열의 이름, rsize_t 복사받을 공간의 메모리 크기, char const* 복사할 문자열);
	// strcpy_s(szTemp, sizeof(char) * 32, szName);
	//cout << szTemp << endl;

	// 문자열 결합 함수
	// strcat_s(char*  최종 결과 값을 가진 배열의 이름, rsize_t  결합이 끝난 문자열을 저장할 메모리 공간의 크기, char const* 결합할 문자열);
	// strcat_s(szName, sizeof(char) * 32, szTemp);

	// 문자열 비교 함수
	// strcmp: 비교할 두 문자열을 매개변수로 넣어줌, 만약 두 문자열이 일치하면 0을 반환, 불 일치하면 1을 반환

	if (!strcmp(szName, szTemp))
		cout << "일치" << endl;
	
	else
		cout << "불 일치" << endl;

	// 문자열 길이 반환 함수 : null문자를 제외한 순수한 문자열의 길이를 구하여 반환하는 함수
	cout << strlen(szName) << endl;

#pragma endregion 문자열 함수	

}

// 1. 문자열을 입력 받고 null문자를 제외한 순수한 문자열의 길이를 구하는 함수를 만드시오.(strlen 함수를 직접 구현하라)
// 2. 문자열 뒤집기 함수 만들기(ex : jusin -> nisuj)
