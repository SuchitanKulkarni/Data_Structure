/*
2.create 2 linked lists of integers.Merge these 2 lists in a third
linked list. Print 3rd linked list.(Sorting is not necessary)
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
		next =NULL;
	}
	node(int a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"node is deleted : "<<endl;
		
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
	void merge(SLL,SLL);
	void show();
	void addatend(int);
	
};

void SLL :: create()
{
	int n,x;
	
	node *p;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"no nodes are entered : "<<endl;
		return;
	}
	else
	{
		cout<<"Enter the first node :  "<<endl;
		cin>>x;
		
		head = new node(x);
		
		p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p =p->next;
		}
	}
	
}

void SLL :: show()
{
	node * p;
	
	p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

void SLL::merge(SLL T1,SLL T2)
{
	node * p;
	
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

void SLL::addatend(int x)
{
	node *p;
	
	p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node * q;
		
		q = head;
		
		while(q->next!=NULL)
		{
			q =q->next;
		}
		
		q->next = p;
	}
}

int main()
{
	SLL s1,s2,s3;
	
	cout<<"\n----first---"<<endl;
	s1.create();
	cout<<"\n -----second-----"<<endl;
	s2.create();
	cout<<"-------merge------"<<endl;
	s3.merge(s1,s2);
	
	cout<<"-----show merge----"<<endl;
	s3.show();
	
	return 0;
}
