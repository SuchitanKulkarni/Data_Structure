/*
3.WAP to implement queue using linked list.
*/

#include<iostream>
#define MAX 78
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
		
		node(int x)
		{
			data = x;
			next = NULL;
		}
};

class Queue
{
	int data[MAX];
	node *front,*rear;
	
	
	public:
		
		Queue()
		{
			front = rear = NULL;
		}
		
		int empty()
		{
			if(front == NULL)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueue(int x)
		{
			node*p = new node(x);
			
			if(empty())
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
				
				if(front == rear)
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
};

int main()
{
	Queue q;
	
	q.enqueue(45);
	q.enqueue(34);
	q.enqueue(23);
	
	while(q.empty()==0)
	{
		cout<<q.dequeue()<<" ";
		
	}
}
