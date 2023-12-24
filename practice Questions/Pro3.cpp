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
		data = a;
		next =  NULL;
	}
	
	~node()
	{
		cout<<"node deleted"<<endl;
	}
};

class SLL
{
	node *head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void create();
		void show();
		void sort();
		void merge(SLL,SLL);
		void addatend(int);
};

void SLL ::create()
{
	int n,x;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"no nodes are entered"<<endl;
	}
	else
	{
		node *p;
		
		cout<<"enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		p =  head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
	}
}

void SLL :: show()
{
	node *p;
	
	p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

void SLL :: sort()
{
	node *p;
	node *q;
	
	int temp;
	
	for(p = head; p!=NULL ; p = p->next)
	{
		for(q = p->next ;  q!=NULL ; q= q->next)
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

void SLL :: merge(SLL T1, SLL T2)
{
	node *p;
	
	p = T1.head;
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
	
	p  =T2.head;
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
	
}

void SLL ::addatend(int x)
{
	node * p;
	
	p = new node(x);
	
	if(head==NULL)
	{
		head = p;
	}
	else
	{
		node *q;
		
		q = head;
		
		while(q->next!=NULL)
		{
			q = q->next;
		}
		
		q->next = p;
		
	}
}

int main()
{
	SLL  s1,s2,s3;
	
	cout<<"\n----frist---------"<<endl;
	s1.create();
	cout<<"\n-----second-------"<<endl;
	s2.create();
	
	cout<<"\n------sort--------"<<endl;
	s1.sort();
	s1.show();
	cout<<"\n------sort2------"<<endl;
	s2.sort();
	s2.show();
	
	cout<<"\n--------merge------"<<endl;
	s3.merge(s1,s2);
	s3.show();
	
	return 0;
}
