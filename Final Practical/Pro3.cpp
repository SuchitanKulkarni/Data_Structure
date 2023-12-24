/*
Q2.
Scan 2 binary from user.Store them in 16 bit format using DLL.
Perform their addition.Store addition in third DLL.Print it.
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
		cout<<"\nnode deleted "<<endl;
	}
};

class DLL
{
	node *head;
	
	public:
		
		DLL()
		{
			head = NULL;
		}
		
		void addatbeg(int x);
		void add(DLL,DLL);
		void show();
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
		head ->prev = p;
		
		head = p;
	}
}

void DLL::add(DLL d1,DLL d2)
{
	node*p = d1.head;
	node*q = d2.head;
	int carry = 0;
	while(p!=NULL&&q!=NULL)
	{
		if((p->data+q->data+carry) == 0)
		{
			addatbeg(0);
			carry = 0;
		}
		else if((p->data+q->data+carry) == 1)
		{
			addatbeg(1);
			carry = 0;
		}
		else if((p->data+q->data+carry)==2)
		{
			addatbeg(0);
			carry = 1;
		}
		else if((p->data+q->data+carry) == 3)
		{
			addatbeg(1);
			carry = 1;
		}
		
		p = p->next;
		q = q->next;
	}
}

void DLL::show()
{
	node *p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		 p = p->next;
	}
}

int main()
{
	char str1[89];
	char str2[90];
	
	DLL d1,d2,d3;
	
	
	cout<<"enter the binary :"<<endl;
	cin.getline(str1,34);
	
	cout<<"Enter the binary :"<<endl;
	cin.getline(str2,88);
	int i = 0;
	
	while(str1[i]!='\0')
	{
		int x = str1[i]-48;
		
		d1.addatbeg(x);
		
		i++;
	}
	i = 0;
	
	while(str2[i]!='\0')
	{
		int x = str2[i]-48;
		
		d2.addatbeg(x);
		
		i++;
	}
	
	d3.add(d1,d2);
	
	cout<<" \n------addition---"<<endl;
	d3.show();
	
	return 0;
}
