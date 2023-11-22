/*
C.
--- fun(---m)
{
	---;
	---;
}
int main()
{
	int a=5,b=8;
	cout<<a<<" "<<b; //5,8
	--- fun(&b);
	cout<<a<<" "<<b;  //10,20
 	return 0;
}
*/

#include<iostream>
using namespace std;

int fun(int *m)
{
	*m = 20;
	return 10;
}
int main()
{
	int a=5,b=8;
	cout<<a<<" "<<b<<endl; //5,8
	a = fun(&b);
	cout<<a<<" "<<b;  //10,20
 	return 0;
}
