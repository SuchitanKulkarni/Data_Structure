/*
20.Scan a string from user.Count how many times 'a' or 'A' is present in the string.
*/

#include<iostream>
using namespace std;

int count(char *p)
{
	if(*p == '\0')
	{
		return 0;
	}
	else
	{
		int res;
		res = count(p+1);
		
		if(*p == 'a' || *p == 'A')
		{
			res = res + 1;
		}
		
		return res;
	}
}

int main()
{
	char str[90];
	
	cout<<"enter the string : "<<endl;
	cin.getline(str,89);
	
	cout<<"count = "<<count(str);
	
	return 0;
}
