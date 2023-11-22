/*
16.Scan a range from user.Print addition of all odd integers in the range.
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enetr the range : "<<endl;
	cin>>a>>b;
	
	int i,sum=0;
	
	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		{
			sum = sum + i;
		}
	}
	
	cout<<sum;
	
	return 0;
}
