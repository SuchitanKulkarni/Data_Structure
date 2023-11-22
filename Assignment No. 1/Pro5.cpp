/*
5.Scan necessary details in main() to find simple interest.Define function interest() to find simple interest.
(use call by value)
*/

#include<iostream>
using namespace std;
int interest(int P,int R,int T);

int main()
{
	int p,r,t;
	
	cout<<"Enter the Principle(Balance),Rate and time to find simple interest : "<<endl;
	cin>>p>>r>>t;
	
	int Interest;
	
	Interest = interest(p,r,t);
	
	cout<<"Interest = "<<Interest<<endl;
	
	return 0;
}

int interest(int P,int R,int T)
{
	int I = P*R*T;
	
	return I;
}
