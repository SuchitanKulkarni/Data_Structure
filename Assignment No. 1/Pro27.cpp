/*
17.WAP to explain local and global variable with scope resolution operator.
*/

#include<iostream>
using namespace std;

int a;
int main()
{
	a = 45;
	
	{
		int a;
		
		a=90;
		
		cout<<"local : "<<a<<endl;
		
		cout<<" global : "<<::a;
	}
	
	return 0;
}
