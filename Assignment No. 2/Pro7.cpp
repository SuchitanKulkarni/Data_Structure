/*
3.
	int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
    }
    
*/

#include<iostream>
using namespace std;

class Number
{
	int x,y;
	
	public:
		
		void scan(Number &t)
		{
			cout<<"Enter the data : "<<endl;
			cin>>x>>y;
			cout<<"Enter the data : "<<endl;
			cin>>t.x>>t.y;
		}
		
		void print(Number &t)
		{
			cout<<"x = "<<x<<" "<<" y = "<<y<<endl;
			cout<<" x = "<<t.x<<" "<<" y = "<<t.y<<endl;
		}
};


	int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
	}
