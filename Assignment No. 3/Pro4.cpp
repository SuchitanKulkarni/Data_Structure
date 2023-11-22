/*
Q4.WAP to scan 2 strings from user.Print their length.(use library function)
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[90];
	char str2[90];
	
	cout<<"Enter the string 1 : "<<endl;
	cin.getline(str1,90);
	
	cout<<"Enter the string 2 : "<<endl;
	cin.getline(str2,89);
	
	cout<<"String 1 = "<<strlen(str1)<<endl;
	cout<<"String 2 = "<<strlen(str2)<<endl;
	
	return 0;
}


