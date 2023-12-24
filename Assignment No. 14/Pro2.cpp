/*
Q2.1.WAP to implement enqueue priority queue.
*/

#include<iostream>
#define MAX 78
using namespace std;

class EnQ
{
	int data[MAX];
	int front,rear;
	
	public:
	
	EnQ()
	{
		front = rear = -1;
	}
	
	int empty()
	{
		if(front==-1)
		{
			return 1;
		}
		
		return 0;
	}
	
	int full()
	{
		if(rear == MAX-1)
		{
			return 1;
		}
		
		return 0;
	}
	
	void enqueueP(int x)
	{
		int i;
		
		if(!full())
		{
			if(empty()==1)
			{
				front = 0;
				rear = 0;
				
				data[rear] = x;
			}
			else
			{
				for(i = rear;i>=front;i--)
				{
					if(data[i]<=x)
					{
						data[i+1] = data[i];
					}
					else
					{
						break;
					}
				}
				
				data[i+1] = x;
				rear++;
			}
		}
		else
		{
			cout<<"Queue full";
			return;
		}
	}
	
	int dequeue()
	{
		if(!empty())
		{
			int x = data[front];
			
			if(front == rear)
			{
				front = rear = -1;
			}
			else
			{
				front++;
			}
			
			return x;
		}
		else
		{
			cout<<"Queue empty";
			return 0;
		}
	}
};

int main()
{
	EnQ p;
	p.enqueueP(5);
	p.enqueueP(1);
	p.enqueueP(9);
	
	while(p.empty()!=1)
	{
		cout<<p.dequeue()<<" ";
	}
}
