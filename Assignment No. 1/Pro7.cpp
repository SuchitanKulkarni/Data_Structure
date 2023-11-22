/*
7.Scan 6 integers in an array.Define function addition() to find addition of all the integers.
Print result in main().
*/

#include<iostream>
using namespace std;
int addition(int *p);

int main()
{
	int num[6];
	
	cout<<"Enter the 6 integers : "<<endl;
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
	
	int add;
	
	add = addition(num);
	
	cout<<"Addition = "<<add;
}

int addition(int *p)
{
	int i,sum = 0;
	
	for(i=0;i<6;i++)
	{
		sum = sum +*(p+i);
	}
	
	return sum;
}
