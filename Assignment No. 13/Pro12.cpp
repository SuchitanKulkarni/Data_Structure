/*
8.WAP to implement enqueue priority queue using simple queue.
*/

#include<iostream>
#define MAX 50
using namespace std;

class EnQP
{
	int data[MAX];
	int front,rear;
	
	public:
		
		EnQP()
		{
			front = rear  = -1;
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
		
		void EnqueueP(int x)
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
					for(i=rear;i>=front;i--)
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
				cout<<"Queue empty"<<endl;
				return 0;
			}
		}
};

int main()
{
	EnQP p;
	
	p.EnqueueP(6);
	p.EnqueueP(3);
	p.EnqueueP(10);
	p.EnqueueP(1);
	
	cout<<"\n----dequeue---"<<endl;
	
	while(p.empty()==0)
	{
		cout<<p.dequeue()<<" ";
	}
}


