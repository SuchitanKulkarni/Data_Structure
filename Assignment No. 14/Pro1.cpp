/*
Q1.Scan a string from user.(string datatype).Create a singly linkedlist of characters in string.
SLL must contain unique characters.
*/

#include<iostream>
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
		node(char p)
		{
			data = p;
			next = NULL;
		}
		~node()
		{
			cout<<"\nnode deleted"<<endl;
			
		}
};

class SLL
{
	node*head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void addatend(char);
		void show();
		int search(char);
};

void SLL::addatend(char s)
{
	node*p = new node(s);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		if(search(s)==0)
		{
			node*q = head;
			
			while(q->next!=NULL)
			{
				q = q->next;
			}
			
			q->next = p;
		}
	}
}

void SLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

int SLL::search(char s)
{
	node*p = head;
	
	while(p!=NULL)
	{
		if(p->data == s)
		{
			return 1;
		}
		
		p = p->next;
	}
	
	return 0;
}

int main()
{
	char str[90];
	
	SLL s1;
	
	cout<<"enter the string : "<<endl;
	cin.getline(str,90);
	
	int i = 0;
	
	while(str[i]!='\0')
	{
		s1.addatend(str[i]);
		
		i++;
	}
	
	s1.show();
	
}
