/*
Q15.Write code for following main() function which scans 2 strings from user and prints them.
int main()
{
	char * s1,*s2;
	s1 = getstring();
	s2 = getstring();
	printstring(s1);
	printstring(s2);
	return 0;
}
*/

#include<iostream>
using namespace std;

char * getstring();
void printstring(char * p);

int main()
{
	char * s1,*s2;
	s1 = getstring();
	s2 = getstring();
	printstring(s1);
	printstring(s2);
	return 0;
}

char * getstring()
{
	char * str = new char[90];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,90);
	
	return str;
	
}
void printstring(char * p)
{
	cout<<p<<endl;
}
