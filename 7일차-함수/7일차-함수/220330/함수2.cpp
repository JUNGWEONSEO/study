#include <iostream>

using namespace std;

#pragma region 함수의 기초 문법
/*

//반환 타입	함수이름		매개변수
void		Render(void);                               //반환타입도 없고 매개변수도 없는 타입 (다막힘)
void		Draw(int _iTemp);                           //반환타입은 없고 매개변수는 있는 타입 (들어가는건 있고 나오는건 없고)  ** 반환타입이 있으면 반드시 리턴이 있어야함!!
int			Get_Sour(void);                             //반환타입은 있고 매개변수는 없는 타입 (들어가는건 없고 나오는건 있고)
int			Add(int _iA, int _iB);                      //반환타입도 있고 매개변수도 있는 타입 (둘다있음)
                                                        // 매개변수 택배주소라생각 받아야할 공간이 있어야하니까  
														
														**함수를 통해서 무언가 값을 얻고자할때... 매개변수 무조건 있어야함
                                                         //단순한 출력을 할때 변수를 출력하고싶을때도 매개변수
void main(void)		// 함수의 선언부
{
	// 함수 : 데이터를 기능을 만드는 문법, 코드의 재사용을 위해 만드는 문법

	//Render();	// 함수이름(함수 호출 연산자) -> 함수를 호출하다               
	//Render();
	//Render();

	//int	iTest = 100;
	// Draw(iTest);

	int		iResult = Get_Sour();

	/ *cout << iResult << endl;
	cout << Get_Sour() << endl;
	Draw(Get_Sour());* /

	cout << Add(Get_Sour(), 300) << endl;

}	// 함수 몸체, 정의부

void Render(void)
{
	cout << "Hello" << endl;
}
void		Draw(int _iTemp)
{
	cout << _iTemp << endl;
}
int			Get_Sour(void)
{
	int		iSour = 5000;

	return iSour;
}
int			Add(int _iA, int _iB)
{
	return _iA + _iB;
}*/

#pragma endregion 함수의 기초 문법

#pragma region 메모리에 따른 동작

int		iGlobal = 100;		// 전역 변수(Data 영역)
//int		iNumber = 60000;

void	Render(void);
void	Draw(int _iTemp);
void	Global(void);
void	Print(void);

void	Func(void)
{
	cout << "출력" << endl;

	return;

	cout << "종료" << endl;
}


void main(void)
{
	/*Render();
	Render();
	Render();*/

	/*Draw(10);
	Draw(10);
	Draw(10);*/

	/*Global();
	Global();
	Global();*/

	//Print();
	//Print();
	//Print();

	//iNumber = 400;

	return;

	Func();
}

void	Render(void)
{
	int		iTemp = 10;		// 지역변수(stack)

	cout << (++iTemp) << endl;
	//cout << iGlobal << endl;	// 전역 변수는 한 파일 공간 안에서 어떤 함수에서건 그 이름을 사용할 수 있다.
}

void	Print(void)
{
	static int	iNumber = 10;	// 정적변수(Data 영역)

	cout << (++iNumber) << endl;
	//cout << iNumber << endl;
}

void	Draw(int _iTemp)	// 매개변수(stack)
{
	cout << (++_iTemp) << endl;
}

void	Global(void)
{
	// cout << iTemp << endl; Render함수 내에서 지역변수이기 때문에 다른 지역인 Global 함수에서는 이 이름을 알 수가 없다.
	cout << (++iGlobal) << endl;
}


#pragma endregion 메모리에 따른 동작

