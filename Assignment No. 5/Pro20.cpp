/*
Q.1
18.Write recursive copy() function to copy one int array in another int array.
*/

#include<iostream>
using namespace std;

void copy(int *p, int *q,int n)
{
	if(n<0)
	{
		return;
	}
	else
	{
		*(q+n) = *(p+n);
		copy(p,q,n-1);
	}
}

int main()
{
	int num1[5] = {1,2,3,4,5};
	int num2[5];
	
	copy(num1,num2,4);
	
	for(int i=0;i<5;i++)
	{
		cout<<num2[i]<<" ";
	}
	
	return 0;
}
