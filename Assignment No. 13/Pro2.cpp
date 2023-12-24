/*Q2.Draw stackframes for following programs in notebook and check the output.
A)
int find(int x)
{
	if(x == 5)
	{
		return 5;
	}
	else
	{
		int res;
		res = find(x+1);
		return res * x;
	}
}
int main()
{
	cout<<find(1);
}
*/

#include<iostream>
using namespace std;

int find(int x)
{
	if(x == 5)
	{
		return 5;
	}
	else
	{
		int res;
		res = find(x+1);
		return res * x;
	}
}
int main()
{
	cout<<find(1);
}
