/*
C)
void disp(int x)
{
	if(x<=0)
	{
		return;
	{
	else
	{
		disp(x-1);
		x--;
		disp(x-1);
		cout<<x;
	}
}
int main()
{
	disp(3);
}
*/

#include<iostream>
using namespace std;


void disp(int x)
{
	if(x<=0)
	{
		return;
}
	else
	{
		disp(x-1);
		x--;
		disp(x-1);
		cout<<x;
	}
}
int main()
{
	disp(3);
}
