/*
Q8.WAP to create exact copy of a DLL.
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
		int data;
		node*next;
		node*prev;
		
	node()
	{
		data = 0;
		next = NULL;
		prev = NULL;
	}
	node(int a)
	{
		data = a;
		next = NULL;
		prev = NULL;
	}
};

class DLL
{
	node*head;
	
	public:
		
		DLL()
		{
			head = NULL;
		}
		
		void create();
		void copy(DLL);
		void addatend(int);
		void show();
		
};

void DLL::create()
{
	int n,x;
	
	cout<<"Enter the number of node : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"invalid number of nodes"<<endl;
		
		return ;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		node*p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			p->next->prev = p;
			
			p = p->next;
		}
	}
}

void DLL::addatend(int x)
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
		
		p->prev = q;
		q->next = p;
	}
}

void DLL::copy(DLL T)
{
	node*p = T.head;
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
}

void DLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

int main()
{
	DLL d1,d2;
	
	cout<<"-------create list-----"<<endl;
	d1.create();
	d1.show();
	d2.copy(d1);
	cout<<"\n------copy list-------"<<endl;
	d2.show();
	
	return 0;
}
