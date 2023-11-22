/*
2.Scan 8 integers from user.Find the smallest value.(using pointer)
*/

#include<iostream>
using namespace std;

int main()
{
	int * p;
	
	p = new int[8];
	
	cout<<"Enter the 8 inetgers :"<<endl;
	
	int i;
	
	for(i=0;i<8;i++)
	{
		cin>>*(p+i);
	}
	
	int min = *(p+0);
	
	for(i=0;i<8;i++)
	{
		if(min>*(p+i))
		{
			min = *(p+i);
		}
	}
	
	cout<<" Smallest  = "<<min;
	
	return 0;
}
