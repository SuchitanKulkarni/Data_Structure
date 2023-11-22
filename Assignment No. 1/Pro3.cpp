/*
3.Scan length and width of a rectangle.Define functions to find area and perimeter of rectangle.
Print both results in main().(use call by value)
*/

#include<iostream>
using namespace std;

int peri (int l,int w);
int area (int l,int w);

int main()
{
	int len,wid;
	
	cout<<"Enter the length and width for rectangle : "<<endl;
	cin>>len>>wid;
	int Area;
	int Peri;
	Area = area(len,wid);
	Peri = peri(len,wid);
	
	cout<<"Area = "<<Area<<endl;
	cout<<"Perimenter = "<<Peri<<endl;
	
	return 0;
}

int area(int l,int w)
{
	int area =  l*w;
	
	return area;
}
int peri (int l,int w)
{
	int peri = 2*(l+w);
	
	return peri;
}
