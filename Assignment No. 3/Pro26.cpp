/*
8)Do not change main() function and access specifier of any given member.

class Number
{
	public:
		int x,y;
};

class Digit
{
	public:
};

int main()
{
	Number obj;
	Digit D;
	obj = D.getNumber();
	cout<<"\n obj.x = "obj.x<<"  obj.y = "<<obj.y; //5,6
	
	obj.change();
	
	obj.show(); //8,78
	
 	return 0;
}
*/

#include<iostream>
using namespace std;


class Number
{
	public:
		int x,y;
		
	void change()
	{
		x = 8;
		y = 78;
	}
	
	void show()
	{
		cout<<" obj.x = "<<x<<" "<<"obj.y = "<<y;
	}
};

class Digit
{
	public:
		
		Number getNumber()
		{
			Number ans;
			
			ans.x = 5;
			ans.y = 6;
			
			return ans;
		}
};

int main()
{
	Number obj;
	Digit D;
	obj = D.getNumber();
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //5,6
	
	obj.change();
	
	obj.show(); //8,78
	
 	return 0;
}
