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
	node (int a)
	{
		data = a;
		next = NULL;
	}
    ~node()
    {
    	cout<<"\nnode deleted : "<<endl;
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
       void delatbeg();
       void delatend();
       void sort();
};

void SLL :: create()
{
	int n,x;
	
	node * p = NULL;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"no any nodes are written : "<<endl;
		return ;  
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		head = new node(x);
		
		p = head;
		
		for(int i=1;i<n;i++)
		{
			cout<<"Enter the node : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
	}
}

void SLL :: show()
{
	node * p;
	
	p = head;
	
	while(p!=NULL)
	{
		cout<<p->data<<"  ";
		
		p = p->next; 
	 } 
}
 
 void SLL :: addatend(int x)
 {
 	node * p = new node(x);
 	
	if(head == NULL)
	{
 		head = p;
	}
    else
	{
	 	node * q;
	 	
	 	q = head;
	 	
	 	while(q->next!=NULL)
	 	{
	 		q = q->next;
		}
		
		q->next = p;
	}
 }
 void SLL :: delatbeg()
 {
	node * p;
	
	if(head==NULL)
	{
		cout<<"List is empty : "<<endl;
		return;
	}
	if(head->next == NULL)
	{
		delete head;
		
		head = NULL;
	}
	else
	{
		p = head;
		
		head = head->next;
		
		delete p;
	}
 	
 }
 
 void SLL :: delatend()
 {
 	node *p;
 	
 	if(head == NULL)
 	{
 		cout<<"List is empty : "<<endl;
 		return;
	 }
	 if(head->next == NULL)
	 {
	 	delete head;
	 	
	 	head = NULL;
	 }
	else
	{
		p = head;
		node * q;
		
		while(p->next!= NULL)
		{
			q = p;
			p = p->next;
		}
		
		q->next = NULL;
		
		delete p;
	}
 }
 
 void SLL :: delbypos(int pos)
 {
 	int n;
 	
 	n = count();
 	
 	if(pos <1 || pos>=n+1)
 	{
 		cout<<"Invalid position : "<<endl;
 		return ;
	 }
	
	if(pos == 1)
	{
		delatbeg();
	}
	else
	{
		node * p ;
		node *q;
		p = head;
		
		for(int i =1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		q = p->next;
		p->next = q->next;
		
		delete q;
	}
 	
 }
 
 int SLL :: count()
 {
 	node * p;
 	
 	p = head;
 	
 	int c;
 	
 	while(p!=NULL)
 	{
 		c++;
 		
 		p = p->next;
	 }
	 
	return c;
 }
 
int SLL :: search(int x)
{
	node * p ;
	
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

void SLL :: sort()
{
	node * p;
	node *q;
	
	int temp;
	
	for(p = head; p!=NULL ; p = p->next)
	{
		for(q = p->next; q!=NULL ; q =q->next)
		{
			if(p->data >  q->data)
			{
				temp = p->data;
				p->data = q->data;
				q->data = temp;
			}
		}
	}
}

void SLL :: concat(SLL T)
{
	
	if(head == NULL)
	{
		head = T.head;
	}
	else
	{
		node *q ;
		
		q = head;
		
		while(q->next!=NULL)
		{
			q = q->next;
		}
		
		q->next = T.head;
	}
}

int main()
{
	SLL s1,s2;
	
	int ch,x;
	
	do
	{
		cout<<"----------MENU---------------"<<endl;
		cout<<"\npress \n 1.create \n 2.show \n 3.sort \n 4.concat \n 5.delatbeg \n 6.addatend \n 7.delatend \n 8.search \n 9.delbypos "<<endl;
		cout<<"Enter your choice : "<<endl;
		cin>>ch;
	    
	    switch(ch)
	    {
	    	case 1 : cout<<"Creating the frist list : "<<endl;
			        s1.create();
	    			cout<<"creating the second list : "<<endl;
	    			s2.create();
	    			
	    			break;
	    			
	    	case 2 : cout<<"\n-------- show-------- "<<endl;
	    			 s1.show();
	    			 break;
	    			
	    	case 3 : cout<<"\n---------sort--------"<<endl;
	    			 s1.sort();
	    			 s1.show();
	    			 break;
	    			 
	    	case 4 : cout<<"\n--------concat-------"<<endl;
	    			 s1.concat(s2);
	    			 s1.show();
	    			 break;
	    			 
	    	case 5 : cout<<"\n---------delatbeg----"<<endl;
	    			 s1.delatbeg();
	    			 s1.show();
	    			 break;
	    			 
	    	case 6 : cout<<"\n---------addatend-----"<<endl;
	    			 cout<<"Enter the node to add at end : "<<endl;
	    			 cin>>x;
	    			 s1.addatend(x);
	    			 s1.show();
	    			 break;
	    			 
	    	case 7 : cout<<"\n--------delatend------"<<endl;
	    			 s1.delatend();
	    			 s1.show();
	    			 break;
	    			 
	    	case 8 :cout<<"\n---------search--------"<<endl;
	    			cout<<"Enter the data to search : "<<endl;
	    			cin>>x;
	    			
	    			if(s1.search(x)==1)
	    			{
	    				cout<<"found"<<endl;
					}
					else
					{
						cout<<"Not found"<<endl;
					}
	    			 
	    			 break;
	    			 
	    	case 9 : cout<<"\n-------delbypos-----"<<endl;
	    			 cout<<"Enter the position to delete :  "<<endl;
	    			 cin>>x;
	    			 s1.delbypos(x);
	    			 s1.show();
	    			 break;
	    		
	    	case 10 : cout<<"\nExit";
	    			  exit(0);
	    			  break;
	    	
	    	default :  cout<<"\nwrong choice :" <<endl;
		}
		
		cout<<"\n \n Do you want to continue : "<<endl;
		cin>>ch;
		
	}while(ch!=0);
	
	return 0;
}
