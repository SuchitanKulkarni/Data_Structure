/*
Q1.WAP to implement CLL with following functions.
-create_n()
-create_stop()
-show()
-count()
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
};

class CLL
{
	node * front;
	node * rear;
	
	public:
		
		CLL()
		{
			front = NULL;
			rear = NULL;
		}
		
		void create_n();
		void create_stop();
		void show();
		int count();
		void addatend(int);
		void addatbeg(int);
		void addbypos(int,int);
		void delatbeg();
		void delatend();
		void delbypos(int);
		
};

void CLL::create_n()
{
	int n,x;
	
	cout<<"ENter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"Invalid number of nodes  "<<endl;
		return;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		front = new node(x);
		rear = front;
		front ->next = front;
		
		node * p;
		
		p = front;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			p = p->next;
		} 
		
		rear = p;
		rear->next = front;
		
	}
}

void CLL :: create_stop()
{
	char str[90];
	int x,i;
	cin.ignore(1);
	
	while(1)
	{
		cout<<"Enter the node : "<<endl;
		cin.getline(str,90);
		
		if(strcmp(str,"stop")== 0)
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

void CLL::show()
{
    node * p;
    
    p = front;
	
	do
	{
		cout<<p->data<<" ";
		
		p = p->next;
		
	}while(p!=front);
}

int CLL::count()
{
	node *p = front;
	
	int c = 0;
	
	do
	{
		c++;
		
		p = p->next;
		
	}while(p!=front);
	
	return c;
}

void CLL::addatend(int x)
{
	node * p = new node(x);
	
	if(front == NULL)
	{
		front = p;
		rear = front;
		rear->next = front;
	}
	else
	{
		p->next = rear->next;
		rear->next = p;
		rear = p;
		
	}
}

void CLL::addatbeg(int x)
{
	node*p = new node(x);
	
	if(front==NULL)
	{
		front = p;
		rear = front;
		rear->next = front;
	}
	else
	{
		p->next = front;
		front = p;
		rear->next = front;
	}
}

void CLL :: addbypos(int pos,int x)
{
	int n;
	
	n = count();
	
	if(pos<1 || pos>n+1)
	{
		cout<<"\ninvalid position"<<endl;
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
		node * p = front;
		
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node *q = new node(x);
		
		q->next = p->next;
		p->next = q;
	}
	
}

void CLL ::delatbeg()
{
	if(front == NULL)
	{
		cout<<"list empty"<<endl;
		return ;
	}
	if(front==rear)
	{
		delete front;
		
		front = rear = NULL;
	}
	else
	{
		node*p = front;
		
		front = front->next;
		rear->next = front;
		
		delete p;
	}
}

void CLL::delatend()
{
	if(front==NULL)
	{
		cout<<"list empty"<<endl;
		return;
	}
	else if(front==rear)
	{
		delete front;
		
		front = rear = NULL;
	}
	else
	{
		node *p = front;
		
		while(p->next!= rear)
		{
			p = p->next;
		}
		
		node *q = rear;
		
		rear = p;
		
		rear->next = front; 
		
		delete q;
		
	}
}

void CLL::delbypos(int pos)
{
	int n;
	
	n = count();
	
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
		node *p = front;
		
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node * q = p->next;
		
		p->next = q->next;
		
		delete q;
	}
}

int main()
{
	CLL c1;
	int x,pos;
	cout<<"\n-----create_n--------"<<endl;
	c1.create_n();
	cout<<"\n--------show--------"<<endl;
	c1.show();
	cout<<"\n---------create_stop----"<<endl;
	c1.create_stop();
	cout<<"\n----------show----------"<<endl;
	c1.show();
	cout<<"number of count : "<<c1.count()<<endl;
	cout<<"\n--------addatbeg-----"<<endl;
	cout<<"Enter the data : "<<endl;
	cin>>x;
	c1.addatbeg(x);
	c1.show();
	cout<<"\n-----addatend-----"<<endl;
	cout<<"ENter the data : "<<endl;
	cin>>x;
	c1.addatend(x);
	c1.show();
	cout<<"\n--------addbypos----"<<endl;
	cout<<"enter position and data : "<<endl;
	cin>>pos>>x;
	c1.addbypos(pos,x);
	c1.show();
	cout<<"\n--------delatbeg------"<<endl;
	c1.delatbeg();
	c1.show();
	cout<<"\n--------delatend----------"<<endl;
	c1.delatend();
	c1.show();
	cout<<"\n--------delbypos--------"<<endl;
	cout<<"Enter the position : "<<endl;
	cin>>pos;
	c1.delbypos(pos);
	c1.show();
	
}
