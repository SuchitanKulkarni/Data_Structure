/*
Q6.WAP to explain constructor and destructor for runtime object.
*/

#include<iostream>
using namespace std;

class number
{
	int x,y;
	
	public:
		
		number()
		{
			cout<<"Enter the data : "<<endl;
			cin>>x>>y;
		}
		~number()
		{
			cout<<"x = "<<x<<" "<<" y = "<<y<<endl;
		}
};

int main()
{
	number *p;
	
	p = new number();
	
	delete p;
	
	return 0;
}
