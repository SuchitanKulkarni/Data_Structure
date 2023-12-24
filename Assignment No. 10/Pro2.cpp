/*
1.1)Scan a string from user.Check if it is pallindrome or not.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[90];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,90);
	
	int len = strlen(str);
	
	int i,j;
	
	i=0;
	j=len-1;
	
	while(i<=j)
	{
		if(str[i] == str[j])
		{
			i++;
			j--;
		}
		else
		{
			cout<<"It is not a pallindrom "<<endl;
			break;
		}
	}
	
	if(i>j)
	{
		cout<<"It is pallindrom"<<endl;
	}
	
	return 0;
}
