/*
5.
Create a singly linked list of integers.Implement following functions as independant functions.
(Revise independant function through notebook.Think about diagram)
-create()
-show()
-addatbeg()
-addatend() 
-search()
-count()
-delatbeg()
-delatend()
-sort()
*/

#include<iostream>
using namespace std;

class node
{
	int data;
	node * next;
	
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
	
	~node()
	{
		cout<<"\nnode is deleted : "<<endl;
	}
};

class SLL
{
	node * head;
	
	public :
		
		SLL()
		{
			head = NULL;
		}
		
		node* gethead()
		{
			return head;
		}
};

void create()
{
	int x,n,i;
	
	node p = NULL;
	
	p = gethead();
	
}
