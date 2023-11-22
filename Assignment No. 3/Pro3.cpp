/*
Q3.WAP to scan n integers from user.Store them in array.Print addition of only even numbers from array.
*/

#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,i;
	
	cout<<"enter the n :" <<endl;
	cin>>n;
	
	int *p;
	
	p = new int[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the data : "<<endl;
		cin>>*(p+i);
		
		if(*(p+i)%2==0)
		{
			sum = sum + *(p+i);
		}
	}
	
	cout<<"Sum = "<<sum;
	
	return 0;
	
}
