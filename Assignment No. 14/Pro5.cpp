/*
Q5.WAP to implement job scheduling algorithm.
*/

#include<iostream>
#define MAX 77
using namespace std;

class job
{
	public:
		
		int jno;
		int jtime;
		
	void getdata()
	{
		cout<<"Enter the job number and time : "<<endl;
		cin>>jno>>jtime;
	}
	void showdata()
	{
		cout<<jno<<" "<<jtime<<endl;
	}
};

class cirQ
{
	job data[MAX];
	int front,rear;
	
	public:
		
		cirQ()
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
		
		void enqueue(job p)
		{
			if(!full())
			{
				if(empty())
				{
					front = 0;

				}
				
				rear = (rear+1)%MAX;
				
				data[rear] = p;
			}
			else
			{
				cout<<"Queue full";
				return;
			}
		}
		
		job dequeue()
		{
			if(!empty())
			{
				job x = data[front];
				
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
			}
		}
};

int main()
{
	cirQ p;
	job temp;
	
	int n,i;
	
	cout<<"enter the number of jobs : "<<endl;
	cin>>n;
	
	for(i = 0;i<n;i++)
	{
		temp.getdata();
		p.enqueue(temp);
	}
	
	cout<<"Enter the time interval : "<<endl;
	cin>>n;
	
	while(p.empty()!=1)
	{
		temp = p.dequeue();
		temp.jtime = temp.jtime-n;
		
		if(temp.jtime<=0)
		{
			cout<<"Job "<<temp.jno<<" Completed "<<endl;
		}
		else
		{
			p.enqueue(temp);
		}
	}
}
