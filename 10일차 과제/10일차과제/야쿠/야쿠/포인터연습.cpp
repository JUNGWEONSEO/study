#include <iostream>

using namespace std;
void add(int* _iTemp, int* _iSour, int* _sum);
int add(int _i, int _j, int  _k);


void main(void)
{
	int a = 3, b = 4;
		int sum = 0;
		int sum1 = 0;
	

		add(&a, &b, &sum);

		cout << sum << endl;

		sum1 = add(a, b, sum);

		cout << sum1 << endl;


}


void add(int* _iTemp , int* _iSour , int* _sum)
{
	int *p = _iTemp;
	int *p1 = _iSour;
		int *p2 = _sum;

		*p2 = *p + *p1;
}


int add(int _i, int _j, int  _k)
{
	int sum = 0;
	sum = _i + _j + _k;

		return sum;


}