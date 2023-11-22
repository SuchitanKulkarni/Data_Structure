/*
6)
int main()
{
	float  radius;
	float  area , circumference ;
	
	cout<<"\nEnter radius = \n";
	getradius( &rad );
	
	findarea(&rad , area );
	findcircumference(&rad , circumference );

	print(area, &circumference);
	
	return 0;
}
*/

#include<iostream>
using namespace std;

void getradius(float * r);
void findarea(float * r,float & rarea);
void findcircumference(float * r,float & rcir);
void print(float & rarea , float * cir);



int main()
{
	float  rad;
	float  area , circumference ;
	
	cout<<"\nEnter radius = \n";
	getradius( &rad );
	
	findarea(&rad , area );
	findcircumference(&rad , circumference );

	print(area, &circumference);
	
	return 0;
}

void getradius(float * r)
{
	cin>>*r;
}
void findarea(float * r,float & rarea)
{
	rarea = 3.14*(*r)*(*r);
}
void findcircumference(float * r,float & rcir)
{
	rcir = 3.14*2*(*r);
}
void print(float & rarea , float * cir)
{
	cout<<"Area = "<<rarea<<" Circumference = "<<*cir<<endl;
}
