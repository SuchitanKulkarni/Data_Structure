/*
3.
void yourfun(--- p , --- q)
{
	--- ;
	--- ;
}

void myfun(--- m, --- n)
{
	yourfun(&m,&n);
}

int main()
{
	int a,b;
	a = 5;
	b = 10;
	
	cout<<endl<<a<<"  "<<b;  //5  10
	
	myfun(&a,&b);
	
	cout<<endl<<a<<"  "<<b;  // 15  20

	return 0;
}
*/

#include<iostream>
using namespace std;


void yourfun(int** p , int** q)
{
	**p = 15 ;
	**q = 20 ;
}

void myfun(int* m, int* n)
{
	yourfun(&m,&n);
}

int main()
{
	int a,b;
	a = 5;
	b = 10;
	
	cout<<endl<<a<<"  "<<b;  //5  10
	
	myfun(&a,&b);
	
	cout<<endl<<a<<"  "<<b;  // 15  20

	return 0;
}
