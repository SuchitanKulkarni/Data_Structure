/*
2.WAP to implement dequeue priority queue using circular queue.
*/

#include<iostream>
#define MAX 45
using namespace std;

class Queue
{
	int data[MAX];
	int front ,rear;
	
	public:
		
		Queue()
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
			if(front==(rear+1)%MAX)
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
				
				rear = (rear+1)%MAX;
				
				data[rear] = x;
				
			}
			else
			{
				cout<<"Queue id full"<<endl;
				return;
			}
		}
		
		int dequeueP()
		{
			if(!empty())
			{
				int ind = findmax();
				int i;
				int x = data[ind];
				
				if(front==rear)
				{
					front = rear = -1;
				}
				else
				{
					for(i = ind;i<=rear-1;i++)
					{
						data[i] = data[i+1];
					}
					
					rear--;
				}
				
				return x;
			}
			else
			{
				cout<<"Queue is empty"<<endl;
				return 0;
			}
		}
		
		int findmax()
		{
			int max = data[front];
			int ind = 0,i;
			
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
	Queue q;
	
	q.enqueue(67);
	q.enqueue(23);
	q.enqueue(12);
	
	while(q.empty()==0)
	{
		cout<<q.dequeueP()<<" ";
	}
}
