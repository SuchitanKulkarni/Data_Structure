/*
5.WAP to implement Double Ended Queue using simple queue.(i/p restricted)
*/

#include<iostream>
#define MAX 78
using namespace std;

class DEQ
{
	int data[MAX];
	int front,rear;
	
	public:
		
		DEQ()
		{
			front = rear = -1;
		}
		
		// input restricted
		
		int empty()
		{
			if(front==-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		int fullR()
		{
			if(rear == MAX-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueue(int x)
		{
			if(!fullR())
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
		
		int dequeueF()
		{
			if(!empty())
			{
				int x = data[front];
				
				if(front ==rear)
				{
					front = rear = -1;
				}
				else
				{
					front ++;
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
					rear--;
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
	DEQ d;
	
	d.enqueue(67);
	d.enqueue(89);
	d.enqueue(34);
	
	cout<<d.dequeueF()<<" ";
	cout<<d.dequeueR()<<" ";
	
}
