/*
13.WAP to print following patterns.

A.
1
21
321
4321
54321
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j>0;j--)
		{
			cout<<j<<" ";
		}
		
		cout<<"\n";
	}
	
	return 0;
	
}
