/*
Q4.
class Date
{
	public:
		int day,mon,year;
	//your member functions if any(optional)
};
Create an SLL of 6 different dates.
Print all dates in SLL.
Search a specific date in SLL.
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
		cout<<"node is deleted"<<endl;
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
};

void SLL::addatend(Date D)
{
	node*p = new node(D);
	
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

void SLL::show()
{
	node*p;
	
	p = head;
	
	while(p!=NULL)
	{
		Date D;
		D = p->data;
		D.showdata();
		
		p = p->next;
	}
}

int SLL::search(Date d)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Date D;
		D = p->data;
		if(D.day== d.day && D.mon==d.mon && D.year == d.year)
		{
			return 1;
		}
		p = p->next;
	}
	
	return 0;
}

int main()
{
	SLL s1;
	int x;
	
	Date T;
	
	cout<<"Creating 6 objects : "<<endl;
	
	for(int i=0;i<6;i++)
	{
		T.getdata();
		s1.addatend(T);
	}
	
	s1.show();
	cout<<"Enter the day mon and year to search : "<<endl;
	T.getdata();
	if(s1.search(T)==1)
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
	
	return 0;
	
}
