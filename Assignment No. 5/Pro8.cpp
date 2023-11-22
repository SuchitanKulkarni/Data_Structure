/*
8.Print addition of first n natural numbers recursively.
*/

#include<iostream>
using namespace std;

int print(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		int res;
		
		res = print(x-1);
		
		return res + x;  
	}
}

int main()
{
	int n;
	
	cout<<"Enter the value of n : "<<endl;
	cin>>n;
	
	cout<<" Addition = "<<print(n);
	
	return 0;
}
