/*
Q1.Implement Stack using linked list.
*/

#include<iostream>
#define MAX 50
using namespace std;


class node
{
	public:
		
		int data;
		node*next;
		
	node()
	{
		data = 0;
		next = NULL;
	}
	node(int a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode deleted "<<endl;
	}
};

class stack
{
	node*top;
	
	public:
		
		stack()
		{
			top = NULL;
		}
		
		int empty()
		{
			if(top==NULL)
			{
				return 1;
			}
			
			return 0;
		}
		
		void push(int x)
		{
				node*p = new node(x);
				
				p->next = top;
				
				top = p;
		}
		
		int pop()
		{
			if(empty()==1)
			{
				cout<<"\nstack empty"<<endl;
				return 0;
			}
			else
			{
				int x = top->data;
				node*p = top;
				top = top->next;
				delete p;
				return x;
			}
		}
		
		void show()
		{
			node*p = top;
			
			while(p!=NULL)
			{
				cout<<p->data<<" ";
				
				p = p->next;
			}
		}
};

int main()
{
	stack s;
	
	s.push(34);
	s.push(23);
	s.push(24);
	s.push(89);
	
	s.show();
	
	cout<<s.pop()<<" ";
	cout<<s.pop()<<" ";
	
	s.show();
	
	while(s.empty()!= 1)
	{
		cout<<s.pop()<<" ";
	}
	
}
