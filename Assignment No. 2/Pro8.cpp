/*
4.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
	}
You know how to perform addition.
*/

#include<iostream>
using namespace std;

class Number
{
	int x,y;
	
	public:
		
		void scan()
		{
			cout<<"Enter the data : "<<endl;
			cin>>x>>y;
		}
		
		void show()
		{
			cout<<"x = "<<x<<" "<<" y = "<<y;
		}
		
		Number add(Number p, Number q)
		{
			x = p.x + q.x;
			y = p.y + q.y ;
		}
};


	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
	}

