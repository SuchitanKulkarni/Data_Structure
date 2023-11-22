/*
3.Create 2 singly linked lists of integers.Sort them in ascending order.
Merge them in third list so that third list will also be sorted.
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
		data =  a;
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
		
	void create();
	void show();
	void sort();
	void addatend(int);
	void merge(SLL,SLL);
};

void SLL::create()
{
	int n,x,i;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"No nodes are present "<<endl;
		return ;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		node * p = NULL;
		
		p = head;
		
		for(i=1;i<n;i++)
		{
			cout<<"enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
	}
}

void SLL :: show()
{
	node * p = NULL;
	
	p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

void SLL::addatend(int x)
{
	node *p = NULL;
	
	p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node * q = NULL;
		
		q = head;
		
		while(q->next != NULL)
		{
			q = q->next;
		}
		
		q->next = p;
	}
}

void SLL :: sort()
{
	node *p = NULL;
	node * q = NULL;
	
	int temp;
	
	for(p = head; p!=NULL ; p = p->next)
	{
		for(q = p->next ; q!=NULL ; q = q->next)
		{
			if(p->data > q->data)
			{
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

void SLL::merge(SLL T1,SLL T2)
{
	node * p = NULL;
	
	p = T1.head;
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
	
	p = T2.head;
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
}

int main()
{
	SLL s1,s2,s3;
	
	cout<<"---------for 1st list-------------"<<endl;
	s1.create();
	cout<<"\n----------for 2nd list-----------"<<endl;
	s2.create();
	s1.sort();
	cout<<"\n----------1st sorted list----------"<<endl;
	s1.show();
	cout<<"\n----------2nd sorted list-----------"<<endl;
	s2.sort();
	s2.show();
	cout<<"\n------------3rd list (after merge)-----"<<endl;
	s3.merge(s1,s2);
	s3.show();
	
	return 0;
}
