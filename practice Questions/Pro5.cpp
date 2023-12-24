/*
5.
Create a singly linked list of integers.Implement following functions as independant functions.
(Revise independant function through notebook.Think about diagram)
-create()
-show()
-addatbeg()
-addatend() 
-search()
-count()
-delatbeg()
-delatend()
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
		data  = 0;
		next = NULL;
	}
	
	node(int a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode deleted : "<<endl;
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
		
		node * gethead()
		{
			return head;
		}
		
		friend void indcreate(SLL & T);
		friend void indaddatbeg(SLL &T,int x);
		friend void inddelatbeg(SLL &T);
		friend void indaddatend(SLL &T,int x);
		friend void inddelatend(SLL &T);
		friend int main();
};

void indcreate(SLL & T)
{
	int n,x;
	
	node *p;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"No nodes are written : "<<endl;
		return;
	}
	else
	{
		cout<<"ENter the frist node"<<endl;
		cin>>x;
		
		T.head = new node(x);
		
		p = T.head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
	}
	
}

void indshow(node *p)
{
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

void indaddatbeg(SLL & T,int x)
{
	node * p;
	
	p = new node(x);
	
	if(T.head == NULL)
	{
		T.head = p;
	}
	else
	{
		p->next = T.head;
		
		T.head = p;
	}
}

void indaddatend(SLL & T,int x)
{
	node * p;
	
	p = new node(x);
	
	if(T.head == NULL)
	{
		T.head = p;
	}
	else
	{
		node*q;
		
		q = T.head;
		
		while(q->next!=NULL)
		{
			q = q->next;
		}
		
		q->next = p;
	}
}

void inddelatbeg(SLL &T)
{
	if(T.head == NULL)
	{
		cout<<"empty list"<<endl;
		return;
	}
	if(T.head->next == NULL)
	{
		delete T.head;
		
		T.head = NULL;
	}
	else
	{
		node *p;
		
		p = T.head;
		
		T.head = T.head->next;
		
		delete p;
	}
}

void inddelatend(SLL &T)
{
	if(T.head == NULL)
	{
		cout<<"empty list";
		return;
	}
	if(T.head->next == NULL)
	{
		delete T.head;
		
		T.head = NULL;
	}
	else
	{
		node * p;
		node *q;
		p = T.head;
		
		while(p->next!=NULL)
		{
			q = p;
			
			p = p->next;
		}
		
		q->next = NULL;
		
		delete p;
	}
}

int indcount(node *p)
{
	int c = 0;
	
	while(p!=NULL)
	{
		c++;
		
		p = p->next;
	}
	
	return c;
}
void indsort(node*p)
{
	node *q;
	int temp;
	
	for(p ; p!=NULL ; p = p->next)
	{
		for(q = p->next; q!=NULL ; q = q->next)
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

int indsearch(node*p,int x)
{
	while(p!=NULL)
	{
		if(p->data == x)
		{
			return 1;
		}
		
		p = p->next;
	}
	
	return 0;
}

int main()
{
	SLL s1;
	int x;
	node * h;
	cout<<"\n-----creating--------"<<endl;
	indcreate(s1);
	h = s1.gethead();
	cout<<"\n------show------------"<<endl;
	indshow(s1.head);
	cout<<"\n------addatbeg--------"<<endl;
	cout<<"\nenter data to add at beg : "<<endl;
	cin>>x;
	indaddatbeg(s1,x);
	//h = s1.gethead();
	indshow(s1.head);
	cout<<"\n-----------addatend---------"<<endl;
	cout<<"ENter the data to add at end : "<<endl;
	cin>>x;
	indaddatend(s1,x);
	indshow(s1.head);
	cout<<"\n------count------"<<endl;
	cout<<"total count = "<<indcount(h)<<endl;
	cout<<"---------delatebeg-------"<<endl;
	inddelatbeg(s1);
	indshow(s1.head);
	cout<<"\n--------delatend----------"<<endl;
	inddelatend(s1);
	indshow(s1.head);
	cout<<"\n----------sort-----------"<<endl;
	indsort(s1.head);
	indshow(s1.head);
	cout<<"\n---------search----------"<<endl;
	cout<<"\nenter the data to search : "<<endl;
	cin>>x;
	if(indsearch(h,x))
	{
		cout<<"found";
	}
	else
	{
		cout<<"not found"<<endl;
	}
	
	return 0;
}
