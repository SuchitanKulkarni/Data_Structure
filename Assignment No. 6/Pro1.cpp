/*
1.Scan 3 strings from user.Check if user has given “PUNE” or not.
when you scan strings from user,store them in capital format.User
can give combination of capital & small alphabets.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[90];
	char str2[80];
	char str3[89];
	
	cout<<"Enter the string 1:"<<endl;
	cin.getline(str1,90);
	cout<<"Enter the string 2 : "<<endl;
	cin.getline(str2,78);
	cout<<"Enter the string 3 : "<<endl;
	cin.getline(str3,89);
	
	int i=0;
	
	while(str1[i]!='\0')
	{
		
		if(str1[i] >= 'a' && str1[i]<='z')
		{
			str1[i] = str1[i]-32;
		}
		
		i++;
	}
	
	i=0;
	
	while(str2[i]!='\0')
	{
		if(str2[i] >= 'a' && str2[i]<='z')
		{
			str2[i] = str2[i]-32;
		}
		
		i++;
	}
	
	i=0;
	
	while(str3[i]!='\0')
	{
		
		if(str3[i] >= 'a' && str3[i]<='z')
		{
			str3[i] = str3[i]-32;
		}
		
		i++;
	}
	
	cout<<str1<<endl<<str2<<endl<<str3;
	
	if(strcmp(str1,"PUNE")==0)
	{
		cout<<"\npresent"<<endl;
	}
	else if(strcmp(str2,"PUNE")==0)
	{
		cout<<"\npresent"<<endl;
	}
	else if(strcmp(str3,"PUNE")==0)
	{
		cout<<"\npresent"<<endl;
	}
	else
	{
		cout<<"\nnot present"<<endl;
	}
	
	return 0;
}
