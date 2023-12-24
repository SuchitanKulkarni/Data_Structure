/*
Q4.Scan a number from user.Create its 16 bit binary using SLL.
Print that binary.
*/

#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node*next;
		
	node()
	{
		data = 0;
		next = NULL;
	}
	node(int a)
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
			head  = NULL;
		}
		
		void addatend(int x);
		void show();
};

void SLL::addatend(int x)
{
	node*p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		p->next =  head;
		head = p; 
	}
}

void SLL::show()
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
	SLL s1;
	
	int num;
	
	cout<<"Enter the one interger : "<<endl;
	cin>>num;
	
	for(int i=0;i<16;i++)
	{
		int rem;
		
		rem = num%2;
		num = num/2;
		
		s1.addatend(rem);
		
	}
	s1.show();
}
