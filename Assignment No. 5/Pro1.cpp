/*
Q1.Write recursive programs for following questions.
1.Print first n natural numbers.
*/

#include<iostream>
using namespace std;

void print(int x);

int main()
{
	int n;
	
	cout<<"Enter the value of integers to be printed : "<<endl;
	cin>>n;
	
	print(n);
	
	return 0;
}

void print(int x)
{
	if(x==0)
	{
		return ;
	}
	else
	{
		print(x-1);
		
		cout<<x<<" ";
	}
}
