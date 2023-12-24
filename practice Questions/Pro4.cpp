/*
4.Keep scanning a number from user.If number is positive,add it to
linked list of positive numbers.If number is negative, add it to list of
negative numbers. Stop scanning number when user enters 0.Print
total number of positive & negative numbers. Find the smallest
number from negative linked list and largest from positive linked list.
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
};

class SLL
{
	node*head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
		void create(int);
		int count();
		int largest();
		int smallest();
		void addatend(int);
};

void SLL :: create(int x)
{
	addatend(x);
}

void SLL::addatend(int x)
{
	node * p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		node *q;
		
		q = head;
		
		while(q->next!=NULL)
		{
			q = q->next;
		}
		
		q->next = p;
	}
}

int SLL::count()
{
	node * p;
	int c;
	p = head;
	
	while(p!=NULL)
	{
		c++;
		
		p = p->next;
	}
	
	return c;
}

int SLL::largest()
{
	int max;
	
	node * p;
	
	p = head;
	
	max = p->data;
	
	while(p!=NULL)
	{
		if(p->data > max)
		{
			max = p->data;
		}
		
		p = p->next;
	}
	
	return max;
}

int SLL :: smallest()
{
	node * p;
	int min;
	p = head;
	
	min = p->data;
	
	while(p!=NULL)
	{
		if(p->data < min)
		{
			min = p->data;
		}
		
		p = p->next; 
	}
	
	return min;
}

int main()
{
	SLL s1,s2;
	
	int x;
	
	while(1)
	{
		cout<<"Enter the data : "<<endl;
		cin>>x;
		
		if(x==0)
		{
			break;
		}
		else
		{
			if(x>0)
			{
				s1.create(x);
			}
			if(x<0)
			{
				s2.create(x);
			}
		}
	}
	
	cout<<"count of positive : "<<s1.count()<<endl;
	cout<<"count of negative : "<<s2.count()<<endl;
	cout<<"largest number in positive is : "<<s1.largest()<<endl;
	cout<<"smallest number in negetive is : "<<s2.smallest()<<endl;
	
	return 0;
}

