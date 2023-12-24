/*
Q5.Scan a string from user.Create an SLL containing each character from
string.One character can appear only once in string.Print SLL.
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
		char data;
		node*next;
		
	node()
	{
		next = NULL;
	}
	node(char a)
	{
		data = a;
		next = NULL;
	}
};

class SLL
{
	node*head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void addatend(char );
		void show();
		int search(char);
};

void SLL::addatend(char c)
{
	node*p = new node(c);
	
	if(search(c)==1)
	{
		return;
	}
 	else
	{
		     if(head == NULL)
        	{
	        	head = p;
         	}
        	else
        	{
	        	node*q = head;
	        	
	        	while(q->next!=NULL)
	        	{
	        		q = q->next;
				}
				
				q->next = p;
	        }
	}
}

int SLL::search(char a)
{
	node*p = head;
	
	while(p!=NULL)
	{
		if(p->data == a)
		{
			return 1;
		}
		
		p = p->next;
		
	}
	return 0;
}

void SLL::show()
{
	node* p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

int main()
{
	char str[90];
	
	SLL s1;
	int i;
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,90);
	
	while(str[i]!='\0')
	{
		s1.addatend(str[i]);
		
		i++;
	}
	
	s1.show();
	
	return 0;
}
