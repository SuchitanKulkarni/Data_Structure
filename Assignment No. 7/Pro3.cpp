/*
Q3.WAP to implemnt DCLL
-create_n()
-show()
-search()
-count()
-addatbeg()
-adatend()
-delatbeg()
-delatend()
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
		int data;
		node * next;
		node * prev;
		
	node()
	{
		data = 0;
		next =NULL;
		prev = NULL;
	}
	node(int a)
	{
		data = a;
		next =NULL;
		prev = NULL;
	}
};

class DCLL
{
	node* front;
	node*rear;
	
	public:
		
		DCLL()
		{
			front = rear = NULL;
		}
		
		void create_n();
		void show();
		void addatbeg(int);
		void addatend(int);
		int search(int);
		void delatbeg();
		void delatend();
		int count();
};

void DCLL::create_n()
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
		front = new node(x);
		rear = front;
		rear->next = front;
		front->prev = front;
		
		node *p;
		
		p = front;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			p->next = new node(x);
			p->next->prev = p;
			p->next->next = front;
			front->prev = p->next;
			p = p->next;
		}
		
		rear = p;
	}
}

void DCLL::show()
{
	node * p;
	 
	p = front;
	
	do
	{
		cout<<p->data<<" ";
		p = p->next;;
		
	}while(p!=front);
}
int DCLL::count()
{
	node*p;
	p = front;
	
	int c = 0;
	
	do
	{
		c++;
		
		p = p->next;
	}while(p!=front);
	
	return c;
}
int DCLL::search(int x)
{
	node * p;
	
	p = front;
	
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
	node * p = new node(x);
	
	if(front==NULL)
	{
		front = p;
		front->next = front;
		front->prev = front;
		rear->next = front;
	}
	else 
	{
		p->next = front;
		p->prev = rear;
		front->prev = p;
		front = p;
		rear->next = p;
	}
}

void DCLL::addatend(int x)
{
	node*p = new node(x);
	
	if(front == NULL)
	{
		front = p;
		front->prev = front;
		front->next = front;
		rear->next = front;
	}
	else
	{
		node*q;
		
		q = rear;
		
		p->next = front;
		p->prev = rear;
		front->prev = p;
		q->next = p;
		rear = p;
	}
}
void DCLL::delatbeg()
{
	if(front==NULL)
	{
		cout<<"empty list"<<endl;
		return;
	}
	else if(front==rear)
	{
		delete front;
		front = rear = NULL;
	}
	else
	{
		node * p;
		p = front;
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
		cout<<"empty list"<<endl;
		return;
	}
	else if(front==rear)
	{
		delete front;
		
		front = rear = NULL;
	}
	else
	{
		node*p;
		p = rear;
		rear = rear->prev;
		rear->next = front;
		front->prev = rear;
		
		delete p;
	}
}

int main()
{
	DCLL dc1;
	
	int x;
	
	cout<<"\n------cerate------"<<endl;
	dc1.create_n();
	dc1.show();
	cout<<"\nnumber of count : "<<dc1.count()<<endl;
	cout<<"\n-------addatbeg------"<<endl;
	cout<<"Enter the data : "<<endl;
	cin>>x;
	dc1.addatbeg(x);
	dc1.show();
	cout<<"\n--------addatend----"<<endl;
	cout<<"Enter the data : "<<endl;
	cin>>x;
	dc1.addatend(x);
	dc1.show();
	cout<<"\n-------delatbeg-------"<<endl;
	dc1.delatbeg();
	dc1.show();
	cout<<"\n--------delatend-----"<<endl;
	dc1.delatend();
	dc1.show();
	cout<<"\n-------search-------"<<endl;
	cout<<"Enter teh data to search : "<<endl;
	cin>>x;
	if(dc1.search(x)==1)
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
	
	return 0;
}
