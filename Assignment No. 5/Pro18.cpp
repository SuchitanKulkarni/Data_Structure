/*
Q2.Write programs for following questions.

1.Create a linked list of integers.Implement following functions
-create()
-show(),
-addatend() 
-concat()
-search()
-count()
-delbypos()
-delatbeg()
-delatend()
-sort()
Implement switch() case properly for this Question
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
		int data;
		node * next;
		
	node()
	{
		data = 0;
		next = NULL;
	}
	node(int a)
	{
		data = a;
		next = NULL;
	
	}
	~node()
	{
		cout<<"Program completed  "<<endl;
	}
};

class SLL
{
	node * head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
	void create();
	void show();
	void addatend(int);
	void concat(SLL);
	int search(int);
	int count();
	void delbypos(int);
	void delatend();
	void delatbeg();
	void sort();
};

void SLL :: create()
{
	int n,x,i;
	
	node * p = NULL;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"no node is present "<<endl;
		return;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		p = head;
		
		for(i=1;i<n;i++)
		{
			cout<<"enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
	}
}

void SLL :: show()
{
	node * p = NULL;
	
	p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		p = p->next;
	}
}

void SLL :: addatend(int x)
{
	node * p = NULL;
	
	p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node * q = head;
		
		while(q->next != NULL)
		{
			q = q->next;
		}
		
		q->next = p;
	}
}

int SLL :: search(int x)
{
	node * p = NULL;
	
	p = head;
	
	while(p!=NULL)
	{
		if(p->data == x)
		{
			return 1;
		}
		
		p = p->next;
	}
	return 0;
}

int SLL :: count()
{
	int c = 0;
	
	node *p = NULL;
	
	p = head;
	
	while(p!=NULL)
	{
		c++;
		
		p = p->next;
	}
	
	return c;
}

void SLL :: concat(SLL T1)
{
	node * p = NULL;
	
	p = head;
	
	if( head == NULL)
	{
		p = T1.head;
	}
	else
	{
		while(p->next != NULL)
		{
			p = p->next;
		}
		
		p->next = T1.head;
	}
	
	}


void SLL :: delbypos(int pos)
{
	int n;
	
	node * p = NULL;
	
	n = count();
	
	if(pos < 1 || pos>=n+1)
	{
		cout<<"Invalid position "<<endl;
		
		return;
	}
	if(pos == 1)
	{
		delatbeg();
	}
	else
	{
		p = head;
		
		for(int i=1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node * q = NULL;
		
		q = p->next;
		p->next = q->next;
		
		delete q;
	}
}

void SLL :: delatbeg()
{
	node * p = NULL;
	
	p = head;
	
	if(head == NULL)
	{
		cout<<"List is empty "<<endl;
		
		return ;
	}
	if(head ->next == NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		head = p->next;
		
		delete p;
	}
}

void SLL :: delatend()
{
	node * p = NULL;
	
	p = head;
	
	if(head == NULL)
	{
		cout<<"list is empty : "<<endl;
		return;
	}
	if(head->next == NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		node * q = NULL;
		
		while(p->next != NULL)
		{
			q = p;
			p = p->next;
		}
		
		q->next = NULL;
		
		delete p;
	}
}

void SLL :: sort()
{
	node * p = NULL;
	node * q = NULL;
	
	int temp;
	
	for(p = head ; p!=NULL ; p = p->next)
	{
		for(q = p->next; q!= NULL ; q = q->next)
		{
			if(p->data > q->data)
			{
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

int main()
{
	int ch,i,x;
	
	SLL s1,s2,s3;
	
	do
	{
		cout<<"----------------Menu-------------------"<<endl;
		cout<<"\nPress \n1.create \n2.show \n3.addatend \n4.delbypos \n5.delatend \n6.delatbeg \n7.search \n8.sort \n9.concat \n10.count\n11.EXIT \n"<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1 : s1.create();
						cout<<"for second list"<<endl;
					 s2.create();
						break;
						
			case 2 : s1.show();
						break;
						
			case 3 : cout<<"Enter the value : "<<endl;
						cin>>i;
			         s1.addatend(i);
			         break;
			
		    case  4 : cout<<"Enter the position : "<<endl;
		    			cin>>i;
			         s1.delbypos(i);
			         
			           break;
			           
			case 5 : s1.delatend();
						break;
						
			case 6 : s1.delatbeg();
						break;
						
			case 7 : cout<<"Enter the value to search : "<<endl;
						cin>>i;
						
					if(s1.search(i))
					{
						cout<<"found"<<endl;
					}
					else
					{
						cout<<"not found"<<endl;
					}
					
					break;
					
		    case 8 : s1.sort();
		    			s2.sort();
		    			
		    			break;
		    			
		    case 9 : s2.concat(s1);
		    			s2.show();
		    			break;
		    			
		    case 10 : cout<<" number of nodes : "<<s1.count();
		    
		              break;
		    
		    case 11 : exit(1);
		    
		     default : cout<<" worng input"<<endl;
		}
		
		cout<<"\n\nDO you want to continue (0 = no) : "<<endl;
		cin>>x;
	}while(x!= 0);
	
	return 0;
}
