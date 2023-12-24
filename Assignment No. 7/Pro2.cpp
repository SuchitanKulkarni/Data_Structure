/*
Q2.WAP to implement DLL with following options.
-create_stop()
-show()
-show_reverse()
-count()
-search()
-addatbeg()
-addatend()
-addbypos()
-delatbeg()
-delatend()
-delbypos()
*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
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
	
	public :  
	
	DLL()
	{
		head = NULL;
	}
	 
	void create_stop();
	void show();
	void show_reverse();
	int count();
	int search(int);
	void addatbeg(int);
	void addatend(int);
	void addbypos(int,int);
	void delatbeg();
	void delatend();
	void delbypos(int);
};

void DLL::create_stop()
{
	int x;
	char str[90];
	
	while(1)
	{
		cout<<"Enter the node : "<<endl;
		cin.getline(str,90);
		
		if(strcmp(str,"stop")==0)
		{
			break;
		}
		else
		{
			x = atoi(str);
			
			addatend(x);
		}
	}
}

void DLL::show()
{
	node *p = head;
	
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

void DLL::addatend(int x)
{
	node * p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node * q;
		
		q = head;
		
		while(q->next!= NULL)
		{
			q = q->next;
		} 
		
		p->prev = q;
		
		q->next = p;
		
	}
}

int DLL::count()
{
	node*p = head;
	
	int c=0;
	
	while(p!=NULL)
	{
		c++;
		
		p = p->next;
	}
	
	return c;
}

void DLL::addatbeg(int x)
{
	node *p = new node(x);
	
	if(head==NULL)
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

void DLL::addbypos(int pos,int x)
{
	int n = count();
	
	if(pos<1 || pos>n+1)
	{
		cout<<"invalid position"<<endl;
		return;
	}
	if(pos==1)
	{
		addatbeg(x);
	}
	else if(pos==n+1)
	{
		addatend(x);
	}
	else
	{
		node*q = head;
		
		for(int i=1;i<pos-1;i++)
		{
			q = q->next;
		}
		
		node * p = new node(x);
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
		cout<<"list empty"<<endl;
		return;
	}
	else if(head->next == NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		node*p;
		p = head;
		head = head->next;
		head->prev = NULL;
	}
}

void DLL::delatend()
{
	if(head==NULL)
	{
		cout<<"list empty "<<endl;
		return;
	}
	else if(head->next==NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		node* p = head;
		
		while(p->next!=NULL)
		{
			p = p->next; 
		}
		
		node*q = p->prev;
		q->next = NULL;
		
		delete p;
	}
}

void DLL::delbypos(int pos)
{
	int n = count();
	
	if(pos<1 || pos>n)
	{
		cout<<"Invalid position"<<endl;
		return;
	}
	if(pos==1)
	{
		delatbeg();
	}
	else if(pos==n)
	{
		delatend();
	}
	else
	{
		node * p;
		
		p = head;
		
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node * q = p->next;
		
		p->next = q->next;
		q->next->prev = p;
		
		delete q; 
	}
}
int DLL::search(int x)
{
	node * p;
	p = head;
	
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
	DLL d1;
	int x,pos;
	
	cout<<"\n--------create_stop-----"<<endl;
	d1.create_stop();
	d1.show();
	cout<<"\n-------show_reverse-----"<<endl;
	d1.show_reverse();
	cout<<"\n------addatbeg------"<<endl;
	cout<<"Enter the data : "<<endl;
	cin>>x;
	d1.addatbeg(x);
	d1.show();
	cout<<"\n------addatend------"<<endl;
	cout<<"ENter the data : "<<endl;
	cin>>x;
	d1.addatend(x);
	d1.show();
	cout<<"\n-----delatbeg-----"<<endl;
	d1.delatbeg();
	d1.show();
	cout<<"\n-----delatend-----"<<endl;
	d1.delatend();
	d1.show();
	cout<<"count : "<<d1.count()<<endl;
	cout<<"\n-----search------"<<endl;
	cout<<"Enter the data to search : "<<endl;
	cin>>x;
	if(d1.search(x)==1)
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
	cout<<"\n------delbbypos-------"<<endl;
	cout<<"Enter the position : "<<endl;
	cin>>pos;
	d1.delbypos(pos);
	d1.show();
	
	return 0;
}
