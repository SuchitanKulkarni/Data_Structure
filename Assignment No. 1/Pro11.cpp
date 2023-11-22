/*
11.Scan length and width of a rectangle in main().Define only one function rectangle() to find area and perimeter.
Print both results in main().(use pass by reference)
*/

#include<iostream>
using namespace std;

void rectangle(int r, int w, int & rarea,int & rperi);

int main()
{
	int len,wid;
	
	cout<<"Enter the length and width  : "<<endl;
	cin>>len>>wid;
	
	int area,peri;
	
	rectangle(len,wid,area,peri);
	
	cout<<"Area = "<<area<<endl;
	cout<<"Perimeter = "<<peri;
	
	return 0;
}

void rectangle(int r, int w, int & rarea,int & rperi)
{
	rarea = r*w;
	rperi = 2*(r+w);
}


