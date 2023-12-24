/*
Q9.
class Date
{
	public:
		int day,mon,year;
	//your member functions if any(optional)
};
Create an SLL of 6 different dates.
Print all dates in SLL.
Define functions to implement following functions.
-add any date.Duplicate entries of date are not allowed.
-print all dates belonging to specific month.
-print all dates belonging to specific year.
-delete all dates belonging to secific month.
*/

#include<iostream>
using namespace std;

class Date
{
	public:
		int day,mon,year;
	
	void getdata()
	{
		cout<<"Enter the day,month and year : "<<endl;
		cin>>day>>mon>>year;
	}
	void showdata()
	{
		cout<<day<<"/"<<mon<<"/"<<year<<endl;
	}
};

class node
{
	public:
		Date data;
		node*next;
		
	node()
	{
		next = NULL;
	}
	node(Date a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode deleted "<<endl;
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
		
		void addatend(Date);
		void show();
		int search(Date);
		void mon_show(int);
		void year_show(int);
		void mon_del(int);
};

void SLL::addatend(Date D)
{
	node*p = new node(D);
	
	if(search(D)==1)
	{
		cout<<"Duplicates are not allowed"<<endl;
		
		Date T;
		T.getdata();
		addatend(T);
	}
	else
	{
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
	
}

void SLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		Date d = p->data;
		
		d.showdata();
		
		p = p->next;
	}
}

void SLL::mon_show(int x)
{
	node*p  = head;
	
	while(p!=NULL)
	{
		Date d = p->data;
		
		if(d.mon == x)
		{
			d.showdata();
		}
		
		p = p->next;
	}
}

void SLL::year_show(int x)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Date d = p->data;
		
		if(d.year == x)
		{
			d.showdata();
		}
		
		p = p->next;
	}
}

void SLL::mon_del(int x)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Date d = p->data;
		
		if(d.mon == x)
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
		}
		
		p = p->next;
	}
}

int SLL::search(Date d)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Date c = p->data;
		
		if(c.day==d.day && c.mon == d.mon && c.year==d.year)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	SLL s1;
	int x;
	Date D;
	
	for(int i=0;i<6;i++)
	{
		D.getdata();
		s1.addatend(D);
	}
	
	s1.show();
	
	cout<<"Enter the month to check all the days releted to it : "<<endl;
	cin>>x;
	
	s1.mon_show(x);
	
	cout<<"Enter the year to check all the days releted to it : "<<endl;
	cin>>x;
	
	s1.year_show(x);
	
	cout<<"Enter the month to delete related data : "<<endl;
	cin>>x;
	
	s1.mon_del(x);
	
	cout<<"------data------"<<endl;
	s1.show();
	
	return 0;
	
}
