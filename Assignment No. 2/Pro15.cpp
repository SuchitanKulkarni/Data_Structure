/*
Q4.
Write programs for following questions.
==Do not define class SLL in any program.
==All codes are to be written in main().Do not define any other function 
of your own.
==Do not copy paste your code.Practice is very important.
==Think about memory in following questions.

1.For following main() function,scan an integer from user and print it.
Do not declare any variable of your own.
int main()
{
	int * p;
}

*/

#include<iostream>
using namespace std;

int main()
{
	int *p;
	
	p = new int[1];
	
	cout<<"Enter the integer : "<<endl;
	cin>>*p;
	
	cout<<"*P = "<<*p;
	
	return 0;
}
