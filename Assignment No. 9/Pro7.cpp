/*
Q7.Scan a string from user.Print this string in reverse order using stack(Linked list implementation)
*/

#include<iostream>
#define MAX 10;
using namespace std;

class node
{
	public:
		
		char data;
		node*next;
		
	node()
	{
		
		next = NULL;
	}
	node(char a)
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
		
		void push(char c)
		{
			node*p = new node(c);
			
			p->next = top;
			top = p;
		}
		
		char pop()
		{
			if(empty()==1)
			{
				cout<<"\nstack empty"<<endl;
			}
			else
			{
				char ch = top->data;
				
				node*p = top;
				top = top->next;
				
				delete p;
				
				return ch;
			}
		}
		
		void show()
		{
			node*p = top;
			while(p!=NULL)
			{
				cout<<p->data;
				
				p = p->next;
			}
		}
};

int main()
{
	char str[90];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,89);
	
	stack s;
	int i;
	while(str[i]!='\0')
	{
		s.push(str[i]);
		
		i++;
	}
	
	s.show();
	
	while(s.empty()==0)
	{
		cout<<s.pop()<<endl;
	}
	
	return 0;
}
