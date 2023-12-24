/*
2.Create 2 DLL.Merge them in third DLL.
Do not use library function to reverse the string.
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
	~node()
	{
		cout<<"\nnode deleted"<<endl;
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
		void merge(DLL,DLL);
		void show();
		void addatend(int);
};

void DLL::create()
{
	int n,x;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"Invalid number of nodes "<<endl;
		return;
	}
	else
	{
		cout<<"Enter the frist node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		node*p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p->next->prev = p;
			
			p = p->next;
		}
	}
}

void DLL::merge(DLL D1,DLL D2)
{
	node*p = D1.head;
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
	
	p = D2.head;
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
};

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
		
		q->next = p;
		p->prev = q;
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
	DLL d1,d2,d3;
	
	cout<<"\n-----first list-----"<<endl;
	d1.create();
	d1.show();
	
	cout<<"\n-------second list---"<<endl;
	d2.create();
	d2.show();
	
	cout<<"\n------merge----"<<endl;
	d3.merge(d1,d2);
	d3.show();
	
	return 0;
}
