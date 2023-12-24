/*
2.Write a program to DLL in reverse order using stack.
Implement stack using linked list.
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
		int data;
		node*next;
		node*prev;
		
	node()
	{
		data = 0;
		next = NULL;
		prev = NULL;
	}
	node(int a)
	{
		data = a;
		next = NULL;
		prev = NULL;
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
			if(top ==NULL)
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
				cout<<"stack empty"<<endl;
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
};

class SLL
{
	node*head;
	stack s;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void addatend(int x);
		void show();
};

void SLL::addatend(int x)
{
	node*p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node*q = head;
		
		while(q->next!=NULL)
		{
			q = q->next;
		}
		
		q->next = p;
	}
}

void SLL:: show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		s.push(p->data);
		
		p = p->next;
	}
	
	while(s.empty()==0)
	{
		cout<<s.pop()<<" ";
	}
}

class DLL
{
	node*head;
	SLL s1;
	
	public:
		
		DLL()
		{
			head = NULL;
		}
		
		void create();
		void show();
};

void DLL::create()
{
	int n,x;
	
	cout<<"enter the number of node : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"Invalid number of nodes "<<endl;
		return;
	}
	else
	{
		cout<<"enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		node*p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			p->next->prev = p;
			p = p->next;
		}
	}
}

void DLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		s1.addatend(p->data);
		
		p = p->next;
	}
	
	s1.show();
}

int main()
{
	DLL d1;
	
	d1.create();
	d1.show();
}
