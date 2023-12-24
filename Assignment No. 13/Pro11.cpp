/*
7.Scan array of n integers from user.Delete the maximum value.
*/

#include<iostream>
using namespace std;

int findmax(int *q,int n);

int main()
{
	int*p;
	
	int n;
	
	cout<<"enter the size of array : "<<endl;
	cin>>n;
	
	p = new int[n];
	
	cout<<"Enter the "<<n<<" interges : "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>*(p+i);
	}
	
	int ind = findmax(p,n-1);
	
	for(int i=ind;i<n-2;i++)
	{
		*(p+i) = *(p+i+1);
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
}

int findmax(int *q,int n)
{
	int max = *(q+0);
	int ind = 0;
	
	for(int i=0;i<=n;i++)
	{
		if(max <*(q+i))
		{
			max = *(q+i);
			ind = i;
		}
	}
	
	return ind;
}
