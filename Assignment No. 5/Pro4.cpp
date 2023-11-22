/*
4.Scan a range from user.Print all integers in the range.
*/

#include<iostream>
using namespace std;

void print(int x,int y)
{
	if(x>y)
	{
		return;
	}
	else
	{
		cout<<x<<" ";
		
		print(x+1,y);
	}
}

int main()
{
	int a,b;
	
	cout<<"Enter the range to print : "<<endl;
	cin>>a>>b;
	
	if(a<b)
	{
		
		print(a,b);
	}
	else
	{
		
		print(b,a);
	}
	
	return 0;
}
