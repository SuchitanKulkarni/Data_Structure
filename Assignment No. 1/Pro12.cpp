/*
12.Complete the following functions to get the outputs mentioned in comment.
Draw stackframe for each question in notebook.
A.
void fun(---m,---n)
{
	---;
	---;
}

int main()
{
	int a=10,b=20;
	cout<<a<<" "<<b; //10,20
	fun(---,---);
	cout<<a<<" "<<b;  //23,67
 	return 0;
}
*/

#include<iostream>
using namespace std;

void fun(int *m,int *n)
{
	*m = 23;
	*n = 67;
}

int main()
{
	int a=10,b=20;
	cout<<a<<" "<<b<<endl; //10,20
	fun(&a,&b);
	cout<<a<<" "<<b;  //23,67
 	return 0; 
}
