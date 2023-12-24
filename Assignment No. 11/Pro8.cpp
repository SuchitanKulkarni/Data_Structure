/*
Q8.Create DLL.Implement following functions.
-addatbeg()
-addatend()
-delatbeg()
-delatend()
-show()
-search()
-sort()
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
		
		DLL()
		{
			head = NULL;
		}
		
		void addatbeg(int);
		void addatend(int);
		void delatbeg();
		void delatend();
		int search(int);
		void show();
		void sort();
};

void DLL::addatbeg(int x)
{
	node*p = new node(x);
	
	if(head = NULL)
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

void DLL::addatend(int x)
{
	node*p = new node(x);
	
	if(head = NULL)
	{
		head = p;
	}
	else
	{
		node*q;
		
	}
}
