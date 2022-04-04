#include <iostream>

using namespace std;

void main(void)
{
	// 배열의 이름은 배열 전체의 첫 번째 주소값이다.
	
	/*int		iArray[3] = { 1, 2, 3 };

	int*	p = iArray;

	cout << p[0] << endl;

	++p;

	cout << (*p) << endl;*/
	
	//cout << "배열의 이름 : " << iArray << endl;
	//cout << "0 번 배열의 주소 : " << (&iArray[0]) << endl;

	//*(iArray + 1) == iArray[1]

	/*cout << *(iArray) << endl;

	cout << *(iArray + 1) << endl;

	cout << *(iArray + 2) << endl;*/
	
	//iArray + 1;

	//cout << (*iArray) << endl;



#pragma region 2차원 배열

	int		iArray[2][3] = {

		{ 1, 2, 3 },	// 0행
		{ 4, 5, 6 }		// 1행
	};
	//	 0   1   2 		

	cout << iArray[1][1] << endl;


#pragma endregion 2차원 배열
}

// 1. 1~25 출력 숙제를 2차원 배열을 이용하여 출력해봐라
// 2. 2차원 배열을 이용하여 90도 시계방향으로 회전하는 4회전 상태 출력하기

/*
1	2	3			7	4	1			9	8	7			3	6	9			1	2	3
4	5	6	1회전 -> 8	5	2  2회전 ->	6	5	4 -> 3회전   2	5	8 -> 4회전	4	5	6
7	8	9			9	6	3			3	2	1			1	4	7			7	8	9*/

// 3. 야구 게임 만들기
/*
- 1~9까지 무작위 숫자 3개 추출, 단 정렬하지 말 것
- 숫자와 자리까지 맞추면 스트라이크, 숫자만 맞추면 볼
- 매 회 몇 스트라이크 몇 볼 출력
- 3 스트라이크일 경우 승리
- 9판 진행해서 못맞추면 패배

정답 : 5	 2 	8

1  2  3	 -> 1 스트라이크
2  4  8  -> 1 스트라이크 1볼
2  8  5  -> 3볼
*/


