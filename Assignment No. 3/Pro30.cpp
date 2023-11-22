/*
class Node
{
	public:
		int data;
		Node * next;
}
Q13.Write program to create a linkedlist for 4 runtime objects of class Node.
Print data of all the nodes.Count how many times 10 is present in the list.

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

	int i;
	
	Node * p = NULL;
	Node * q = NULL;
	
	int x;
	
	cout<<"Enter the first node : "<<endl;
	cin>>x;
	
	p = new Node(x);
	
	q = p;
	
	for(i=1;i<4;i++)
	{
		cout<<"Enter the node : "<<endl;
		cin>>x;
		
		p->next = new Node(x);
		p = p->next;
	}
	
	p = q;
	
	int count = 0;
	
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		
		if(p->data == 10)
		{
			count++;
		}
		
		p = p->next;
	}
	
	cout<<"count = "<<count;
	
	return 0;
}
