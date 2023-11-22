/*
14.Scan n integers from user in an array.Print this array in reverse order.
Define recursive scan() and print() functions here.
*/

#include<iostream>
using namespace std;

void scan(int *q , int n)
{
	if(n<0)
	{
		return ;
	}
	else
	{
		cout<<"Enter the integer : "<<endl;
		cin>>*(q+n);
		
		scan(q,n-1);
		
	}
}

void print(int * r, int n)
{
	if(n<0)
	{
		return ;
	}
	else
	{
		cout<<*(r+n)<<" ";
		
		print(r,n-1);
	}
}

int main()
{
	int n;
	
	cout<<"Enter the value : "<<endl;
	cin>>n;
	
	int * p;
	
	p = new int[n];
	
	scan(p , n-1);
	
	print(p, n-1);
	
	return 0;
}
