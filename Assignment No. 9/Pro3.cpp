/*
Q3.WAP to implement stack using array.
*/

#include<iostream>
#define MAX 5
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
		
		int empty()
		{
			if(top==-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		int full()
		{
			if(top==MAX-1)
			{
				return 1;
			}
			
			return 0;
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
				cout<<"\nstack empty"<<endl;
				return -1;
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
	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	
	while(s.empty()==0)
	{
		cout<<s.pop()<<" ";
	}
	
	cout<<s.pop()<<endl;
	
	return 0;
}
