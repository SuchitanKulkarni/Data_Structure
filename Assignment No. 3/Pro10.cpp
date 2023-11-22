/*
4)

int main()
{
	float  radius;
	float  area , circumference ;
	
	cout<<"\nEnter radius = \n";
	getradius(rad);
	
	findarea(rad , area );
	findcircumference(rad , circumference );

	print(area, circumference);
	
	return 0;
}
*/

#include<iostream>
using namespace std;

void getradius(float &r);
void findarea(float r,float & rarea);
void findcircumference(float r,float & cir);
void print(float area,float cir);

int main()
{
	float  rad;
	float  area , circumference ;
	
	cout<<"\nEnter radius = \n";
	getradius(rad);
	
	findarea(rad , area );
	findcircumference(rad , circumference );

	print(area, circumference);
	
	return 0;
}

void getradius(float &r)
{
	cin>>r;
}

void findarea(float r,float & rarea)
{
	rarea = 3.14*r*r ;
}

void findcircumference(float r,float & cir)
{
	cir = 3.14*2*r;
}

void print(float area,float cir)
{
	cout<<"Area = "<<area<<" circumference = "<<cir;
}
