/*
11.
class Node
{
	public:
		int data;
		Node * next;
};
Create a linked list of n objects.Print n objects using loop.
Check both conditions in while loop we have seen in lecture.
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
	int n,x,i;
	
	Node*p = NULL;
	Node*q = NULL;
	
	cout<<"Enter the n : "<<endl;
	cin>>n;
	
	cout<<"Enter the first node : "<<endl;
	cin>>x;
	
	p = new Node(x);
	
	q = p;
	 
	 for(i = 1;i<n;i++)
	 {
	 cout<<"Enter the  node : "<<endl;
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
	 p = q;
	 cout<<"\n"<<endl;
	 
	 while(p->next!= NULL)
	 {
	 	cout<<p->data<<" ";
	 	p = p->next;
	  } 
	  
	  cout<<p->data;
	  
	  return 0;
	
}
