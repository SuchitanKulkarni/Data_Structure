/*
3.Scan a string from user. Allocate only necessary amount of
memory to string.
*/

#include<iostream>
using namespace std;

int main()
{
	char*ch;
	
	ch = new node[6];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(ch,6);
	
	cout<<ch;
	
	return 0;
	
}
