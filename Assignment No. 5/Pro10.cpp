/*
10.Scan a range from user.Print addition of all integers in the range.
*/

#include<iostream>
using namespace std;

int print(int x, int y)
{
	if(x>y)
	{
		return 0;
	}
	else
	{
		int res;
		
		res = print(x+1,y);
		
		return res + x;
	}
}

int main()
{
	int a,b;
	
	cout<<"Enter the range : "<<endl;
	cin>>a>>b;
	 
	int ans;
	
	if(a<b)
	{
		ans = print(a,b);
	}
	else
	{
		ans = print(b,a);
	}
	
	cout<<"Addition = "<<ans;
	
	return 0;
}
