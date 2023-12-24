/*Q3.Write programs for following questions.
1.Implements n stacks in one array.
Write 2 display functions.One will display specific stack.
Another will diplay all stacks.
*/

#include<iostream>
#define MAX 50
using namespace std;

class stack
{
	int data[MAX];
	int *top,*bottom;
	int n;
	
	public:
		
		stack()
		{
			int ne;
			
			cout<<"enter the number of stacks : "<<endl;
			cin>>n;
			
			ne = MAX/n;
			
			top = new int [n+1];
			bottom = new int [n+1];
			
			top[0] = -1;
			bottom[0] = 0;
			
			for(int i=1;i<=n;i++)
			{
				top[i] = top[i-1] +ne;
				bottom[i] = bottom[i-1] + ne;
			}
		}
		
		int empty(int stno)
		{
			int i = stno;
			
			if(top[i] +1 == bottom[i])
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
			int i = stno;
			
			if(full(stno)==1)
			{
				cout<<"stack full"<<endl;
				return;
			}
			else
			{
				top[i]++;
				
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
				
				top[i] --;
				
				return x;
			}
			
		}
		
		
		void display_1(int stno)
		{
			for(int i = bottom[stno];i<=top[stno];i++)
			{
				cout<<data[i]<<" ";
			}
		}
		
		void display_2()
		{
			int j = 0;
			for(int i=0;i<n-1;i++)
			{
				for(j=bottom[i];j<=top[i];j++)
				{
					cout<<data[top[i]]<<" ";
					
				}
			}
		}
};

int main()
{
	stack s;
	
	int n,x;
	
	cout<<"\nenter the stack and data : "<<endl;
	cin>>n>>x;
	
	s.push(n,x);
	
	cout<<"\nenter the stack and data : "<<endl;
	cin>>n>>x;
	
	s.push(n,x);
	
	cout<<"\nenter the stack and data : "<<endl;
	cin>>n>>x;
	
	s.push(n,x);
	
	cout<<"\nenter the stack to dispaly : "<<endl;
	cin>>n;
	
	s.display_1(n);
	
	cout<<"\n---whole stack------"<<endl;
	
	s.display_2();
	
	cout<<"\nenter the stack to pop : "<<endl;
	cin>>n;
	
	while(s.empty(n)==0)
	{
		cout<<s.pop(n)<<" ";
	}
	
	return 0;
}
