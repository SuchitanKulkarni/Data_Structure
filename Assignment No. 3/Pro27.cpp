/*
9)Do not change main() function and access specifier of any given member.
class Number
{
	public:
		int x,y;
};

int main()
{
	Number T1,T2;
	T1 = Number::getobject();
	T2 = Number::getobject();
	T1.show();
	T2.show();
}
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
	static Number getobject()
	{
		Number ans;
		
		cout<<"Enter the x and y : "<<endl;
		cin>>ans.x>>ans.y;
		
		return ans;
	}
	
	void show()
	{
		cout<<"x = "<<x<<" "<<" y = "<<y<<endl;
	}
};

int main()
{
	Number T1,T2;
	T1 = Number::getobject();
	T2 = Number::getobject();
	T1.show();
	T2.show();
}
