/*
----E
---DE
--CDE
-BCDE
ABCDE
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	
	for(i=69;i>=65;i--)
	{
		for(k=65;k<=i-1;k++)
		{
			cout<<"-"<<" ";
		}
		for(j=i;j<=69;j++)
		{
			cout<<(char)j<<" ";
		}
		cout<<"\n";
		
	}
}

