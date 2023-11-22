/*
Q5.Scan 2 strings from user.Compare them to check if they are equal or not.(use library function)
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[90];
	char str2[90];
	
	cout<<"Enter the string 1 : "<<endl;
	cin.getline(str1,89);
	
	cout<<"Enter the string 2 : "<<endl;
	cin.getline(str2,78);
	
	if(strcmp(str1,str2)==0)
	{
		cout<<"both are equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
	
	return 0;
}
