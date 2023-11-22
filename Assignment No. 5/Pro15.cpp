/*
15.Declare an array of 6 integers.Print addition of all integers in array.
*/

#include<iostream>
using namespace std;

int print(int *p,int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
		int res;
		
		res = print(p,n-1);
		
		return res + *(p+n);
	}
}

int main()
{
	int num[6] = {1,2,3,4,5,6};
	
	cout<<" Addition of array element = "<<print(num, 5);
	
	return 0;
}
