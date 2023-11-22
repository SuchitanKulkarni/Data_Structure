/*
8.Scan 8 integers from user in an array.Sort them in ascending order.
*/
#include<iostream>
using namespace std;

int main()
{
	int num[8];
	
	cout<<"Enter the 8 integers : "<<endl;
	
	int i;
	
	for(i=0;i<8;i++)
	{
		cin>>num[i];
	}
	
	int j,temp;
	
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for(i=0;i<8;i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}
