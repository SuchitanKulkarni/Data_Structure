/*
24.Write a recursive program to check if given number is prime or not.
*/

#include<iostream>
using namespace std;

void prime(int x,int p)
{
	if(p >= x)
	{
		cout<<"prime";
		return ;
	}
	else if(x%p==0)
	{
		cout<<"not prime";
		return ;
	}
	else
	{
		prime(x,p+1);
	}
}

int main()
{
	int num = 6;
	
	prime(num,2);
	
	return 0;
	
}
