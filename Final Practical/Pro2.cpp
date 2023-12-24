/*
Q0.Scan a number from user.Print its prime factors.
This is simple code.No need of linked list.
*/

#include<iostream>
using namespace std;

int prime(int x);

int main()
{
	int n;
	
	int i = 3;
	
	cout<<"Enter the number : "<<endl;
	cin>>n;
	
	int p = 2;
	
	while(n%2 == 0)
	{
		cout<<2<<" ";
		
		n =  n/2;
	}
	
	for(i=3;i<=n;i++)
	{
		while(n%i == 0)
		{
			cout<<i<<" ";
			
			n = n/i;
		}
	}
	
}
