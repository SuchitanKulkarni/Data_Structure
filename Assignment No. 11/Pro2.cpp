/*
Q2.Implement 2 stacks in one array.
*/

#include<iostream>
#define MAX 78
using namespace std;

class stack
{
	int data[MAX];
	int top1;
	int top2;
	
	public:
		
		stack()
		{
			top1 = -1;
			top2 = MAX;
		}
		
		int empty(int stno)
		{
			if(stno==1)
			{
				if(top1==-1)
				{
					return 1;
				}
				
				return 0;
			}
			else if(stno == 2)
			{
				if(top2 == MAX)
				{
					return 1;
				}
				
				return 0;
			}
			
		}
		
		int full()
		{
			if(top2 == top1+1)
			{
				return 1;
			}
			
			return 2;
		}
		
		void push (int stno , int x)
		{
			if(full()==1)
			{
				cout<<"stack full"<<endl;
				return;
			}
			else
			{
				if(stno==1)
				{
					top1 ++;
					data[top1] = x;
				}
				else if(stno ==2)
				{
					top2 --;
					data[top2] = x;
				}
			}
		}
		
		int pop(int stno)
		{
			if(empty(stno)==1)
			{
				cout<<"stack empty"<<endl;
				return 0;
			}
			else
			{
				if(stno == 1)
				{
					int x = data[top1];
					
					top1 --;
					
					return x;
				}
				else if(stno == 2)
				{
					int x = data[top2];
					
					top2 ++;
					
					return x;
				}
			}
		}
		
	void show(int stno)
	{
		if(stno==1)
		{
			int i = top1;
			
			while(i>-1)
			{
				cout<<data[i]<<" ";
				
				i--;
			}
		}
		else if(stno==2)
		{
			int i = top2;
			
			while(i<MAX)
			{
				cout<<data[i]<<" ";
				
				i++;
			}
		}
	}
		
};

int main()
{
	stack s;
	
	int n,x,r;
	
	s.push(1,34);
	s.push(2,45);
	s.push(2,90);
	s.push(2,34);
	
	cout<<"\n------show_1------"<<endl;
	s.show(1);
	cout<<"\n------show_2-------"<<endl;
	s.show(2);
	
	return 0;
	
}
