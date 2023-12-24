/*
Q6.Create 2 SLL.Sort them in ascending order.Merge them in third list 
so that third list also will be sorted.
Remember,its not sort after merge.Its sort during merge process.
*/

#include<iostream>
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

class SLL
{
	node*head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void create();
		void sort();
		void merge_sort(SLL,SLL);
		void addatend(int x);
		void show();
};

void SLL::create()
{
	int n,x;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"Invalid number of nodes"<<endl;
		return;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		node* p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
	}
}

void SLL::sort()
{
	node* p;
	node*q;
	int temp;
	
	for(p = head;p!=NULL;p = p->next)
	{
		for(q = p->next; q!=NULL; q = q->next)
		{
			if(p->data > q->data)
			{
				temp = p->data;
				p->data = q->data;
				q->data =temp;  
			}
		}
	}
}

void SLL::merge_sort(SLL T1,SLL T2)
{
	node*p = T1.head;
	node*q = T2.head;
	
	while(p!=NULL && q!=NULL)
	{
		if(p->data <q->data)
		{
			addatend(p->data);
			
			p = p->next;
		}
		else
		{
			addatend(q->data);
			
			q = q->next;
		}
	}
	
	while(p!=NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
	
	while(q!=NULL)
	{
		addatend(q->data);
		
		q = q->next;
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

void SLL::show()
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
	SLL s1,s2,s3;
	
	cout<<"-------first list------"<<endl;
	s1.create();
	s1.show();
	cout<<"\n-------second list------"<<endl;
	s2.create();
	s2.show();
	
	s1.sort();
	s2.sort();
	
	cout<<"\n------Merge------"<<endl;
	s3.merge_sort(s1,s2);
	s3.show();
	
	return 0;
}

