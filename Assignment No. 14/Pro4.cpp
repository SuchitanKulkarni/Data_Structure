/*
Q4.WAP to solve josephus problem.
*/

#include<iostream>
#define MAX 77
using namespace std;

class cirQ
{
	int data[MAX];
	int front,rear;
	
	public:
		
		cirQ()
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
			if(front == (rear+1)%MAX)
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
				cout<<"Queue full";
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
					front = (front+1)%MAX;
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
	int n,k,x,i;
	
	cirQ p;
	
	cout<<"--------josephus problem-----\n"<<endl;
	
	cout<<"enter the number of students to play : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Roll no. of student : "<<endl;
		cin>>x;
		p.enqueue(x);
	}
	
	cout<<"Enter the unlike Number : "<<endl;
	cin>>k;
	
	i = 0;
	
	while(i<=n-2)
	{
		for(int j = 0;j<k;j++)
		{
			x = p.dequeue();
			p.enqueue(x);
		}
		
		p.dequeue();
		
		i++;
	}
	
	cout<<"Winner = "<<p.dequeue()<<endl;
	
	
}
