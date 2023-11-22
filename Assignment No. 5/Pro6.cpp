/*
6.Keep scanning numbers from user until he enters 0.
Print all the numbers he entered in reverse order.
*/

#include<iostream>
using namespace std;

void scan()
{
	int x;
	
	cout<<"Enter the integer : "<<endl;
	cin>>x;
	
	if(x==0)
	{
		return;
	}
	else
	{
		scan();
		
		cout<<x<<" ";
	}
}

int main()
{
	scan();
	
	return 0;
}
