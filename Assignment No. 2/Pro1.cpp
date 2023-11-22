/*Q1.Fill in the blanks and run the program in machine.
Draw stackframe or each question in notebook.

1.
void myfun(--- m, --- n)
{
	--- ;
	--- ;
}

int main()
{
	int a,b;
	a = 5;
	b = 10;
	
	cout<<endl<<a<<"  "<<b; //5  10
	
	myfun(a,b);
	
	cout<<endl<<a<<"  "<<b; //15  20

	return 0;
}
*/

#include<iostream>
using namespace std;


void myfun(int & m, int & n)
{
	m = 15 ;
	n = 20 ;
}

int main()
{
	int a,b;
	a = 5;
	b = 10;
	
	cout<<endl<<a<<"  "<<b; //5  10
	
	myfun(a,b);
	
	cout<<endl<<a<<"  "<<b; //15  20

	return 0;
}
