/*
Q6.Create a linkedlist of integers.Implement the following functions.
-create()
-show()
-search()
-count()
-addatbeg()
-addatend()
-addbypos()
-delatbeg()
-delatend()
-delbypos()
After completing whole program,apply switch case.
*/

#include<iostream>
using namespace std;

class Node
{
	public:
		
		int data;
		Node * next;
		
	Node()
	{
		data = 0;
		next = NULL;
	}
	
	Node(int a)
	{
		data = a;
		next = NULL;
	}
};


class SLL
{
	Node* head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void  create();
        void show();
        int count();
     	int search(int x);
		void addatbeg(int);
		void addatend(int);
		void addbypos(int , int);
		void delatbeg();
		void delatend();
		void delbypos(int pos);

};
int main()
{
	int i,ch,choice,x,pos,n;
	
	SLL s1;
	
	do
	{
		cout<<"------------------MENU----------------"<<endl;
		cout<<"Press\n 1.Create\n 2.show\n 3.Count\n 4.Search\n 5.addatbeg\n 6.addatend\n 7.addbypos\n 8.delatbeg\n 9.delatend\n 10.delbypos "<<endl;
		cout<<"\nEnter the choice : "<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1 :  s1.create();
						break;
						
			case 2 : s1.show();
						break;
						
			case 3 : 
					 n = s1.count();
					 cout<<" count = "<<n<<endl;
						break;
						
			case 4 : cout<<"Enter the value to search : "<<endl;
					 cin>>x;
					if(s1.search(x))
					{
				        cout<<"found"<<endl;
					} 
					else
					{
						cout<<"Not found"<<endl;
					}
						break;
						
			case 5 : cout<<"Enter the data to insert : "<<endl;
					cin>>x;
			          s1.addatbeg(x);
			          break;
			          
			case 6 : cout<<"ENter the data to insert : "<<endl;
					 cin>>x;
					 
					 s1.addatend(x);
					 	break;
				
			case 7 : cout<<"ENter the postion : "<<endl;
					 cin>>pos;
					 cout<<"Enter the data : "<<endl;
					 cin>>x;
					 
					 s1.addbypos(pos,x);
					 	break;
						 
			case 8 :
					 s1.delatbeg();
					 	break;
						 
			case 9 : 
					 s1.delatend();
					 	break;
						 
		    case 10 : cout<<"Enter the position to delete : "<<endl;
					  cin>>pos;
					  s1.delbypos(pos);
					  	break;
						 
			default : cout<<"Wrong input"<<endl;
			 
		}
		
		cout<<"\nDo you want to continue : "<<endl;
		cin>>ch;
		
	}while(ch!=0);
}

void SLL::create() 
{
	int x,i,n;
	
	Node * p = NULL;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	cout<<"Enter the first node : "<<endl;
	cin>>x;
	
	head = new Node(x);
	
	p = head;
	
	for(i=1;i<n;i++)
	{
		cout<<"Enter the node : "<<endl;
		cin>>x;
		
		p->next = new Node(x);
		p = p->next;
	}
}

void SLL:: show()
{
	Node * q = NULL;
	q = head;
	
	while(q!=NULL)
	{
		cout<<q->data<<" ";
		
		q = q->next;
	}
}

int SLL :: count()
{
	int x;
	
	Node *q = NULL;
	
	q = head;
	
	while(q!=NULL)
	{
		x++;
		q = q->next;
	}
	
	return x;
}

int SLL :: search(int x)
{
	Node * q = NULL;
	
	q = head;
	
	while(q!=NULL)
	{
		if(q->data == x)
		{
			return 1;
		}
	}
	
	return 0;
}
void SLL :: addatbeg(int x)
{
	Node *q = NULL;
	
	q = head;
	
	Node *p = new Node(x);
	
	if(head==NULL)
	{
		head = p;
	}
	else
	{
		p->next = head;
		head = p;
	}
}

void SLL :: addatend(int x)
{
	Node *q = NULL;
	Node *p = NULL;
	
	q = new Node(x);
	
	if(head == NULL)
	{
		head = q;
	}
	else
	{
		p = head;
		
		while(p->next!=NULL)
		{
			p = p->next;
		}
		
		p->next = q;
		
	}
}

void SLL :: addbypos(int pos,int x)
{
	int n;
	
	n = count();
	
	if(pos<1 || pos>n+1)
	{
		cout<<"Invalid position "<<endl;
		return;
	}
	if(pos==1)
	{
		addatbeg(x);
	}
	else
	{
		Node * q = NULL;
		
		q = head;
		
		Node * p = new Node(x);
		
		for(int i=1;i<pos-1;i++)
		{
			q = q->next;
		}
		
		p->next = q->next;
		q->next = p;
		
	}
}

void SLL :: delatbeg()
{
	Node * q = NULL;
	
	if(head == NULL)
	{
		cout<<"List is empty "<<endl;
		return ;
	}
	else
	{
		q = head;
		head = head->next ;
		
		delete q;
	}
	
}

void SLL :: delatend()
{
	Node * q = NULL;
	
	if(head == NULL)
	{
		cout<<"list is empty"<<endl;
		return;
	}
	else
	{
		 q = head;
		 Node * p = NULL ;
		 while(q->next!=NULL)
		 {
		 	p = q;
		 	q = q->next;
		 }
		 
		 p->next = NULL;
		 
		 delete q;
		
	}
}

void SLL :: delbypos(int pos)
{
	int n;
	
	n = count();
	
	if(pos<1 && pos>=n+1)
	{
		cout<<"Invalid position"<<endl;
		return ;
	}
	if(pos == 1)
	{
		delatbeg();
	}
	else
	{
		Node * p = NULL;
		Node *q = NULL;
		
		q = head;
		
		for(int i = 1;i<pos-1;i++)
		{
			q = q->next;
		}
		
		p = q->next;
		
		q->next = p->next;
		
		delete p;
	}
}

