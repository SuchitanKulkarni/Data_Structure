/*
13.Declare an array of 6 integers.Scan and print this array using recursive scan()
and print() function.
*/

#include<iostream>
using namespace std;

void scan(int * q, int n)
{
	
	if(n<0)
	{
		return;
	}
	else
	{
		cout<<"Enter the integer : "<<endl;
	    cin>>*(q+n);
		scan(q,n-1);
	}
}

void print( int *r , int n)
{
	if(n<0)
	{
		return ;
	}
	else
	{
		print(r,n-1);
		
		cout<<*(r+n)<<" ";
	}
}

int main()
{
	int * p;
	
	p = new int[6];
	
	scan(p,5);
	
	print(p,5);
	
	return 0;
	
	
}
