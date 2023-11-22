/*
F.
    1
   121
  12321
 1234321
123454321
*/

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,s,p;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i-1;k--)
		{
			cout<<" ";
		}
		
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		for(p=1;p>=i;p--)
		{
			cout<<" ";
		}
		for(j=i-1;j>0;j--)
		{
			cout<<j;
		}
		cout<<"\n";
	}
}
