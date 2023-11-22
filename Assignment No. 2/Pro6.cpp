/*
2.
	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		T2.print();
	}
	*/
	
#include<iostream>
using namespace std;

class Number
{
	public:
		
		int x,y;
		
		void print()
		{
			cout<<" x = "<<x<<" "<<" y ="<<y<<endl;
		}
};

Number scan()
{
	Number ans;
	
	cout<<"Enter the x and y : "<<endl;
	cin>>ans.x>>ans.y;
	
	return ans;
}

void print(Number t)
{
	cout<<"x = "<<t.x<<" "<<" y = "<<t.y<<endl;
}


	int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		T2.print();
	}
