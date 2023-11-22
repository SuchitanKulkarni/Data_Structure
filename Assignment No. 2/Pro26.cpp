/*
11.
class Node
{
	public:
		int data;
		Node * next;
};
Create a linked list of n objects.Check how many times 10 is present in the list.
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
	int n,x,i,count=0;
	
	cout<<"Enter the n : "<<endl;
	cin>>n;
	
	Node * p = NULL;
	Node * q = NULL;
	
	cout<<"Enter first node : "<<endl;
	cin>>x;
	
	 p = new Node(x);
	 
	 q = p;
	 
	 for(i=1;i<n;i++)
	 {
	 	cout<<"Enter the node : "<<endl;
	    cin>>x;
	    
	    p->next = new Node(x);
	    p = p->next;
	 }
	
	p = q;
	
	while(p!=NULL)
	{
		if(p->data == 10)
		{
			count++;
		}
		
		p = p->next;
	}
	
	cout<<" count = "<<count;
	
	return 0;
	 
	 
}
