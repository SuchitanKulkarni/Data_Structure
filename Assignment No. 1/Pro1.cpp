/* 1.Scan 10 integers from user in an array of integers.
Find the largest element.(using [])
*/

#include<iostream>
using namespace std;

int main()
{
	int num[10];
	 
	int i;
	
	cout<<"Enter the 10 integers : "<<endl;
	
	for(i=0;i<10;i++)
	{
		cin>>num[i];
	}
	
	int max = num[0];
	 
	 for(i=0;i<10;i++)
	 {
	 	if(max<num[i])
	 	{
	 		max = num[i];
		}
	 }
	 
	 cout<<" largest  = "<<max;
	 
	 return 0;
	 
}
