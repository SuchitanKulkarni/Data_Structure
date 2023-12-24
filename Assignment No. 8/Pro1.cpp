/*
Q1.Create SLL with following functions with switch case.
-recursive create_n()
-recursive show()
-recursive search()
-recursive count()
-recursive addatend()
-recursive delatend()
-recursive makeEmpty()
-sort()
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
		cout<<"node is deleted"<<endl;
	}
};

class SLL
{
	node*head;
	
	public:
		
		SLL()
		{
			head=NULL;
		}
		
		
		node* reccreate_n(int n);
		void create();
		void addatend();
		void recshow(node*);
		int reccount(node*);
		node* recaddatend(node*,int);
		node* recdelatend(node*);
		node * recmakeempty(node*);
		void sort();
		
		friend int main();
		
};

node* SLL::reccreate_n(int n)
{
	if(n==0)
	{
		return NULL;
	}
	else
	{
		int x;
		cout<<"Enter the node:"<<endl;
		cin>>x;
		
		node*p = new node(x);
		
		p->next = reccreate_n(n-1);
		
		return p;
		
	}
}

void SLL::create()
{
	int n;
	cout<<"Enter the number of nodes :"<<endl;
	cin>>n;
	
	head = reccreate_n(n);
}

void SLL::addatend()
{
	int x;
	
	cout<<"Enter the node:"<<endl;
	cin>>x;
	
	head = recaddatend(head,x);
}

void SLL::recshow(node*p)
{
	if(p==NULL)
	{
		return;
	}
	else
	{
		cout<<p->data<<" ";
		
		recshow(p->next);
	}
}

int SLL::reccount(node*p)
{
	if(p==NULL)
	{
		return 0;
	}
	else
	{
		int res;
		
		res = reccount(p->next);
		
		return res+1;
	}
}

node* SLL::recaddatend(node*p,int x)
{
	if(p==NULL)
	{
		p = new node(x);
		
		return p;
	}
	else
	{
		p->next = recaddatend(p->next,x);
		
		return p;
	}
}

node* SLL::recdelatend(node*p)
{
	
	if(p==NULL)
	{
		cout<<"list empty"<<endl;
		return NULL;
	}
	else if(p->next == NULL)
	{
		delete p;
		return NULL; 
	}
	else
	{
		
		p->next = recdelatend(p->next);
			return p;		
	}
	
}

node* SLL::recmakeempty(node*p)
{

    if(p->next==NULL)
	{
		return p;
	}
	else
	{
		
		node * q = recmakeempty(p->next);
		 
		 delete q;
		 
		 return p;
		 
	}
}

void SLL::sort()
{
	node*p,*q;
	int temp;
	
	for(p = head;p!=NULL;p = p->next)
	{
		for(q = p->next;q!=NULL;q = q->next)
		{
			if(p->data>q->data)
			{
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

int main()
{
	SLL s1;
	
	int x,ch;
	
	do
	{
		cout<<"----------MENU------------"<<endl;
		cout<<"\npress \n1.create\n2.show\n3.count\n4.addatend\n5.delatend\n6.makeemplty\n7.sort\n8.exit"<<endl;
		
		cout<<"Enter your choice : "<<endl;
		cin>>x;
		
		switch(x)
		{
			case 1 : s1.create();
						break;
						
			case 2 : s1.recshow(s1.head);
						break;
						
			case 3 : cout<<"count = "<<s1.reccount(s1.head);
						break;
						
			case 4 : s1.addatend();
						break;
						
			case 5 : s1.recdelatend(s1.head);
						break;
						
			case 6 : s1.recmakeempty(s1.head);
						s1.head = NULL;
						break;
						
			case 7 : s1.sort();
						break;
						
			case 8 : exit(1);
			
			default : cout<<"\nwrong choice : "<<endl;
		}
		
		cout<<"\ndo you wnat to continue : "<<endl;
		cin>>ch;
		
	}while(ch!=0);
	
}
