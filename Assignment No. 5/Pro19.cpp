/*

2.create a 2 linked lists of integers.Merge these 2 lists in a third
linked list. Print 3rd linked list.(Sorting is not necessary)
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
		data = 0;
		next = NULL;
	}
	node(int a)
	{
		data = a;
		next =  NULL;
	}
};

class SLL
{
	node * head ;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void create();
		void merge(SLL,SLL);
		void addatend(int);
		void show();
};

void SLL :: create()
{
	int n,x,i;
	
	cout<<"ENter the number of node : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"no nodes are entered "<<endl;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		node * p = NULL;
		
		head = new node(x);
		
		p = head;
		
		for(i = 1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			p = p->next;
		}
	}
}

void SLL :: addatend(int x)
{
	node * p;
	
	p = new node (x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node * q = NULL;
		
		    q = head;
		
		while(q->next!= NULL)
		{
			q = q->next;
		}
		
		q->next = p;
		
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

void SLL :: merge(SLL T1,SLL T2)
{
	node * p = NULL;
	
	p = T1.head;
	
	while(p!= NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
	
	p = T2.head;
	
	while(p!= NULL)
	{
		addatend(p->data);
		
		p = p->next;
	}
	
}

int main()
{
	SLL s1,s2,s3;
	
	s1.create();
	s2.create();
	cout<<"\n---------s1-------------"<<endl;
	s1.show();
	cout<<"\n----------s2-------------"<<endl;
	s2.show();
	cout<<"\n-----------s3(after merge)------------"<<endl;
	s3.merge(s1,s2);
	s3.show();
}
