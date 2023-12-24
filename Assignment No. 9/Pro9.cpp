/*Q9.Scan a binary from user and store it in DLL in 8 bit format.
Create 2 more DLL containing one's and two's complements of given binary.
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
	node*head;
	
	public:
		
		void addatend(int x);
		void create_ones(DLL);
		void create_twos(DLL);
		void show();
};

void DLL::addatend(int x)
{
	node*p = new node(x);
	
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

void DLL::create_ones(DLL temp)
{
	node*p=temp.head;
	node*q=head;
	while(p!=NULL)
	{
		if(p->data==1)
		{
			addatend(0);
		}
		else if(p->data==0)
		{
			addatend(1);
		}
		
		p=p->next;
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
	int num;
	
	DLL input;
	
	cout<<"enter the digit : "<<endl;
	cin>>num;
	
	for(int i=0;i<8;i++)
	{
		int rem = num%2;
		num = num/2;
		
		input.addatend(rem);
	}
	
	input.show();
	
	DLL ones;
	
	ones.create_ones(input);
	
	ones.show();
}
