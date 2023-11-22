/*
Q2.Write programs for following questions using class and objects.
Complete the code for following main() functions.
Do not change main() function.
class Number has 2 data members,x and y.

1.
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}
	
*/

#include<iostream>
using namespace std;

class Number
{
	int x,y;
	
	public:
		
		void scan()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};

int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}
