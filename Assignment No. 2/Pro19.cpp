/*
5.
class Number
{
	public:
		int x,y;
};
For above class Number,create 2 runtime objects.
Scan their data from user in constructor.Print their data in destructor.
Remember destructor for runtime object gets called when u delete that object 
using delete operator
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		Number()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		~Number()
		{
			cout<<" x = "<<x<<" "<<" y = "<<y<<endl;
		}
};

int main()
{
	Number *p,*q;
	
	p = new Number();
	q = new Number();
	
	delete p;
	delete q;
	
	return 0;
}
