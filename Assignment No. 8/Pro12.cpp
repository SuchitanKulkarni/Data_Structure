/*
Q12.
Scan a number from user.Print its 16 bit binary using stack.

*/

#include<iostream>
#define MAX 20
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
				cout<<"stack empty "<<endl;
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
	int x,n;
	
	stack s;
	cout<<"Enter the digit : "<<endl;
	cin>>n;
	
	for(int i=0;i<16;i++)
	{
		int rem;
		rem = n%2;
		n = n/2;
		
		s.push(rem);
	     
	}
	
	while(s.empty()==0)
	{
		cout<<s.pop()<<" ";
	}
	
	return 0;
}
