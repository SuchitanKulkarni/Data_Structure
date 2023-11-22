/*
5.Scan a range from user.Print only even numbers in the range.
*/

#include<iostream>
using namespace std;

void print(int x, int y)
{
	if(x>y)
	{
		return ;
	}
	else
	{
		if(x%2==0)
		{
			cout<<x<<" ";
		}
		
		print(x+1,y);
	}
}

int main()
{
	int a,b;
	
	cout<<"Enter the range : "<<endl;
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
