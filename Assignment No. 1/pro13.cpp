/*
B.
void fun(---m,---n)
{
	---;
	---;
}
int main()
{
	int a=5,b=8;
	cout<<a<<" "<<b; //5,8
	fun(a,&b);
	cout<<a<<" "<<b;  //10,20
 	return 0;
}
*/

#include<iostream>
using namespace std;

void fun(int &m,int *n)
{
	m = 10;
    *n = 20;
}
int main()
{
	int a=5,b=8;
	cout<<a<<" "<<b<<endl; //5,8
	fun(a,&b);
	cout<<a<<" "<<b;  //10,20
 	return 0;
}
