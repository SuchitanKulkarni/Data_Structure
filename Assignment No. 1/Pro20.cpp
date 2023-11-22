/*
C.
E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;

int main()
{
	int j,i;
	
	for(i=69;i>=65;i--)
	{
		for(j=i;j<=69;j++)
		{
			cout<<(char)j<<" ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}
