#include <iostream>

using namespace std;

void main(void)
{
#pragma region 포인터 연산

	/*int	iTemp = 10, iSour = 20, iDest = 30;

	cout << &iTemp << endl;
	cout << &iSour << endl;
	cout << &iDest << endl;

	int*	p = &iTemp;

	//cout << (*p) << endl;

	cout << (*p) << endl;

	++p;		// 포인터 연산 : 현재 주소에서 자료형의 크기만큼 메모리 이동하는 연산

	cout << (*p) << endl;

	++p;

	cout << (*p) << endl;*/

#pragma endregion 포인터 연산

#pragma region 상수와 포인터

	//const int	iA = 10;  // 변수가 아닌 상수를 만들 때 사용하는 키워드 const
						  // 상수는 반드시 선언과 동시에 초기화를 수행해야 한다.
	//cout << iA << endl;	 // const 를 붙여서 상수를 만드는 행위는 읽기 전용 데이터를 만들겠다는 의미이다.

	//int		iA = 10;
	//int		iB = 30;

	//const int*	p = &iA;	// 읽기 전용으로서만 사용가능한 포인터. p가 갖고 있는 주소값으로 값 변경 불가능하게 만드는 상수화

	// int*	const	p = &iA;	// 상수 포인터, 오로지 하나의 주소값만 저장 가능한 상수 상태

	//const int* const p = &iA;  // 읽기 전용 상수 포인터

	//*p = 20;
	//p = &iB;

	//iA = 20;

	//cout << (*p) << endl;

	//cout << *p << endl;
	//cout << iA << endl;
	
	/*int	iNum = 0;
	int* p = &iNum;

	int* p2 = p;

	++(*p);
	++(*p2);

	cout << iNum << endl;*/

#pragma endregion 상수와 포인터

#pragma region 이중 포인터

	/*int		iA = 10;

	int*	p = &iA;
	
	int**	pp = &p;

	//cout << sizeof(pp) << endl;

	cout << "iA : " << iA << endl;
	cout << "p : " << p << endl;
	cout << "pp : " << pp << endl;

	cout << "=====================" << endl;
	cout << "iA 주소: " << (&iA) << endl;
	cout << "p 주소: " << (&p) << endl;
	cout << "pp 주소: " << (&pp) << endl;

	cout << "======================" << endl;

	cout << (*p) << endl;
	cout << (*(*pp)) << endl;*/		 

	//cout << sizeof(p) << endl;

	/*cout << (&iA) << endl;
	cout << (&p) << endl;
	cout << (*p) << endl;*/


#pragma endregion 이중 포인터
	
#pragma region 배열

// 배열 : 연속된 메모리 공간에 같은 타입의 자료형 변수를 여러개 선언하는 문법

	const int	iNumber = 3;
	
	int	iArray[3] = {  10, 20, 30 };
	// iArray : 배열의 이름
	// [] : 대괄호 연산자, 인덱스 연산자
	//  3 : 배열의 개수

	cout << (&iArray[0]) << endl;
	cout << (&iArray[1]) << endl;
	cout << (&iArray[2]) << endl;

	// 배열의 특징 1. 연속된 메모리 공간에 할당이 된다.
	// 배열의 특징 2. 중괄호를 이용하여 변수들의 값을 초기화 할 수 있다.
	// 배열의 특징 3. 배열을 선언 시 배열의 개수는 반드시 상수를 사용해야 한다.
	// 배열의 특징 4. 배열을 선언한 뒤, []안에서 변수를 사용해도 무방하다. 단, 배열의 범위를 벗어나는 값을 사용해선 안된다.
	// 배열의 특징 5. 배열은 중괄호로 초기화를 할 경우, 배열의 개수만큼 초기화하려는 값이 없을 때 자동 0으로 초기화 한다.
	// 배열의 특징 6. 배열은 중괄호 초기화 값이 있는 경우, []안에 개수를 기입하지 않더라도 자동적으로 원소개수만큼 할당된다.
	// 배열의 특징 7. []연산자 내에서 연산이 가능하다.
	// 배열의 특징 8. 배열끼리 연산이 가능하다.
	
	cout << iArray[1] + iArray[1] << endl;

	/*for (int i = 0; i < 3; ++i)
	{
		cout << iArray[i] << endl;
	}*/

	/*iArray[3] = 100;

	cout << iArray[3] << endl;* /*/


#pragma endregion 배열
}

// 1. 자판기 숙제 를 포인터 버전으로 바꿔라
// 2. 2중 for문과 배열을 이용하여 다음처럼 출력해와라
/*
	1	2	3	4	5
	6	7	8	9	10
	11	12	13	14	15
	16	17	18	19	20
	21	22	23	24	25
*/

// 3. 로또 만들기
/*
1. 5회차 
2. 1~45의 숫자중 무작위로 6개 뽑으며 한 회차에서 중복 숫자는 발생할 수 없다.
3. (이벤트)오름차순으로 정렬하여 출력(버블 정렬)*/