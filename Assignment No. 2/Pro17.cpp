/*
3.Scan n fraction values from user.Find the largest value among these 5.
(n values means runtime memory)
*/

#include<iostream>
using namespace std;

int main()
{
	float *p;
	float max;
	int n,i;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	
	p = new float[n];
	
	cout<<"Enter the floating values : "<<endl;
	
	for(i = 0;i<n;i++)
	{
		cin>>*(p+i);
	} 
	 
	 max = *(p+0);
	 
	 for(i=0;i<n;i++)
	 {
	 	if(max<*(p+i))
	 	{
	 		max = *(p+i);
		 }
	 }
	 
	 cout<<" Largest = "<<max;
	 
	 return 0;
	 
}
