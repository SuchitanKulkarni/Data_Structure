/*
Q3.Scan array of n integers from user in an array.Scan a number from user.
Search this number in array,if found,delete it.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter the n values : "<<endl;
	cin>>n;
	
	int * p;
	
	p = new int[n];
	
	int x,i;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the data : "<<endl;
		cin>>*(p+i);	
	}
	
	cout<<"Enter the value to search : "<<endl;
	cin>>x;
	int j,temp;
	
	for(i=0;i<n;i++)
	{
		if(*(p+i) == x)
		{
			*(p+i) = 0;
			
		     for(j=i+1;j<n;j++)
				{
					temp = *(p+i);
					*(p+i) = *(p+j);
					*(p+j) = temp; 
					i++;
				}
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<*(p+i)<<" ";
	}
	
	return 0;
	
}
