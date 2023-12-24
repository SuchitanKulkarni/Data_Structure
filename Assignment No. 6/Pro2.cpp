/*
2.Scan 2 strings from user & store them in runtime memory.
Compare them for equality.
*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char*p;
	char*q;
	
	p = new char[90];
	q = new char[90];
	
	cout<<"Enter the string 1 : "<<endl;
	cin.getline(p,90);
	
	cout<<"Enter the string 2 : "<<endl;
	cin.getline(q,90);
	
	
	if(strcmp(p,q)==0)
	{
		cout<<"Equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
	
}
