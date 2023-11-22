/*
17.Scan a string from user.Print each character of string using recursive function.
*/

#include<iostream>
using namespace std;

void print(char * p)
{
	if(*p == '\0')
	{
		return ;
	}
	else
	{
		cout<<*p<<" ";
		
		print(p+1);
	}
}

int main()
{
	char str[90];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,80);
	
	print(str);
	
	return 0;
}
