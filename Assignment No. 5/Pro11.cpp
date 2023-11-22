/*
11.Scan a range from user.Print addition of only odd values in the range.
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
		
		
	    if(x % 2 == 1)
	    {
	    	return res + x;
		}
		else
		{
			return res;
		}
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
	
	cout<<"Addition of odd values = "<<ans<<endl;
	
	return 0;
}
