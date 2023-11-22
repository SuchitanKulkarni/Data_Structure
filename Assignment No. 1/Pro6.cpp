/*
6.Scan 7 characters in an array of characters.Count how many times 'A' is present in the array.
*/

#include<iostream>
using namespace std;

int main()
{
	char ch[7];
	
	cout<<"Enter the 7 characters : "<<endl;
	
	int i,count = 0;
	
	for(i=0;i<7;i++)
	{
		cin>>ch[i];
		
		if(ch[i] == 'A')
		{
			count++;
		}
	}
	
	cout<<"Count = "<<count;
	
	return 0;
	
}
