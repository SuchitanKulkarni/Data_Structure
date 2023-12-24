/*
Q6.Create a DLL of city names.
Define functions for following operations.
-Print all citynames.
-Scan city from user.Search it in list.If present delete it.
-sort DLL by cityname
*/

#include<iostream>
#include<string.h>
using namespace std;

class city
{
	public:
		char cityname[80];
		
		void getdata()
		{
			cout<<"Enter the city : "<<endl;
			cin.getline(cityname,80);
		}
		void showdata()
		{
			cout<<cityname<<endl;
		}
};

class node
{
	public:
		city data;
		node*next;
		node*prev;
		
	node()
	{
		next = NULL;
		prev = NULL;
	}
	node(city a)
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
		
		void addatend(city);
		void show();
		int search (city);
};

void DLL::addatend(city c)
{
	node*p = new node(c);
	
	if(head==NULL)
	{
		head = p;
	}
	else
	{
		node * q = head;
		
		while(q->next != NULL)
		{
			q = q->next;
		}
		
		p->prev = q;
		q->next = p;
		
	}
}

void DLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		city c;
		c = p->data;
		c.showdata();
		
		p = p->next;
	}
}

int DLL::search(city c)
{
	node*p = head;
	
	while(p!=NULL)
	{
		city cp = p->data;
		
		if(strcmp(cp.cityname,c.cityname)==0)
		{
			node *q;
			q = p;
			
			if(q == head)
			{
				head = head ->next;
				head ->prev = NULL;
				
				delete q;
			}
			else if(p->next!=NULL)
			{
				p = q->prev;
				p ->next = q->next;
				q->next->prev = p;
				
				delete q;
			}
			else
			{
				p = q->prev;
				p->next = NULL;
				
				delete q;
			}
			
			return 1;
		}
		
		p = p->next;
	}
	
	return 0;
}

int main()
{
	DLL d1;
	
	city p;
	
	int n,x;
	
	cout<<"Enter the number of cities : "<<endl;
	cin>>n;
	cin.ignore(1);
	
	for(int i=0;i<n;i++)
	{
		p.getdata();
		d1.addatend(p);
	}
	
	d1.show();
	
	cout<<"Enter the city to search : "<<endl;
	p.getdata();
	
	if(d1.search(p)==1)
	{
		cout<<"found and deleted"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
	d1.show();
	return 0;
}
