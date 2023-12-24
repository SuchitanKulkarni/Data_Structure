/*
1.Write a program to implement DCLL with following functions with switch case.
-addatbeg()
-addatend()
-addbypos()
-delatbeg()
-delatend()
-delbypos()
-search()
-count()
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
			front = NULL;
			rear = NULL;
		}
		
	void addatbeg(int);
	void addatend(int);
	void addbypos(int,int);
	void delatbeg();
	void delatend();
	void delbypos(int);
	int search(int);
	int count();
	void show();
};

void DCLL::addatbeg(int x)
{
	node*p = new node(x);
	
	if(front==NULL)
	{
		front = p;
		front->next = front;
		front->prev = front;
		rear = front;
	}
	else
	{
		p->next = front;
		front->prev = p;
		front = p;
		rear->next = front;
	}
}

void DCLL::addatend(int x)
{
	node*p = new node(x);
	
	if(front==NULL)
	{
		front =  p;
		front->next = front;
		front->prev = front;
		rear = front;
	}
	else
	{
		
		p->next = front;
		p->prev = rear;
		rear->next = p;
		rear = p;
		front->prev = rear;
	}

}

void DCLL::addbypos(int pos , int x)
{
	int n = count();
	
	if(pos<1 || pos>n+1)
	{
		cout<<"Invalid position"<<endl;
	}
	else if(pos==1)
	{
		addatbeg(x);
	}
	else if(pos==n)
	{
		addatend(x);
	}
	else
	{
		node*p = new node(x);
		
		node*q = front;
		
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

void DCLL::delatbeg()
{
	if(front==NULL)
	{
		cout<<"list id empty"<<endl;
		return;
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
		front->prev = rear;
		rear->next = front;
		
		delete p;
	}
}

void DCLL::delatend()
{
	if(front==NULL)
	{
		cout<<"list is empty"<<endl;
		return;
	}
	if(front==rear)
	{
		delete front;
		front = rear = NULL;
	}
	else
	{
		node*p = rear;
		rear = rear->prev;
		rear->next = front;
		front->prev = rear;
		
		delete p;
	}
}

int DCLL::count()
{
	node*p = front;
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

void DCLL::show()
{
	node*p = front;
	
	do
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}while(p!=front);
	
}

void DCLL::delbypos(int pos)
{
	int n = count();
	
	if(pos<1 || pos>n)
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
		node*q = front;
		
		for(int i=1;i<pos-1;i++)
		{
			q = q->next;
		}
		
		node*p = q->next;
		
		q->next = p->next;
		p->next->prev = q;
		
		delete p;
	}
}

int main()
{
	DCLL d1;
	
	int n,x;
	
    cout<<"---------createing list--------"<<endl;	
	
	cout<<"\nEnter the number of nodes : "<<endl;
	cin>>n;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<"enter the nodes : "<<endl;
		cin>>x;
		
		d1.addatend(x);
	}
	
	d1.show();
	
	cout<<"\n-------addatbeg--------"<<endl;
	cout<<"Enter the node:"<<endl;
	cin>>x;
	d1.addatbeg(x);
	d1.show();
	
	cout<<"\n--------addbypos---------"<<endl;
	cout<<"Enter the postion and node : "<<endl;
	cin>>n>>x;
	d1.addbypos(n,x);
	d1.show();
	
	cout<<"total count = "<<d1.count()<<endl;
	
	cout<<"\n-------search------"<<endl;
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
	
	cout<<"\n--------delatbeg-----"<<endl;
	d1.delatbeg();
	d1.show();

	
	cout<<"\n--------delatend---"<<endl;
	d1.delatend();
	d1.show();
	
	cout<<"\n---------delbypos---"<<endl;
	cout<<"enter the position : "<<endl;
	cin>>n;
	
	d1.delbypos(n);
	d1.show();
	
	return 0 ;
}
