/*
Q11.Scan a string from user.Check if it is pallindrome or not.
Use recursive function.
*/

#include<iostream>
#include<string.h>
using namespace std;

int pallindrom(char*p,char*q);

int main()
{
	char str1[89];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str1,89);
	
 int len = strlen(str1);
	
	if(pallindrom(str1,&str1[len-1])==1)
	{
		cout<<"pallindrom"<<endl;
	}
	else
	{
		cout<<"not pallindrom"<<endl;
	}
}

int pallindrom(char *p,char *q)
{
	if(p>q)
	{
		return 1;
	}
	else if(*p!=*q)
	{
		return 0;
	}
	else
	{
		int res;
		
		res = pallindrom(p+1,q-1);
		
		return res;
	}
}
