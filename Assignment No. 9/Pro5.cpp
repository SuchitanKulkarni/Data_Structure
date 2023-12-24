/*
Q5.WAP to scan a number from user and print its 16 bit binary using stack.
*/

#include<iostream>
#define MAX 16
using namespace std;

class stack
{
	int data[MAX];;
	int top;
	
	public:
		
		stack()
		{
			
			top = -1;
		}
		
		int empty()
		{
			if(top==-1)
			{
				return 1;
			}
			
			return 0;
		}
		int full()
		{
			if(top==MAX-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		void push(int x)
		{
			if(full()==1)
			{
				cout<<"\nstack full"<<endl;
				return;
			}
			else
			{
				top++;
				data[top] = x;
			}
		}
		
		int pop()
		{
			if(empty()==1)
			{
				cout<<"\nstack empty"<<endl;
				return -1;
			}
			else
			{
				int x = data[top];
				top--;
				return x;
			}
		}
		
};

int main()
{
	stack s;
	
	int num,rem;
	
	cout<<"Enter the digit : "<<endl;
	cin>>num;
	
	for(int i=0;i<16;i++)
	{
		rem = num%2;
		num = num/2;
		
		s.push(rem);
	}
	
	while(s.empty()==0)
	{
		cout<<s.pop()<<" ";
	}
	
	cout<<s.pop()<<endl;
	
	return 0;
}

