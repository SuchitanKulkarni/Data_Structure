/*
22.WAP to check if given string is pallindrome or not.(non-recursive)
*/

#include<iostream>
#include<string.h>
using namespace  std;

int main()
{
	char str[80] = "mam";
	
     char temp[90];
     
     strcpy(temp,str);
     
     if(strcmp(temp,str)==0)
     {
     	cout<<"It is an pallindroum";
	 }
	 else
	 {
	 	cout<<"It is not a pallindroum";
	 }
}

