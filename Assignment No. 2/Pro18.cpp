/*
.
class Number
{
	public:
		int x,y;
};

For above class Number,create 2 runtime objects.
Scan their data in main() only.
Print squares of x and y of both objects in main().
Do not define any member function in class Number.
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
};

int main()
{
	Number*p,*q;
	
	p = new Number();
	q = new Number();
	
	cout<<"Enter the data : "<<endl;
	cin>>p->x>>p->y;
	
	cout<<"Enter the data : "<<endl;
	cin>>q->x>>q->y;
	
	cout<<" x = "<<p->x<<" "<<" y = "<<p->y<<endl;
	cout<<" x = "<<q->x<<" "<<" y = "<<q->y<<endl;
	
	return 0;
}
