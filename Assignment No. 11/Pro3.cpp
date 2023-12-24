/*
Q3.Implement n stacks in one array.
*/

#include<iostream>
#define MAX 78
using namespace std;

class stack
{
	int data[MAX];
	int *top;
	int * bottom;
	
	public:
		
		stack()
		{
			int n,ne;
			
			cout<<"enter the number of stacks : "<<endl;
			cin>>n;
			
			ne = MAX/n;
			
			top = new int[n+1];
			bottom = new int[n+1];
			
			top[0] = -1;
			bottom[0] = 0;
			
			for(int i=1;i<=n;i++)
			{
				top[i] = top[i-1]+ne;
				bottom[i] = bottom[i-1]+ne;
			}
			
		}
		
		int empty(int stno)
		{
			int i = stno;
			
			if(top[i]+1 == bottom[i])
			{
				return 1;
			}
			return 0;
		}
		
		int full(int stno)
		{
			int i = stno;
			
			if(top[i]+1 == bottom[i+1])
			{
				return 1;
			}
			
			return 0;
		}
		
		void push(int stno,int x)
		{
			if(full(stno)==1)
			{
				cout<<"stack full"<<endl;
				return;
			}
			else
			{
				int i = stno;
				
				top[i] ++;
				
				data[top[i]] = x;
			}
		}
		
		int pop(int stno)
		{
			int i = stno;
			
			if(empty(stno)==1)
			{
				cout<<"stack empty"<<endl;
				return 0;
			}
			else
			{
				int x = data[top[i]];
				
				top[i]--;
				
				return x;
			}
		}
		
		void show(int stno)
		{
			int i = stno;
			
			int j = top[i];
			
			while(j>bottom[i]-1)
			{
				cout<<data[j]<<" ";
				
				j--;
			}
		}
};

int main()
{
	stack s;
	
	s.push(0,23);
	s.push(1,34);
	s.push(2,90);
	cout<<"\n----show0-----"<<endl;
	s.show(0);
	cout<<"\n----show1-----"<<endl;
	s.show(1);
	cout<<"\n------show2-----"<<endl;
	s.show(2);
	
	return 0;
}
