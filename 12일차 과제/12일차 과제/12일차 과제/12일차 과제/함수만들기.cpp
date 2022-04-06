#include <iostream>

using namespace std;
int strl(char* pName);
void swap(char* pName1);


void main(void)
{
	char szName[32] = "j123456789";
	char szName1[32] = "";
	cin >> szName;
	cout << szName << endl;
                       
	char* p = nullptr;

	p = szName;




	

	cout << strl(szName) << endl;

	swap(p);

	cout << szName << endl;

	

}



int strl(char* pName)
{
	int ilen = 0;
	for (int i = 0; '\0' != pName[i]; ++i)
	{
		
		++ilen;
	}
	
		
		return ilen;
}



void swap(char* pName1)
{
	

	int ilong = strl(pName1);

	for (int j = 0; ilong > j; ++j)
	{
		int iTemp = 0;
		iTemp = pName1[j];
		pName1[j] = pName1[ilong-1];
	    pName1[ilong-1] = iTemp;

		--ilong;
	
	}

}