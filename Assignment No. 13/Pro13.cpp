/*
9.WAP to implement dequeue priority queue using simple queue.
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
			if(rear == MAX-1)
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
				
				rear++;
				
				data[rear] = x;
			}
			else
			{
				cout<<"Queue full";
				return;
			}
		}
		
		int dequeuep()
		{
			if(!empty())
			{
				int ind  = findmax();
				
				int x = data[ind];
				
				if(front == rear)
				{
					front = rear = -1;
				}
				else
				{
					for(int i=ind;i<=rear-1;i++)
					{
						data[i] = data[i+1];
					}
					
					rear--;
				}
				
				return x;
			}
			else
			{
				cout<<"queue empty"<<endl;
				return 0;
			}
		}
		
		int findmax()
		{
			int i,n;
			
			int max = data[front];
			
			for(i= front;i<=rear;i++)
			{
				if(max<data[i])
				{
					max = data[i];
					n = i;
				}
			}
			
			return n;
		}
		
};

int main()
{
	DQP p;
	
	p.enqueue(9);
	p.enqueue(89);
	p.enqueue(2);
	
	cout<<"\n dequeue = ";
	
	while(p.empty()==0)
	{
		cout<<p.dequeuep()<<" ";
	}
}
