/*
Q6.Scan a string from user.Print this string in reverse order using stack(array implementation)
*/

#include<iostream>
#define MAX 12
using namespace std;

class stack
{
	char data[MAX];
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
			if(top == MAX-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		void push(char c)
		{
			if(full()==1)
			{
				cout<<"\nstack full"<<endl;
				return;
			}
			else
			{
				top++;
				data[top] = c;
			}
		}
		
		char pop()
		{
			if(empty()==1)
			{
				cout<<"\nstack empty"<<endl;
			}
			else
			{
				char ch = data[top];
				top--;
				return ch;
			}
		}
};

int main()
{
	stack s;
	
	char str[10];
	
	cout<<"Enter a string : "<<endl;
	cin.getline(str,10);
	int i ;
	
	while(str[i]!='\0')
	{
		s.push(str[i]);
		i++;
	}
	
	while(s.empty()==0)
	{
		cout<<s.pop()<<endl;
	}
}
