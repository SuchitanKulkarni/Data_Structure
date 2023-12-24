/*B)
void show(int x)
{
	if( x >  3 )
	{
		return;
	}
	else
	{
		cout<<x;
		show(x+1);
		show(x+2);
		cout<<x;
	}
}
int main()
{
	show(1);
}
*/

#include<iostream>
using namespace std;

void show(int x)
{
	if( x >  3 )
	{
		return;
	}
	else
	{
		cout<<x;
		show(x+1);
		show(x+2);
		cout<<x;
	}
}
int main()
{
	show(1);
}
