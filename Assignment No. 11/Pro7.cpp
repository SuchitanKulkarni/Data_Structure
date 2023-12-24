/*
Q7.Create SLL.Print SLL in reverse order using stack.
Implement stack here using array.
Data array in stack must contain address of each node.
*/

#include<iostream>
#define MAX 67
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
	node * data[MAX];
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
		
		void push(node* p)
		{
			if(full()==1)
			{
				cout<<"stack full"<<endl;
				return;
			}
			else
			{
				top++;
				
				data[top] = p;
				
			}
		}
		
		node* pop()
		{
			if(empty()==1)
			{
				cout<<"stack empty"<<endl;
				return NULL;
			}
			else
			{
				node*p = data[top];
				top--;
				
				return p;
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
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"invalid number of nodes"<<endl;
		return;
	}
	else
	{
		cout<<"enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		node* p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			 p =p->next;
		}
	}
}

void SLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		s.push(p);
		
		p = p->next;
	}
	
	while(s.empty()!=1)
	{
		node*q = s.pop();
		
		cout<<q->data<<" ";
		
	}
}

int main()
{
	SLL s1;
	
	cout<<"\n-----create----"<<endl;
	s1.create();
	cout<<"\n-----show------"<<endl;
	s1.show();
	
	return 0;
}
