/*
5.
class Distance
{
	public:
		int km;
		int mtr;
};

Create an SLL of different distances.
Scan distances from user.
Do not define create function.
Then implement following functions.
1)findmax()-this will find the maximum distance 
2)findmin()-this will find the minimum distance
3)sort()-this will sort the list according to distance
Implement switch case.

*/

#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
		
		void getdata()
		{
			cout<<"Enter the km and mtr : "<<endl;
			cin>>km>>mtr;
		}
		void showdata()
		{
			cout<<"km = "<<km<<"mtr = "<<mtr<<endl;
		}
};

class node
{
	public:
		
		Distance data;
		node*next;
		
	node()
	{
		next = NULL;
	}
	node(Distance a)
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
		
		void addatend(Distance);
		Distance finmax();
		Distance findmin();
		void sort();
		void show();

};

void SLL::addatend(Distance D)
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
	node*p = head;
	
	while(p!=NULL)
	{
		Distance d = p->data;
		
		d.showdata();
		
		p = p->next;
	}
}

Distance SLL::findmin()
{
	node*p = head;
	
	Distance min = p->data;
	
	while(p!=NULL)
	{
		Distance d = p->data;
		
		if(d.km+d.mtr <min.km+min.mtr)
		{
			min = d;
		}
		
		p = p->next;
	}
	
	return min;
}

Distance SLL::finmax()
{
	node*p = head;
	
	Distance max = p->data;
	
	while(p!=NULL)
	{
		Distance d = p->data;
		
		if(d.km+d.mtr>max.km+max.mtr)
		{
			max = d;
		}
		
		p = p->next;
	}
	
	return max;
}

void SLL::sort()
{
	node*p = head;
	node*q;
	
	Distance s;
	
	for(p=head;p!=NULL;p = p->next)
	{
		for(q = p->next;q!=NULL;q = q->next)
		{
			Distance t,d;
			
			t = p->data;
			d = q->data;
			
			if(t.km+t.mtr>d.km+d.mtr)
			{
				s = p->data;
				p->data = q->data;
				q->data = s;
			}
		}
	}
}

int main()
{
	SLL s1;
	
	int n;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
		Distance d;
	
	for(int i=0;i<n;i++)
	{
		d.getdata();
		
		s1.addatend(d);
	}
	
	s1.show();
	
	cout<<"\nminimum : ";
	d = s1.findmin();
	d.showdata();
	cout<<"\nmaximum : "<<endl;
	d = s1.finmax();
	d.showdata();
	
	cout<<"\n----sort----"<<endl;
	s1.sort();
	s1.show();
	
	return 0;
}

