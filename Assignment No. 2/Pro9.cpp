/*
5.
	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T3 = add(T1,T2);
		T3.print();
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
		void print()
		{
			cout<<"x  = "<<x<<" "<<" y = "<<y<<endl;
		}
};

Number add(Number p, Number q)
{
	Number ans;
	
	ans.x = p.x+q.x;
	ans.y = p.y+q.y;
	
	return ans; 
}

void scan(Number &t)
{
	cout<<"Enter the data : "<<endl;
	cin>>t.x>>t.y;
}


	int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T3 = add(T1,T2);
		T3.print();
	}
