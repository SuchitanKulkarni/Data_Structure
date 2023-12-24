/*
Q7.WAP to implement binary search on array of n integers.
*/

#include<iostream>
using namespace std;

int main()
{
	int *p;
	int n,temp,mid,i;
	
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	
	p = new int[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"enter the data : "<<endl;
		cin>>*(p+i);
	}
	
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(p+i)>*(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
	
	int low = 0;
	int up = n-1;
	
	cout<<"ENter the data to search : "<<endl;
	cin>>n;
	
	while(low<=up)
	{
		mid = (low+up)/2;
		
		if(*(p+mid) == n)
		{
			cout<<"Present";
			break;
		}
		else if(n < *(p+mid))
		{
			up = mid-1;
		}
		else if(n>*(p+mid))
		{
			low = mid+1;
		}
	}
	
	if(low>up)
	{
		cout<<"not present";
	}
	
}
