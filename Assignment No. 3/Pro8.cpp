/*
2)

int main()
{
	int  length , width , area , perimeter ;
	cout<<"\nEnter length = \n";
	length = scandata();
	cout<<"\nEnter width = \n";
	width = scandata();
	
	findarea( length , width , area );
	findperimeter( length , width , perimeter );
	
	cout<<"\nArea = "<<area>>"   perimeter = "<<perimeter;
	
	return 0;
}
*/

#include<iostream>
using namespace std;

int scandata();
void findarea(int l, int w,int&rarea);
void findperimeter(int l,int w, int & rperi);


int main()
{
	int  length , width , area , perimeter ;
	cout<<"\nEnter length = \n";
	length = scandata();
	cout<<"\nEnter width = \n";
	width = scandata();
	
	findarea( length , width , area );
	findperimeter( length , width , perimeter );
	
	cout<<"\nArea = "<<area<<"   perimeter = "<<perimeter;
	
	return 0;
}

int scandata()
{
	int x;
	cin>>x;
	
	return x;
}

void findarea(int l, int w,int&rarea)
{
	rarea = l*w;
}

void findperimeter(int l,int w, int & rperi)
{
	rperi = 2*(l+w);
	
}
