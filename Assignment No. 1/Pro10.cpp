/*
10.Scan radius from user.Define only one function circle() to find area and circumference.Print both results in main().
(use pass by address)
*/

#include<iostream>
using namespace std;
void circle(int r, float* area, float* circum);

int main()
{
	int rad;
	
	cout<<"Enter the radius : "<<endl;
	cin>>rad;
	
	float area,circum;
	
	circle(rad,&area,&circum);
	
	cout<<" Area  = "<<area;
	cout<<" Circumference = "<<circum<<endl;
	
	return 0;
	
}

void circle(int r, float *parea, float *pcircum)
{
	*parea = 3.14*r*r;
	*pcircum = 3.14*2*r;
}
