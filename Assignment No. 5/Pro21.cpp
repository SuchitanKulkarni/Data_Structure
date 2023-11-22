/*
19.Define recursive copy() function to copy one string into another string.
*/

#include<iostream>
using namespace std;

void copy(char *p,char *q)
{
	if(*p == '\0')
	{
		*q = *p;
		return ;
	}
	else
	{
		*q = *p;
		
		copy(p+1,q+1);
	}
	
}

int main()
{
	char str1[30] = "hello";
	char str2[89];
	
	copy(str1,str2);
	
	cout<<str2;
	
	return 0;
}
