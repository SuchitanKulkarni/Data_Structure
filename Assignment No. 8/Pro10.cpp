/*
Q10. 
WAP to implement Stack concept using array.
*/

#define MAX 5
#include<iostream>
using namespace std;

class stack
{
	int data[MAX];
	int top;
	
	public:
		
		stack()
		{
			top = -1;
		}
		
		int full()
		{
			if(top==MAX-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		int empty()
		{
			if(top==-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		void push(int x)
		{
			if(full()==1)
			{
				cout<<"stack full"<<endl;
				return;
			}
			else
			{
				top++;
				data[top] = x; 
			}
		}
		
		int pop()
		{
			if(empty()==1)
			{
				cout<<"stack empty"<<endl;
				return 0;
			}
			else
			{
				int x = data[top];
				top--;
				return x;
			}
		}
};

int main()
{
	stack s;
	
	s.push(34);
	s.push(90);
	s.push(23);
	s.push(12);
	s.push(56);
	s.push(32);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	
	return 0;
}
