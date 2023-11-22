/*
4.Keep scanning a number from user.If number is positive,add it to
linked list of positive numbers.If number is negative, add it to list of
negative numbers. Stop scanning number when user enters 0.Print
total number of positive & negative numbers. Find the smallest
number from negative linked list and largest from positive linked list.
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
		int data;
		node * next;
		
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

class SLL
{
	node * head;
	
    public:
    	
    	SLL()
    	{
    		head = NULL;
		}
		
		void create(int);
		void smallest();
		void largest();
		void show();
		void addatend(int);
};

void SLL :: create(int x)
{
	addatend(x);
}

void SLL :: addatend(int x)
{
	node * p = NULL;
	
	p = new node (x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node*q = NULL;
		
		q = head;
		
		while(q->next!=NULL)
		{
			q = q->next;
		}
		
		q->next = p;
	}
}

void SLL :: show()
{
	node* p = NULL;
	
	p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p =p->next;
	}
}

void SLL :: largest()
{
	node * p =  NULL;
	
	p = head;
	
	node * q = NULL;
	
	int temp = p->data;
	
	for(p = head ; p!=NULL; p= p->next)
	{
		for(q = p->next ; q!=NULL ; q = q->next)
		{
			if(p->data > q->data)
			{
				temp = p->data;
			}
			else
			{
				temp = q->data;
			}
		}
	}
	
	cout<<"\n\nLargest = "<<temp;
}

void SLL :: smallest()
{
	node * p = NULL;
	node * q = NULL;
	int temp;
	p = head;
	
	temp = p->data;
	
	for(p = head ; p!=NULL ; p = p->next)
	{
		for(q = p->next ; q!=NULL;q = q->next)
		{
			if(p->data < q->data)
			{
				temp = p->data;
			}
			else
			{
				temp = q->data;
			}
		}
	}
	
	cout<<"\n\nsmallest = "<<temp<<endl;
}

int main()
{
	int x;
	
	SLL pos,neg;
	
	while(1)
	{
		cout<<"Enter the integers : "<<endl;
		cin>>x;
		
		if(x == 0)
		{
			break;
		}
		
		if(x>0)
		{
			pos.create(x);
		}
		if(x<0)
		{
			neg.create(x);
		}
	}
	
	cout<<"\n---------posivite integers list-----------"<<endl;
	pos.show();
	cout<<"\n---------negetive integer list------------"<<endl;
	neg.show();
	
	pos.largest();
	neg.smallest();
	
	return 0;
	
}
