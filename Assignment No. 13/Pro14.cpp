/*
10.WAP to implement enqueue priority queue using circular queue.
*/

#include<iostream>
#define MAX 77
using namespace std;

class EnQP
{
	int data[MAX];
	int front,rear;
	
	public:
		
		EnQP()
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
		
		void enqueueP(int x)
		{
			int i;
			
			if(!full())
			{
				if(empty()==1)
				{
					front = rear = 0;
					
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
					
					rear = (rear+1)%MAX;
				}
			}
			else
			{
				cout<<"Queue full"<<endl;
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
};

int main()
{
	EnQP p;
	
	p.enqueueP(5);
	p.enqueueP(9);
	p.enqueueP(1);
	
	while(p.empty()!=1)
	{
		cout<<p.dequeue()<<" ";
	}
}
