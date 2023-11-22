/*
10.
class Node
{
	public:
		int data;
		Node * next;
};
For above class Node,create a linked list of 6 runtime objects using loop.
Print all the data of the list using loop.
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

int main()
{
	Node *p = NULL;
	Node* q = NULL;
	
	cout<<"ENter the first node : "<<endl;
	int x;
	cin>>x;
	
	p = new Node(x);
	
	q = p;
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cout<<"Enter the node : "<<endl;
		cin>>x;
		p->next = new Node(x);
		
		p = p->next;
	}
	
	p = q;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	
	return 0;
}
