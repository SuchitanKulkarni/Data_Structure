/*
4.
class Number
{
	public:
		int x,y;
};
---------------------------------------------------------------------------------------------
Create an SLL of different objects of class Number.
Each objects data must be scanned from user.
Do not define create() function.
Then implement following functions function.
1)search() - Scan values for x and y from user.Search the object containg these values.
2)delete_value() - Scan values for x and y from user.Delete the object containg these values.
Implement switch case.
*/

#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
	void getdata()
	{
		cout<<"Enter the x and y : "<<endl;
		cin>>x>>y;
	}
	void showdata()
	{
		cout<<"x = "<<x<< " y = "<<y<<endl;
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
		int search(Number);
		void del(Number);
		void show();
};

void SLL::addatend(Number T)
{
	node*p = new node(T);
	
	if(head == NULL)
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

void SLL ::show()
{
	node*p = head;
	
		cout<<"hello";
	while(p!=NULL)
	{
		Number t = p->data;
		
	
		
		t.showdata();
		
		p = p->next;
	}
}

int SLL::search(Number T)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Number t;
		t = p->data;
		
		if(t.x==T.x && t.y==T.y)
		{
			return 1;
		}
	    
	    p =p ->next;
	}
	
	return 0;
}

void SLL::del(Number T)
{
	node*p = head;
	
	while(p!=NULL)
	{
		
		Number d = p->data;
		
		if(d.x== T.x && d.y==T.y)
		{
			if(p==head &&head->next==NULL)
			{
				delete head;
				
				head = NULL;
			}
			else if (p == head && head->next!=NULL)
			{
				node*q;
				
				q = head;
				head = head->next;
				
				delete q; 
			}
			else if(p->next!=NULL)
			{
				node*q = head;
				
				while(q->next!=p)
				{
					q = q->next;
				}
				
				q->next = p->next;
				
				delete p;
			}
			else
			{
				node*q = head;
				
				while(q->next!=p)
				{
					q = q->next;
				}
				
				q->next = NULL;
				
				delete p;
				
			}
			return ;
		}
		
		p = p->next;
	}
}

int main()
{
	SLL s1;
	
	int n;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	Number T;
	
	for(int i=0;i<n;i++)
	{
		T.getdata();
		s1.addatend(T);
	}
	
	s1.show();
	
/*	cout<<"\n-----search-----"<<endl;
	cout<<"enter the data to searchh : "<<endl;
	T.getdata();
	
	if(s1.search(T)==1)
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
*/	
	cout<<"\n--------delete node-------"<<endl;
	cout<<"Enter the node to delete : "<<endl;
	T.getdata();
	s1.del(T);
	s1.show();
	
	return 0;
}

