/*
Q7.
class Number
{
	private:
		int x;
		int y;
	public:
		//You can add member functions(optional)
};
Create an SLL of Number objects.Ask user in main() function 
how many objects he wants to add .Scan those objects from user and add
them in list.Condition = No two objects can contain same data.
*/

#include<iostream>
using namespace std;

class Number
{
	private:
		int x;
		int y;
	public:
		
		void getdata()
		{
			cout<<"Enter the x and y : "<<endl;
			cin>>x>>y;
		}
		void showdata()
		{
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
		
		int compair(Number c)
		{
			if(x == c.x && y == c.y)
			{
				return 1;
			}
			else
			{
				return 0;
			}
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
		
		void addatend(Number );
		int search(Number);
		void show();
};

void SLL::addatend(Number T)
{
	node*p = new node(T);
	
	if(search(T)==1)
	{
		cout<<"Dupalicate not allowed"<<endl;
		T.getdata();
		addatend(T);
	}
	else
	{
		if(head==NULL)
		{
			head = p;
		}
		else
		{
			node * q = head;
			
			while(q->next!=NULL)
			{
				q = q->next;
			}
			
			q->next = p;
		}
	}
}

int SLL::search(Number c)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Number T;
		
		T = p->data;
		
		if(T.compair(c)==1)
		{
			return 1;
		}
		
		p = p->next;
	}
	
	return 0;
}

void SLL :: show()
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

int main()
{
	int x,n;
	
	SLL s1;
	
	Number T;
	
	cout<<"Enter the number of object : "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		T.getdata();
		s1.addatend(T);
	}
	
	s1.show();
	
	return 0;
}
