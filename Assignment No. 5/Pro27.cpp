/*
25.Scan base and power from user in main().Define recursive function to find base raised to power.
*/

#include<iostream>
using namespace std;

int brp(int b,int p)
{
	if(p == 0)
	{
		return 1;
	}
	else
	{
		int res;
		
		res = brp(b,p-1);
		
		res = res*b;
		
		return res;
		
	}
}

int main()
{
	int b,p;
	
	cout<<"Enter the power and base : "<<endl;
	cin>>p>>b;
	
	int ans = brp(b,p);
	
	cout<<ans;
	
	return 0;
}
