/*
Q2.Create DLL with following functions with switch.
-show()
-search()
-count()
-addatbeg()
-addatend()
-delatend()
-delbypos()
-makeEmpty()
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
		cout<<"node is deleted"<<endl;
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
		void show();
		int search(int);
		int count();
		void addatbeg(int);
		void addatend(int);
		void delatend();
		void delbypos(int);
		void makeempty();
		void delatbeg();
};

void DLL::create()
{
	int n,x;
	
	cout<<"enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"invalid number of node "<<endl;
		return;
	}
	else
	{
		cout<<"Enter the frist node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		node* p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the node : "<<endl;
			cin>>x;
			p->next = new node(x);
			p->next->prev = p;
			
			p =p->next;
		}
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

int DLL::count()
{
	node*p = head;
	int c = 0;
	
	while(p!=NULL)
	{
		c++;
		
		p = p->next;
	}
	
	return c;
}

int DLL::search(int x)
{
	node*p = head;
	
	while(p!=NULL)
	{
		if(p->data == x)
		{
			return 1;
		}
	}
	
	return 0;
}

void DLL::addatbeg(int x)
{
	node*p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		p->next = head;
		head ->prev = p;
		head = p;
	}
}

void DLL::addatend(int x)
{
	node*p = new node(x);
	
	if(head  == NULL)
	{
		head = p;
	}
	else
	{
		node*q = head;
		
		while(q->next !=NULL)
		{
			q = q->next; 
		}
		
	    p->prev = q;
		q->next = p;
	}
}

void DLL::delatend()
{
	if(head==NULL)
	{
		cout<<"list empty"<<endl;
		return;
	}
	else if(head->next==NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		node *q = head;
		
		while(q->next!=NULL)
		{
			q = q->next;
		}
		
		node *p;
		p = q->prev;
		
		p->next = NULL;
		
		delete q;
		
	}
}

void DLL::delbypos(int pos)
{
	int n;
	
	n = count();
	
	if(pos<1||pos>n)
	{
		cout<<"invalid position"<<endl;
		return;
	}
	else if(pos==1)
	{
		delatbeg();
	}
	else if(pos==n)
	{
		delatend();
	}
	else
	{
		node *p = head;
		
		for(int i=1;i<pos-1;i++)
		{
			p =p->next;
		}
		
		node *q;
		
		p->next = q;
		p->next = q->next;
		q->next->prev = p;
		
		delete q; 
		
	}
}

void DLL::delatbeg()
{
	if(head==NULL)
	{
		cout<<"list empty"<<endl;
		return;
	}
	else if(head->next ==NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		node *p;
		head = p;
		head = head->next;
		head->prev = NULL;
		delete p;
	}
}

void DLL::makeempty()
{
	node*p = head;
	node*q;
	while(p!=NULL)
	{
		q = p;
		p =p->next;
		
		delete q;
	}
	head = NULL;
}

int main()
{
	DLL d1;
	
	int x,ch;
	
	do
	{
		cout<<"----------menu---------"<<endl;
		cout<<"\npress\n1.create\n2.show\n3.count\n4.addatbeg\n5.addatend\n6.delatend\n7.delbypos\n8.makeempty\n9.exit"<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>x;
		switch(x)
		{
			case 1 : d1.create();
						break;
						
			case 2 : d1.show();
						break;
			
			case 3 : cout<<"count = "<<d1.count();
						break;
						
			case 4 : cout<<"Enter the data :"  <<endl;
			         cin>>x;
					d1.addatbeg(x);
						break;
						
			case 5 : cout<<"Enter the data :"  <<endl;
			         cin>>x;
			         d1.addatend(x);
			           break;
			           
			case 6 : d1.delatend();
			 			break;
			case 7 : cout<<"Enter the position : "<<endl;
					 cin>>x;
					 d1.delbypos(x);
					 		break;
			case 8 : d1.makeempty();
						break;
						
			case 9 : exit(0);
			
			default : cout<<"\nwrong input"<<endl;
		}
		
		cout<<"\ndo you want to continue : "<<endl;
		cin>>ch;
	}while(ch!=0);
}
