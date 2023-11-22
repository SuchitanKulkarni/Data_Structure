/*
9.Find n factorial.
*/

#include<iostream>
using namespace std;

int fact(int x)
{
	if(x==0)
	{
		return 1;
	}
	else
	{
		int res;
		
		res = fact(x-1);
		
		return res * x;
	}
}

int main()
{
	int n;
	
	cout<<"Enter the integer to find factorial : "<<endl;
	cin>>n;
	
	cout<<" Factorial = "<<fact(n);
	
	return 0;
}
