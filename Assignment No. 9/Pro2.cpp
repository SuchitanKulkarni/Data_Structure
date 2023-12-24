/*
Q2.WAP to create DCLL and implement following functions.
-create()
-show()
-count()
-search()
-addatbeg()
-addbypos()
-delatbeg()
-delbypos()
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

class DCLL
{
	node*front;
	node*rear;
	
	public:
		
		DCLL()
		{
			front = rear  = NULL;
		}
		
		void create();
		void show();
		int count();
		int search(int);
		void addatbeg(int);
		void addatend(int);
		void addbypos(int,int);
		void delatbeg();
		void delatend();
		void delbypos(int);
};

void DCLL::create()
{
	int n,x;
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"invalid number of nodes :"<<endl;
		return ;
	}
	else
	{
		cout<<"Enter the frist node : "<<endl;
		cin>>x;
		
		front = new node(x);
		front->next = front;
		front->prev = front;
		rear = front;
		
		node*p = front;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			p->next->next = front;
			p->next->prev = p;
			front->prev = p->next;
			
			p = p->next;
		}
		
		rear = p;
	}
}

void DCLL::show()
{
	node*p = front;
	
	do
	{
		cout<<p->data<<" ";
		
		p = p->next;
		
	}while(p!=front);
}

int DCLL::count()
{
	node* p = front;
	
	int c = 0;
	
	do
	{
		c++;
		
		p = p->next;
		
	} while(p!=front);
	
	return c;
}

int DCLL::search(int x)
{
	node*p = front;
	
	do
	{
		if(p->data == x)
		{
			return 1;
		}
		
		p = p->next;
		
	}while(p!=front);
	
	return 0;
}

void DCLL::addatbeg(int x)
{
	node*p = new node(x);
	
	if(front == NULL)
	{
		front = p;
		front->next = front;
		front->prev = front;
		rear = front;
	}
	else
	{
		p->next = front;
		p->prev = rear;
		front->prev = p;
		front = p;
		rear->next = front;
	}
}

void DCLL::addatend(int x)
{
	node* p = new node(x);
	
	if(front==NULL)
	{
		front = p;
		front->next = front;
		front->prev = front;
		rear = front;
	}
	else
	{
		node*q;
		q = rear;
		p->next = front;
		p->prev = rear;
		rear->next = p;
		
		rear = p;
	}
}

void DCLL::addbypos(int pos,int x)
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
		node*q = front;
		
		node* p = new node(x);
		
		for(int i=1;i<pos-1;i++)
		{
			q = q->next;
		}
		
		p->next = q->next;
		p->prev = q;
		p->next->prev = p;
		q->next = p;
	}
}

void DCLL::delatbeg()
{
	if(front==NULL)
	{
		cout<<"empty list "<<endl;
		return ;
	}
	else if(front == rear)
	{
		delete front;
		
		front = rear = NULL;
	}
	else
	{
		node*p = front;
		
		front = front->next;
		front->prev = rear;
		rear->next = front;
		
		delete p;
	}
}

void DCLL::delatend()
{
	if(front==NULL)
	{
		cout<<"empty list "<<endl;
		return;
	}
	else if(front==rear)
	{
		delete front;
		
		front = rear = NULL;
	}
	else
	{
		node *p;
		
		p = rear;
		
		rear = rear->prev;
		rear->next = front;
		
		delete p;
	}
}

void DCLL::delbypos(int pos)
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
		node*p = front;
		
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node*q;
		
		q = p->next;
		
		p->next = q->next;
		q->next->prev = p;
		
		delete q;
		
	}
}

int main()
{
	DCLL d1;
	
	int x,pos;
	
	cout<<"----------create--------"<<endl;
	d1.create();
	d1.show();
	
	cout<<"\nnumber of nodes : "<<d1.count()<<endl;
	
	cout<<"\n-------addatbeg--------"<<endl;
	cout<<"enter the data : "<<endl;
	cin>>x;
	d1.addatbeg(x);
	d1.show();
	cout<<"\n-------addatend-------"<<endl;
	cout<<"Enter the data : "<<endl;
	cin>>x;
	d1.addatend(x);
	d1.show();
	
	cout<<"\n------addbypos------"<<endl;
	cout<<"Enter the position and data :  "<<endl;
	cin>>pos>>x;
	d1.addbypos(pos,x);
	d1.show();
	cout<<"\n------search---------"<<endl;
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
	cout<<"\n------delatbeg-----"<<endl;
	d1.delatbeg();
	d1.show();
	cout<<"\n------delatend------"<<endl;
	d1.delatend();
	d1.show();
	cout<<"\n-------delbypos----"<<endl;
	cout<<"Enter the position : "<<endl;
	cin>>pos;
	d1.delbypos(pos);
	d1.show();
	
	return 0;
}
