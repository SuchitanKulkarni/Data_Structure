/*
2.Print all integers from 20 to 30.
*/

#include<iostream>
using namespace std;

void print(int x, int y)
{
	if(x>y)
	{
		return ;
	}
	else
	{
		cout<<x<<" ";
		
		print(x+1,y);
	}
}

int main()
{
	int a,b;
	
	a = 20;
	b = 30;
	
	print(a,b);
	
	return 0;
}

