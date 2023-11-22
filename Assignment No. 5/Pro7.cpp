/*
7.Print addition of 1 to 5 numbers.
*/

#include<iostream>
using namespace std;

int print(int x)
{
	if(x==6)
	{
		return 0;
	}
	else
	{
		int res;
		res = print(x+1);
		
		return res + x;
		
	}
}

int main()
{
	int ans;
	
	ans = print(1);
	
	cout<<"Addition = "<<ans;
	
	return 0;
}
