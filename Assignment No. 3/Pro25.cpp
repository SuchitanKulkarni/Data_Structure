/*
7)Do not change main() function and access specifier of any given member.

class Number
{
	private:
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
	cout<<"\n obj.x = "obj.x<<"  obj.y = "<<obj.y; //5,6
	
	D.change(obj);
	
	cout<<"\n obj.x = "obj.x<<"  obj.y = "<<obj.y; //8,78
	
 	return 0;
}
*/

#include<iostream>
using namespace std;


class Digit;
class Number
{
	private:
		int x,y;
	
	public:
		
		Number()
		{
			x = 5;
			y = 6;
		}
		
		friend class Digit;
		friend int main();
};
class Digit
{
	public:
		
		void change(Number & p)
		{
			p.x = 8;
			p.y = 78; 
		}
};
int main()
{
	Number obj;
	Digit D;
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //5,6
	
	D.change(obj);
	
	cout<<"\n obj.x = "<<obj.x<<"  obj.y = "<<obj.y; //8,78
	
 	return 0;
}

