/*

Q5.
class Dist
{
	public:
		int,mtr;
	//your member functions(optional)
};
Create an SLL of n distances.n is the input from user.
Print all distances.
Find the maximum distance.
Find the minimum distance.
*/
#include<iostream>
using namespace std;

class Dist
{
	public:
		int km,mtr;
		
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
		
		Dist data;
		node*next;
		
	node()
	{
		next = NULL;
	}
	node(Dist a)
	{
		data = a;
		next = NULL;
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
		
		void addatend(Dist );
		void show();
		Dist min();
		Dist max();
		
};

void SLL::addatend(Dist D)
{
	node*p = new node(D);
	
	if(head == NULL)
	{
		head =  p;
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
		Dist D;
		D = p->data;
		D.showdata();
		p = p->next;
	}
	
}

Dist SLL::max()
{
	node*p = head;
	node*q ;
	
	Dist t;
	Dist max = head->data; 
	
	while(p!=NULL)
	{
		t = p->data;
		
		if((t.km+t.mtr)>(max.km+max.mtr))
		{
			max = t;
		}
		
		p = p->next;
	}
	
	return max;
}

Dist SLL::min()
{
	node*p = head;
	
	Dist t;
	Dist min = head->data;
	
	while(p!=NULL)
	{
		t = p->data;
		
		if(t.km+t.mtr<min.km+min.mtr)
		{
			min = t;
		}
		
		 p = p->next;
	}
	
	return min;
}

int main()
{
	SLL s1;
	
	int x;
	
	Dist D;
	
	cout<<"Enter the number of objects : "<<endl;
	cin>>x;
	
	for(int i=0;i<x;i++)
	{
		D.getdata();
		s1.addatend(D);
	}
	
	s1.show();
	cout<<"min = "<<endl;
	D = s1.min();
	D.showdata();
	
	cout<<"max = "<<endl;
	D = s1.max();
	D.showdata();
	
	return 0;
}
