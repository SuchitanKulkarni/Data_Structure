/*
21.Scan a string from user.Replace every occurrence of space by '?'.
*/

#include<iostream>
using namespace std;

void space(char *p)
{
	if(*p == '\0')
	{
		return;
	}
	else
	{
		space(p+1);
		
		if(*p == ' ')
		{
			*p = '?'; 
		}
	}
}

int main()
{
	char str[90];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,89);
	
	space(str);
	
	cout<<str<<endl;
	
	return 0;
}
