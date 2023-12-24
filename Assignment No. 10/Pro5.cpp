/*
3.Scan infix expression from user.Convert it into postfix expression.
Evaluate this postfix expression.
(Condition=Only 4 operators are to be used here(+,-,*,/).
All operands are of single digit).
*/

#include<iostream>
#define MAX 30
using namespace std;

class operatorstack
{
	char data[MAX];
	int top;
	
	public:
		
		operatorstack()
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
		
		void push(char p)
		{
			if(full()==1)
			{
				cout<<"stack full"<<endl;
				return;
			}
			else
			{
				top++;
				data[top] = p;
			}
		}
		
		char pop ()
		{
			if(empty()==1)
			{
				cout<<"stack empty"<<endl;
				return 0;
			}
			else
			{
				char x = data[top];
				
				top--;
				
				return x;
			}
		}
};

class oprandstack
{
	int data[MAX];
	int top;
	
	public:
		
		oprandstack()
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
				cout<<"stack full"<<endl;
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
				cout<<"stack empty"<<endl;
				return 0;
			}
			else
			{
				int x = data[top];
				
				top--;
				
				return x;
			}
		}
		
		
};
int getpriority(char ch);
int evaluation(char postfix []);

int main()
{
	char infix[30],postfix[30];
	operatorstack stk;
	char expop,stkop,ch;
	int i,j;
	i =0,j=0;
	
	cout<<"Enter the infix expression : "<<endl;
	cin.getline(infix,30);
	
	while(infix[i]!='\0')
	{
		 ch = infix[i];
		 
		 if(ch=='/'||ch=='*'||ch=='+'||ch=='-')
		 {
		 	expop = ch;
		 	
			while(stk.empty()!=1)
			{
				stkop = stk.pop();
				
		 	      if(getpriority(stkop)>= getpriority(expop))
		 	      {
		 	      	    postfix[j] = stkop;
		 	      	    
		 	      	    j++;
				  }
				  else
				  {
				  	stk.push(stkop);
				  	break;
				  }
			}
			
			stk.push(expop);
		 }
		 else
		 {
		 	postfix[j] = ch;
			 
			 j++; 
		 }
		 
		 i++;
	}
	
	while(stk.empty()==0)
	{
		postfix[j] = stk.pop();
		
		j++;
	}
	
	cout<<"\npostfix expression : "<<postfix;
	
	cout<<"\n\nEvaluation of postfix = "<<evaluation(postfix);
}

int getpriority(char ch)
{
	if(ch=='*' || ch=='/')
	{
		return 2;
	}
	if(ch=='+' || ch=='-')
	{
		return 1;
	}
}

int evaluation(char postfix [])
{
	oprandstack stk;
	
	int op1,op2,ans;
	
	int i,j;
	char ch;
	i=0;
	
	while(postfix[i]!='\0')
	{
		ch = postfix[i];
		
		if(ch=='/'||ch=='+'||ch=='*'||ch=='-')
		{
			op1 = stk.pop();
			op2 = stk.pop();
			
			switch(ch)
			{
				case '+' : stk.push(op2+op1);
							break;
							
				case '-' : stk.push(op2-op1);
							break;
							
				case '*': stk.push(op2*op1);
							break;
							
				case '/' : stk.push(op2/op1);
				
			}
		}
		else
		{
		   int x = postfix[i]-48;
		   
		   stk.push(x);
		   
		}
		
		i++;
	}
	
	if(stk.empty()==1)
	{
	  cout<<"wrong 1 execution"<<endl;
	  return 0;
	}
	if(stk.empty()==0)
	{
		ans = stk.pop();
		return ans;
	}
	if(stk.empty()==0)
	{
		cout<<"wrong 2 execution "<<endl;
	}
}
