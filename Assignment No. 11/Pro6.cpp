/*
Q6.Create SLL.Print SLL in reverse order using stack.
Implement stack here using array.
Data array here must contain data of linked list.
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
		cout<<"\nnode deleted"<<endl;
	}
};

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
			if(top==MAX)
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

class SLL
{
	node*head;
	stack s;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void create();
		void show();
};

void SLL::create()
{
	int n,x;
	
	cout<<"enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"Invalid number of nodes"<<endl;
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
			cout<<"enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
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
	
	while(s.empty()!=1)
	{
		cout<<s.pop()<<" ";
	}
}

int main()
{
	SLL s1;
	
	cout<<"\n------create-----"<<endl;
	s1.create();
	cout<<"\n------show------"<<endl;
	s1.show();
	
	return 0;
}
