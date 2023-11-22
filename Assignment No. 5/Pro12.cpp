/*
12.Declare and initialize an array of 6 integers.Print this array using recursive function.
*/

#include<iostream>
using namespace std;

void print(int * p, int n)
{
	if(n<0)
	{
		return ;
	}
	else
	{
		print(p,n-1);
		
		cout<<*(p+n)<<" ";
	}
}

int main()
{
	int num[6] = {1,2,3,4,5,6};
	
	print(num,5);
	
	return 0;
}
