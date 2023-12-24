/*
.Write a program to implement circular queue using array.
*/

#include<iostream>
#define MAX 50
using namespace std;

class cirQ
{
	int data[MAX];
	int front,rear;
	
	public:
		
		cirQ()
		{
			front = rear = -1;
		}
		
		int empty()
		{
			if(front == -1)
			{
				return 1;
			}
			
			return 0;
		}
		
		int full()
		{
			if(front == (rear+1)%MAX)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueue(int x)
		{
			if(!full())
			{
				if(empty()==1)
				{
					front = 0;
				}
				
				rear = (rear+1)%MAX;
				
				data[rear] = x;
				
			}
			else
			{
				cout<<"Queue full"<<endl;
				return ;
			}
			
		}
		
		int dequeue()
		{
			if(!empty())
			{
				int x = data[front];
				
				if(front==rear)
				{
					front=rear=-1;
				}
				else
				{
					front = (front+1)%MAX;
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
			int i = front;
			
			do
			{
				cout<<data[i]<<" ";
				
				i = (i+1)%MAX;
			}while(i!=(rear+1));
		}
};

int main()
{
	cirQ c;
	
	c.enqueue(67);
	c.enqueue(89);
	c.enqueue(56);
	
	c.display();
	cout<<"\n----pop----"<<endl;
	while(c.empty()==0)
	{
		cout<<c.dequeue()<<" ";
	}
}
