/*
6.Print SLL in reverse order using stack.
Stack you will use here must be implemented using linked list.
*/

#include<iostream>
#define MAX 30
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
		
		void push(char x)
		{
			node*p = new node(x);
			
			p->next = top;
			top = p;
		}
		
		char pop()
		{
			if(empty()==1)
			{
				cout<<"stack empty"<<endl;
				return 0;
			}
			else
			{
				char x = top->data;
				
				node*p = top;
				top = top->next;
				
				delete p;
				
				return x;
			}
		}
};

class SLL
{
	node*head ;
	stack s;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void addatend(char);
		void show();
};

void SLL::addatend(char x)
{
	node*p = new node(x);
	
	if(head==NULL)
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

void SLL::show()
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

int main()
{
	SLL s1;
	
	char str[90];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,90);
	int i=0;
	
	while(str[i]!='\0')
	{
		s1.addatend(str[i]);
		
		i++;
	}
	
	s1.show();
}
