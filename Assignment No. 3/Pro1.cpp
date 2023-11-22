/*
Q1.WAP to explain static members in CPP.
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		
		int x,y ;
	
	static void show(Number p)
	{
		cout<<"hello "<<p.x<<" "<<p.y;
	}
};

int main()
{
	Number T1;
	T1.x = 89;
	T1.y = 39;
    Number :: show(T1);
    
    return 0;
		
}
