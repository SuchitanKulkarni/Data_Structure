/*
3.Print all integers from 10 to 20 in reverse order
for following main() function.
	int main()
	{
		print(20);
	}
*/

#include<iostream>
using namespace std;

void print(int x)
{
	if(x<10)
	{
		return ;
	}
	else
	{
		cout<<x<<" ";
		
		print(x-1);
	}
}

int main()
{
	print(20);
	
	return 0;
}
