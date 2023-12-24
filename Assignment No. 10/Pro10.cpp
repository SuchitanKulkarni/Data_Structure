/*
8.Scan 2 binary from user.Create their DLL.
Write a program to perform addition of these 2 binaries
and create third DLL.
If it's difficult using DLL,you can use SLL.
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
		
		DLL()
		{
			head = NULL;
		}
		
		void addatend(int x);
		void addatbeg(int x);
		void show();
		void cal(DLL,DLL);
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

void DLL::cal(DLL d1,DLL d2)
{
	node*p = d1.head;
	node*q = d2.head;
	
	int carry = 0;
	
	while(p!=NULL && q!=NULL)
	{
		if((p->data + q->data + carry )== 0)
		{
			addatbeg(0);
			carry = 0;
		}
		else if((p->data+q->data+carry )== 1)
		{
			addatbeg(1);
			carry = 0;
		}
		else if((p->data+q->data+carry )== 2)
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

int main()
{
	int a,b;
	
	DLL s1,s2,s3;
	
	char str1[90];
	char str2[90];
	
	int i = 0;
	
	cout<<"enter the binary : "<<endl;
	cin.getline(str1,90);
	cout<<"enter the binary : "<<endl;
	cin.getline(str2,90);
	
	while(str1[i]!='\0')
	{
		s1.addatend(str1[i]-48);
		
		i++;
	}
	i=0;
	
	while(str2[i]!='\0')
	{
		s2.addatend(str2[i]-48);
		
		i++;
	}
	
	//s1.show();
	cout<<endl;
///	s2.show();
	
	s3.cal(s1,s2);
	
	s3.show();
	
	return 0;
}
