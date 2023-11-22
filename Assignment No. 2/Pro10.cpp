/*
6.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T1.add(T2,T3);
		T3.show();
	}
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		
		int x,y;
		
		void scan()
		{
			cout<<"Enter the data : "<<endl;
			cin>>x>>y;
		}
		void show()
		{
			cout<<"x  = "<<x<<" "<<" y = "<<y<<endl;
		}
		
		void add(Number p,Number& q)
		{
			q.x = x + p.x;
			q.y = y + p.y; 
			
			
		}
};

void scan(Number & p)
{
	cout<<"Enter the data : "<<endl;
	cin>>p.x>>p.y;
}

	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T1.add(T2,T3);
		T3.show();
	}
