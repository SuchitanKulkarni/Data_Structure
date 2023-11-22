/*
14.Scan base and power from user.Find base raised to power.
*/

#include<iostream>
using namespace std;

int main()
{
	int base,power;
	
	cout<<"Enter the base and power : "<<endl;
	cin>>base>>power;
	
	int i,sum = 1;
	
	for(i=1;i<=power;i++)
	{
		sum = sum*power;
	}
	
	cout<<sum<<endl;
	
	return 0;
}
