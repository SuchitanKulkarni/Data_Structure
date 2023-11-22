/*

B.
ABCDE
ABCD
ABC
AB
A

*/

#include<iostream>
using namespace std;

int main()
{
     int  i ;
	int j;
	
	for(i=70;i>65;i--)
	{
		for(j=65;j<i;j++)
		{
			cout<<(char)j<<" ";
		}
		
		cout<<"\n";
	}
	
	
}
