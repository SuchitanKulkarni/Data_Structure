/*
Q6.Scan 6 citynames from user using string datatype.
Check if pune is present in list or not.User may give combination of
upper and lower case alphabet as inputs
*/

#include<iostream>
using namespace std;

string upper(string p)
{
	string s;
	int i = 0;
	
	while(i<p.length())
	{
		s.at(i)= p.at(i) - 32;
		
		i++;
	}
	
	return s;
}

int main()
{
	string str[6],str1;
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cout<<"enter the city : "<<endl;
		getline(cin,str[i]);
	}
	
	
	int j=0;
	
	
	for(i=0;i<6;i++)
	{
		str1 = upper(str[i]);
		
		if(str1 == "PUNE")
		{
			cout<<"present";
			break;
		}
	
	}
	
	if(i == 6)
	{
		cout<<"Not present";
	}
	
 } 
 
 
