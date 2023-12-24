/*
Q4.WAP to implement stack using linked list.
*/

#include<iostream>
#define MAX 10
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
		cout<<"\nnode deleted"<<endl;
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
				return -1;
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
	
	s.push(2);
	s.push(6);
	s.push(3);
	s.push(8);
	
	s.show();
	
	while(s.empty()==0)
	{
		cout<<s.pop()<<endl;
		
	}
	cout<<s.pop();
	return 0;
}
