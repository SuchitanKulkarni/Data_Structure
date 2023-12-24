/*
Q3.2.WAP to implement dequeue priority queue.
*/

#include<iostream>
#define MAX 78
using namespace std;

class DQP
{
	int data[MAX];
	int front,rear;
	
	public:
		
		DQP()
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
			if(rear==MAX-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueue(int x)
		{
			if(!full())
			{
				if(empty())
				{
					front = 0;
				}
				
				rear++;
				
				data[rear] = x;
			}
			else
			{
				cout<<"Queue full"<<endl;
				return ;
			}
		}
		
		int dequeueP()
		{
			int i;
			
			if(!empty())
			{
				int ind = findmax();
				
				int x = data[ind];
				
				if(front == rear)
				{
					front = rear = -1;
				}
				else
				{
					for(i = ind;i<rear;i++)
					{
						data[i] = data[i+1];
					}
					
					rear -- ;
				}
				
				return x;
			}
			else
			{
				cout<<"Queue empty"<<endl;
				return 0;
			}
		}
		
		int findmax()
		{
			int max,ind;
			int i;
			max = data[front];
			
			for(i=front;i<=rear;i++)
			{
				if(max<data[i])
				{
					max = data[i];
					
					ind = i;
				}
			}
			
			return ind;
		}
};

int main()
{
	DQP p;
	
	p.enqueue(3);
	p.enqueue(7);
	p.enqueue(5);
	
	while(p.empty()!=1)
	{
		cout<<p.dequeueP()<<" ";
	}
}
