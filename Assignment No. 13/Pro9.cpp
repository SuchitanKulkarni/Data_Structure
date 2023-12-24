/*
5.WAP to implement Double Ended Queue using simple queue.(o/p restricted)
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
		
		int empty()
		{
			if(front==-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		int fullF()
		{
			if(front==0)
			{
				return 1;
			}
			
			return 0;
		}
		
		int fullR()
		{
			if(rear==MAX-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueueR(int x)
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
				cout<<"Queue full"<<endl;
				return;
			}
		}
		
		void enqueueF(int x)
		{
			if(!fullF())
			{
				if(empty()==1)
				{
					rear = 0;
					front = 0;
				}
				else
				{
					front --;
				}
				
				data[front] = x;
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
		
		void show()
		{
			for(int i = front;i<=rear;i++)
			{
				cout<<data[i]<<" ";
			}
		}
};

int main()
{
	DEQ d;
	
	d.enqueueR(78);
	d.enqueueF(89);
	d.enqueueR(34);
	
	d.show();
	cout<<"\n---pop---"<<endl;
	cout<<d.dequeue();

	d.enqueueF(56);
	cout<<"\n---show---"<<endl;
	d.show();
}
