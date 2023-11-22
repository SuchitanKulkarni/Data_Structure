/*
23.WAP to check if given string is pallindrome or not.(recursive)
*/

#include<iostream>
#include<string.h>
using namespace std;

int check(char *p,char *q)
{
	int res ;
	
	if(*p == '\0')
	{
		return 0;
	}
	else
	{
		
		res = check(p+1,q+1);
		if(strcmp(p,q)==0)
		{
			res = 1;
		}
		else
		{
			res = 0;
		}
		
		return res;
	}
}
 
int main()
{
	char str[90] = "mam";
	char temp[90];
	
	strcpy(temp,str);
	
	int ans = check(str,temp);
	if(ans == 1)
	{
		cout<<"It is an pallindroum";
	}
	else
	{
		cout<<"it is not an pallidroum";
	}
	return 0;
}
