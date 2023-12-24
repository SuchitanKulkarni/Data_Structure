/*
Q3.
class Number
{
	public:
		int x;
		int y;
		//You can add member functions(optional)
};
Create an SLL of Number objects.Ask user how many objects
he wants to add in main() function.Scan those objects from user and add
them in list.Implement following functions using switch case repetition.
-search()
-delbypos()
-show()
-addbypos()
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		int y;
	
	void getdata()
	{
		cout<<"Enter the x and y : "<<endl;
		cin>>x>>y;
	}
	
	void showdata()
	{
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
};

class node
{
	public:
		
		Number data;
		node*next;
		
    node()
    {
    	next = NULL;
	}
	node(Number a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode deleted"<<endl;
	}
};

class SLL
{
	node*head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void addatend(Number);
		void delbypos(int);
		int search(Number);
		void addbypos(Number, int);
		int count();
		void addatbeg(Number);
		void delatbeg();
		void show();
		
};

void SLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		Number T;
		T = p->data;
		T.showdata();
		p = p->next;
	}
}

void SLL::addatend(Number T)
{
	node*p = new node(T);
	
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
		
		q->next = p;
	}
}

void SLL::addbypos(Number T,int pos)
{
	int n;
	n = count();
	
	if(pos<1||pos>n+1)
	{
		cout<<"invalid position"<<endl;
		return;
	}
	else if(pos==1)
	{
		addatbeg(T);
	}
	else
	{
		node*p;
		 p = new node(T);
		 node*q = head;
		 
		for(int i=1;i<pos-1;i++)
		{
			q= q->next;
		}
		
		p->next = q->next;
		q->next = p;

	}
	
}

void SLL::addatbeg(Number T)
{
	node*p = new node(T);
	
	if(head == NULL)
	{
		head = p; 
	}
	else
	{
		p->next = head;
		head = p;
	}
}

int SLL::count()
{
	node*p;
	int c = 0;
	p = head;
	
	while(p!=NULL)
	{
		c++;
		p = p->next;
	}
	
	return c;
}

int SLL::search(Number T)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Number Temp;
		Temp = p->data;
		
		if(T.x ==Temp.x && T.y==Temp.y)
		{
			return 1;
		}
		
		p = p->next;
	
	}
	
	return 0;
}

void SLL::delbypos(int pos)
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
	else
	{
		node*p = head;
		
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node*q;
		
		q = p->next;
		p->next= q->next;
		
		delete q;
		
	}
}

void SLL::delatbeg()
{
	if(head==NULL)
	{
		cout<<"list empty"<<endl;
		return;
	}
	else
	{
		node*p;
		p = head;
		head = head->next;
		delete p;
	}
}

int main()
{
	SLL s1;
	Number T;
	int x,n,ch;
	cout<<"ENter the object you wnat to create : "<<endl;
	cin>>x;
	
	for(int i=0;i<x;i++)
	{
		T.getdata();
		s1.addatend(T);
	}
	

	
	do
	{
		cout<<"------Menu-----"<<endl;
	cout<<"\npress\n1.search\n2.delbypos\n3.addbypos\n4.show\n5.exit"<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>x;
		switch(x)
	{
		case 1 : cout<<"enter the node to search : "<<endl;
		         T.getdata();
		
		if(s1.search(T)==1)
		{
			cout<<"found"<<endl;
		}
		else
		{
			cout<<"not found"<<endl;
		}
		
		break;
		
	    case 2 : cout<<"Enter the position : "<<endl;
	             cin>>n;
	             s1.delbypos(n);
	             break;
	             
	    case 3 : cout<<"enter the position : "<<endl;
	             cin>>n;
	             cout<<"enter the node to search : "<<endl;
		         T.getdata();
		         s1.addbypos(T,n);
		         break;
		         
		case 4 : s1.show();
					break;
					
		case 5 : exit(0);
		        
	    default:cout<<"\nwrong input"<<endl;
	}
	
	cout<<"\ndo you want to continue : "<<endl;
	cin>>ch;
	
	}while(ch!=0);
	
	
}
