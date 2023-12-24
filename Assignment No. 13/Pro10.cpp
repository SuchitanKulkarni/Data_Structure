/*
6.WAP to implement Double Ended Queue using circular queue.//(Input restricted)
*/

#include<iostream>
#define MAX 50
using namespace std;

class CirQ
{
	int data[MAX];
	int front,rear;
	
	public:
		
		CirQ()
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
			if(front==(rear+1)%MAX)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueueR(int x)
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
		
		int dequeueF()
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
		
		int dequeueR()
		{
			if(!empty())
			{
				int x = data[rear];
				
				if(front==rear)
				{
					front = rear = -1;
				}
				else
				{
					rear = (rear-1+MAX)%MAX;
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
	CirQ q;
	
	q.enqueueR(34);
	q.enqueueR(24);
	q.enqueueR(12);
	
	cout<<"\n-----dequeue by rear-----"<<endl;
	
	cout<<q.dequeueR()<<" ";
	cout<<q.dequeueR();
	
	cout<<"\n-----dequeue by front ---"<<endl;
	
	cout<<q.dequeueF();
}
