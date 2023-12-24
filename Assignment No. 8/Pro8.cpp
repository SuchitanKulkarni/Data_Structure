/*
Q8.Scan a number from user.Create its 16 bit binary using SLL.
Print that binary.
*/

#include<iostream>
using namespace std;


class node
{
	public:
		
		int data;
		node* next;
		
	node()
	{
		data =  0;
		next = NULL;  
	}
	node(int a)
	{
		data  =  a;
		next = NULL;
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
		
		void addatend(int);
		void recshow(node*);
		
		node*gethead()
		{
			return head;
		}
		
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

void SLL::recshow(node*p)
{
	if(p==NULL)
	{
		return;
	}
	else
	{
		recshow(p->next);
		
		cout<<p->data<<" ";
	}
}

int main()
{
	int n;
	
	SLL s1;
	
	cout<<"Enter the digit : "<<endl;
	cin>>n;
	
	for(int i=0;i<16;i++)
	{
		int rem;
		rem = n%2;
		n = n/2;
		
		s1.addatend(rem);
	}
	
	node*h;
	
	h = s1.gethead();
	
	s1.recshow(h);
	
	return 0;
}
