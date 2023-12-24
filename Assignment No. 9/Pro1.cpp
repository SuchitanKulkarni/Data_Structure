/*
Q1.WAP to create DLL and implement following functions.
-create()
-show()
-search()
-count()
-addatbeg()
-addatend()
-addbypos()
-delatbeg()
-delatend()
-delbypos()
-show_reverse()
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
		void show();
		int search(int);
		int count();
		void addatbeg(int);
		void addatend(int);
		void addbypos(int ,int);
		void delatbeg();
		void delatend();
		void delbypos(int);
		void show_reverse();
};

void DLL::create()
{
	int n,x;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"invalid number of nodes"<<endl;
		return;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		head =  new node(x);
		
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

void DLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

void DLL::show_reverse()
{
	node*p = head;
	
	while(p->next!=NULL)
	{
		p = p->next;
	}
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->prev;
	}
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
		
		p = p->next;
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
		head->prev = p;
		head = p;
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

void DLL::addbypos(int pos,int x)
{
	int n = count();
	
	if(pos<1||pos>n+1)
	{
		cout<<"invalid position"<<endl;
		return;
	}
	else if(pos==1)
	{
		addatbeg(x);
	}
	else if(pos==n+1)
	{
		addatend(x);
	}
	else
	{
		node*p = new node(x);
		node*q = head;
		
		for(int i=1;i<pos-1;i++)
		{
			q = q->next;
		}
		
		p->next = q->next;
		p->prev = q;
		q->next = p;
		p->next->prev = p;
	}
}

void DLL::delatbeg()
{
	if(head==NULL)
	{
		cout<<"Enmpty list"<<endl;
		return;
	}
	else if(head->next == NULL)
	{
		delete head;
		head = NULL;
	}
	else
	{
		node*p = head;
		head = head->next;
		head->prev = NULL;
		
		delete p;
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

void DLL::delatend()
{
	if(head == NULL)
	{
		cout<<"Empty list"<<endl;
		return;
	}
	else if(head->next == NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		node*p = head;
		
		while(p->next!=NULL)
		{
			p = p->next;
		}
		
		node *q;
		
		q = p->prev;
		q->next = NULL;
		
		delete p;
	}
}

void DLL::delbypos(int pos)
{
	int n = count();
	
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
		node*p = head;
		
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node*q = p->next;
		
		p->next = q->next;
		q->next->prev = p;
		
		delete q;
	}
}

int main()
{
	DLL d1;
	
	int x,pos;
	
	cout<<"------create----------"<<endl;
	d1.create();
	d1.show();
	cout<<"\n------reverse show---------"<<endl;
	d1.show_reverse();
	cout<<"\nnumber of nodes = "<<d1.count()<<endl;
	cout<<"\n-----addatbeg------"<<endl;
	cout<<"enter the data : "<<endl;
	cin>>x;
	d1.addatbeg(x);
	d1.show();
	cout<<"\n-----addatend------"<<endl;
	cout<<"Enter the data : "<<endl;
	cin>>x;
	d1.addatend(x);
	d1.show();
	
	cout<<"\n------addbypos-----"<<endl;
	cout<<"Enter the position and data : "<<endl;
	cin>>pos>>x;
	d1.addbypos(pos,x);
	d1.show();
	cout<<"\n--------search--------"<<endl;
	cout<<"Enter the data to search-------"<<endl;
	cin>>x;
	if(d1.search(x)==1)
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
		
    }
    
    cout<<"\n------delatbeg-------"<<endl;
    d1.delatbeg();
    d1.show();
    cout<<"\n------delatend------"<<endl;
    d1.delatend();
    d1.show();
    cout<<"\n-------delbypos----"<<endl;
    cout<<"Enter the position : " <<endl;
    cin>>pos;
    d1.delbypos(pos);
    d1.show();
    
    return 0;
}
