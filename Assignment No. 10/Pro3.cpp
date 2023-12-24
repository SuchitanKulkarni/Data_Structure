/*
1.2)Scan a string from user.Reverse it.Print it.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[90] ;
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,90);
	
	char ch;
	
	int len = strlen(str);
	
	int i=0;
	int j=len-1;
	
	while(i<=j)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		
		i++;
		j--;
	}
	
	cout<<str;
	
	return 0;
	
	
}
