/*
Q7.Scan a number from user.Convert it into 8 bit binary and store that
binary using DLL.Print that binary.
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

class DLL
{
	node*head ;
	
	public:
		
		DLL()
		{
			head = NULL;
		}
		
		void addatend(int);
		void show();
};

void DLL::addatend(int x)
{
	node*p = new node(x);

	
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
		
		p->prev = q;
		q->next = p;
	}
}

void DLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

int main()
{
	int num,rem;
	
	DLL d1;
	
	cout<<"Enter the digit : "<<endl;
	cin>>num;
	
	for(int i=0;i<16;i++)
	{
		 rem = num%2;
		
		num = num/2;
		
		d1.addatend(rem);
	}
	
	d1.show();
	
	return 0;
}
