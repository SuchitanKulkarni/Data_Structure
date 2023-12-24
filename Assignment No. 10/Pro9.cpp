/*
7.
class Student
{
	public:
		char name[20];
		int age;
};
Create an SLL of different objects of Student.
Do not define create() function.Use addatbeg() or addatend()
to add new Node.
Implement following functions.
-search by name
-Print all students below specific age.
This age will be input from user.
-Delete student by name.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[20];
		int age;
		
	void getdata()
	{
		cout<<"Enter the name : "<<endl;
		cin.getline(name,20);
		cout<<"Enter the age : "<<endl;
		cin>>age;
		cin.ignore(1);
	}
	void showdata()
	{
		cout<<name<<" "<<age<<endl;
	}
};

class node
{
	public:
		
		Student data;
		node*next;
		
	node()
	{
		next = NULL;
	}
	node(Student a)
	{
		data = a;
		next= NULL;
	}
	~node()
	{
		cout<<"\nnode deleted"<<endl;
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
		
		void addatend(Student);
		void print(int x);
		void show();
		void del(char*);
};

void SLL::addatend(Student s)
{
	node*p = new node(s);
	
	if(head==NULL)
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
		
		q ->next = p;
	}
}

void SLL::print(int x)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Student s = p->data;
		
		if(s.age==x)
		{
			s.showdata();
		}
		
		p = p->next;
	}
}

void SLL::show()
{
	node*p = head;
	
	while(p!=NULL)
	{
		Student s = p->data;
		
		s.showdata();
		
		p = p->next;
	}
}

void SLL::del(char *s)
{
	node*p = head;
	
	while(p!=NULL)
	{
		Student e = p->data;
		
		if(strcmp(e.name,s)==0)
		{
			if(p==head && head->next == NULL)
			{
				delete head;
				
				head = NULL;
			}
			else if(p==head && head->next !=NULL)
			{
				node*q= head;
				
				head = head->next;
				
				delete q;
			}
			else
			{
				node*q = head;
				
				while(q->next!=p)
				{
					q = q->next;
				}
				
				q->next = p->next;
				
				delete p;
			}
		}
		
		p = p->next;
	}
}

int main()
{
	int n,x;
	
	SLL s1;
	
	cout<<"Enter the number of nodes : "<<endl;
	cin>>n;
	cin.ignore(1);
	Student s;
	
	for(int i=0;i<n;i++)
	{
		s.getdata();
		s1.addatend(s);
	}
	
	s1.show();
	
	char str[90];
	
	cout<<"Enter the age to print data : "<<endl;
	cin>>x;
	cin.ignore(1);
	s1.print(x);
	
	cout<<"enter the name to delete : "<<endl;
	cin.getline(str,90);
	
	s1.del(str);
	
	s1.show();
	
	return 0;
}
