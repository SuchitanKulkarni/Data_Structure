/*
4.WAP to implement simple queue using linked list.
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

class Queue
{
	node*front,*rear;
	
	public:
		
		Queue()
		{
			front = rear = NULL;
		}
		
		int empty()
		{
			if(front==NULL)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueue(int x)
		{
			node*p = new node(x);
			
			if(front==NULL)
			{
				front = rear = p;
			}
			else
			{
				rear->next = p;
				rear = p;
			}
		}
		
		int dequeue()
		{
			if(!empty())
			{
				int x = front->data;
				
				if(front==rear)
				{
					delete front;
					
					front = rear = NULL;
				}
				else
				{
					node*p = front;
					
					front = front->next;
					
					delete p;
					
				}
				
				return x;
			}
			else
			{
				cout<<"Queue empty"<<endl;
				return 0;
			}
		}
		
		void display()
		{
			node*p = front;
			
			while(p!=NULL)
			{
				cout<<p->data<<" ";
				
				p = p->next;
			}
		}
};

int main()
{
	Queue q;
	
	q.enqueue(78);
	q.enqueue(67);
	q.enqueue(1);
	cout<<"\n----show----"<<endl;
	q.display();
	cout<<"\n---dequeue---"<<endl;
	while(q.empty()==0)
	{
		cout<<q.dequeue()<<" ";
	}
}
