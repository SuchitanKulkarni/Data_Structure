/*
4.Scan radius of a circle in main().Define functions to find area and circumference of circle.
Print both results in main().(use call by value)
*/

#include<iostream>
using namespace std;

int area(int r);
int circum(int r);

int main()
{
	int rad;
	
	cout<<"Enter the radius of circle : "<<endl;
	cin>>rad;
	
	float Area;
	float Circum;
	
	Area = area(rad);
	Circum = circum(rad);
	
	cout<<"Area = "<<Area<<endl;
	cout<<"Circumference = "<<Circum<<endl;
	
	return 0;
}

int area(int r)
{
	int Area = 3.14*r*r;
	
	return Area;
}

int circum(int r)
{
	int Circum = 3.14*2*r;
	
	return Circum;
}
