/*
Q1.
Scan a number from user.Number can be positive or negative.
Convert it in 16 bit binary.Store that 16 bit binary using DLL.
You must know,how to find binary of negative number.
*/

#include<iostream>
using namespace std;

class node
{
	public : 
	
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
		cout<<"\nnode deleted "<<endl;
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
		
		void addatbeg(int);
		void show();
		void ones();
		void twos();
		void makeempty();
		
};

void DLL::addatbeg(int x)
{
	node*p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		
		p->next = head;
		head->prev = p;
		
		head = p;
	}
}

void DLL::show()
{
	node* p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

void DLL::makeempty()
{
	node*p  = head;
	
	while(p!=NULL)
	{
		node*q = p;
		
		p = p->next;
		
		delete q;
	}
}

void DLL::ones()
{
	node*p = head;
	
	while(p!=NULL)
	{
		if(p->data == 1)
		{
			p->data = 0;
		}
		else if(p->data == 0)
		{
			p->data = 1;
		}
		
		p = p->next;
	}
}

void DLL::twos()
{
	node*p = head;
	int carry = 0;


	while(p->next!=NULL)
	{
		p = p->next;
	}
	
	p->data  = p->data+1;
	
	while(p!=NULL)
	{
		 
		if((p->data+carry) == 1)
		{
			p->data = 1;
			
			carry = 0; 
		}
		else if((p->data+carry)  == 2)
		{
			p->data = 0;
			
			carry = 1;
		}
		else if((p->data+carry)==3)
		{
			p->data = 1;
			
			carry = 1;
		}
		 
		 p=p->prev;
	}
}

int main()
{
	DLL s1,s2;
	
	int n;
	
	cout<<"Enter the number : "<<endl;
	cin>>n;
	
	if(n>0)
	{
		for(int i=0;i<16;i++)
		{
				int rem = n%2;
				n = n/2;
		
				s1.addatbeg(rem);
		}
		
		s1.show();
	}
	else if(n<0)
	{
		n = -1*n; 
		for(int i=0;i<16;i++)
		{
			int rem = n%2;
		    n= n/2;
		
		s2.addatbeg(rem);
		
		}
		
		cout<<"\n----addatbeg---"<<endl;
		s2.show();
		s2.ones();
		cout<<"\n----ones----"<<endl;
		s2.show();
		s2.twos();
		cout<<"\n----tows----"<<endl;
		s2.show();
	}
	
}
