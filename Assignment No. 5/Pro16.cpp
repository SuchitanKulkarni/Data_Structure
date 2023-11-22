/*
16.Create an array of n integers.Print addition of only even values in array.
*/

#include<iostream>
using namespace std;

int print(int * q,int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
		int res;
		
		res = print(q, n-1);
		
		if(*(q+n)%2==0)
		{
			return res + *(q+n);
		}
		else
		{
			return res;
		}
	}
}

int main()
{
	int n,i;
	
	cout<<"Enter the n value : "<<endl;
	cin>>n;
	
	int * p;
	
	p = new int[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the integer : "<<endl;
		cin>>*(p+i);
	}
	
	cout<<"Addition of even values in array : "<<print(p,n-1);
	
	return 0;
}
