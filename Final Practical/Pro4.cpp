/*
Q3.
/*Try following program with composition*/

/*Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set
B of students like butterscotch ice-cream. Write C++ program to store two sets using
linked list. compute and display
a) Set of students who like both vanilla and butterscotch.
b) Set of students who like either vanilla or butterscotch.
c) Number of students who like neither vanilla nor butterscotch.
d) Remove those from both lists who like both and create their separate list.
Store PRN number and Name of Student.

*/

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public:
		
		char name[90];
		char prn[90];
		
		void getdata()
		{
			cout<<"enter the name : "<<endl;
			cin.getline(name,90);
			cout<<"enter the prn : "<<endl;
			cin.getline(prn,90);
		}
		
		void showdata()
		{
			cout<<name<<" "<<prn<<endl;
		}
		
};

class node
{
	public:
		
		student data ;
		node*next;
		
	node()
	{
		next = NULL;
	}
	node(student a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode deleted "<<endl;
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
		
		void addatend(student);
		void show();
		void compair1(SLL);
		void compair2(SLL,SLL);
		
};

void SLL::addatend(student c)
{
	node*p = new node(c);
	
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

void SLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		student s = p->data;
		
		s.showdata();
		
		p = p->next;
	}
}

void SLL::compair1(SLL s2)
{
	node*p = head;
	node*q = s2.head;
	
	for(p =head;p!=NULL;p = p->next)
	{
		for(q = s2.head;q!=NULL;q = q->next)
		{
			student s,c;
			
			s = p->data;
			c = q->data;
			
			if(strcmp(s.prn,c.prn)==0)
			{
				s.showdata();
			}  
			
		}
	}
}

void SLL::compair2(SLL s1,SLL s2)
{
	node*p = s1.head;
	node*q = s2.head;
	
	for(p =s1.head;p!=NULL;p = p->next)
	{
		for(q = s2.head;q!=NULL;q = q->next)
		{
			student s,c;
			
			s = p->data;
			c = q->data;
			
			if(strcmp(s.prn,c.prn)==0)
			{
				addatend(p->data);
				
				if(p==s1.head && s1.head->next == NULL)
				{
					delete p;
					
					s1.head = NULL;
				}
				else if(p == s1.head && s1.head!=NULL)
				{
					s1.head = s1.head->next;
					
					delete p;
				}
				else
				{
					node*o = s1.head;
					
					while(o->next!=p)
					{
						o = o->next;
					}
					
					o->next = p->next;
					
					delete p;
				}
				
				if(q==s2.head && s2.head->next == NULL)
				{
					delete q;
					
					s2.head = NULL;
				}
				else if(q == s2.head && s2.head!=NULL)
				{
					s2.head = s2.head->next;
					
					delete p;
				}
				else
				{
					node*o = s2.head;
					
					while(o->next!=p)
					{
						o = o->next;
					}
					
					o->next = p->next;
					
					delete p;
				}
				
			}  
			
		}
	}
}

int main()
{
	SLL s1,s2,s3,s4;
	
	student p;
	
	int ch;
	
	while(1)
	{
		p.getdata();
		
		cout<<"---------menu-----"<<endl;
		cout<<"\npress \n1.vanilla\n2.butterschot\n3.both\n4.none\n5.exit"<<endl;
		cout<<"enter your choice : "<<endl;
		cin>>ch;
		cin.ignore(1);
		
		if(ch==1)
		{
			s1.addatend(p);
			
		}
		else if(ch == 2)
		{
			s2.addatend(p);
		}
		else if(ch == 3)
		{
			s1.addatend(p);
			s2.addatend(p);
		}
		else if(ch == 4)
		{
			s3.addatend(p);
		}
		else if(ch == 5)
		{
		   break;
		}
	}
	
	cout<<"\n ------vanilla------"<<endl;
	s1.show();
	cout<<"\n-------butterscotch--------"<<endl;
	s2.show();
	cout<<"\n-------none--------"<<endl;
	s3.show();
	cout<<"\n-------both---------"<<endl;
	s1.compair1(s2);
	cout<<"\n----- only both-----"<<endl;
	s4.compair2(s1,s2);
	s4.show();
	
	return 0;
	
	
}
