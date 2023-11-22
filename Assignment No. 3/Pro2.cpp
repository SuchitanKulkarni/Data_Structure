/*
Q2.WAP to explain references in CPP.
*/

#include<iostream>
using namespace std;

class number
{
	int x,y;
	
	public:
		
		void scan(number &p)
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
			cout<<"Enter the x and y : "<<endl;
			cin>>p.x>>p.y;
		}
		void show()
		{
			cout<<"x = "<<x<<" "<<" y = "<<y<<endl;
		}
};

int main()
{
	number T1,T2;
	
	T1.scan(T2);
	T1.show();
	T2.show();

    return 0;
}
