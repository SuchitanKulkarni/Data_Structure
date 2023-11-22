/*
Q7.Complete the remaining code for following main() functions.
1)
int main()
{
	int  length , width , area , perimeter ;
	cout<<"\nEnter length = \n";
	length = scandata();
	cout<<"\nEnter width = \n";
	width = scandata();
	
	area = findarea(length , width);
	perimeter = findperimeter(length , width);
	
	cout<<"\nArea = "<<area>>"   perimeter = "<<perimeter;
	
	return 0;
}
*/

#include<iostream>
using namespace std;

int scandata();
int findarea(int l,int w);
int findperimeter(int l,int w);

int main()
{
	int  length , width , area , perimeter ;
	cout<<"\nEnter length = \n";
	length = scandata();
	cout<<"\nEnter width = \n";
	width = scandata();
	
	area = findarea(length , width);
	perimeter = findperimeter(length , width);
	
	cout<<"\nArea = "<<area<<"   perimeter = "<<perimeter;
	
	return 0;
}

int scandata()
{
	int x;
	cin>>x;
	
	return x;
}

int findarea(int l,int w)
{
	int area;
	
	area = l*w;
	
	return area;
}

int findperimeter(int l,int w)
{
	int peri;
	
	peri = 2*(l+w);
	
	return peri;
}
