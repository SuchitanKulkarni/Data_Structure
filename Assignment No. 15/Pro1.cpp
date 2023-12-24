/*
1.WAP to implement enqueue priority queue using simple queue.
*/

#include<iostream>
#define MAX 78
using namespace std;


class Queue
{
	int data[MAX];
	int rear,front;
	
	public:
		
		Queue()
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
				if(empty())
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
					
					rear++;
				}
			}
			else
			{
				cout<<"Queue is full"<<endl;
				return ;
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
				cout<<"Queue is empty"<<endl;
				return  0;
			}
		}
};

int main()
{
	Queue q;
	
	q.enqueueP(34);
	q.enqueueP(32);
	q.enqueueP(45);
	q.enqueueP(12);
	
	while(q.empty() == 0)
	{
		cout<<q.dequeue()<<" ";
	}
}
