/*
15.Scan a number from user.Check if it is prime or not.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter a number : "<<endl;
	cin>>n;
	
	int i;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"not prime";
			
			break;
		}
	}
	
	if(i==n)
	{
		cout<<"it is a prime ";
	}
	
	return 0;
}
