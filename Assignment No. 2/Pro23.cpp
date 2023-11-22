/*
9.
class Node
{
	public:
		int data;
		Node * next;
};
For above class Node,create a linked list of 4 runtime objects.
Do not use loop to create list.
Do not use loop to print all the data of list.
*/

#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		
	Node()
	{
		data = 0;
		next = NULL;
	}
	Node(int a)
	{
		data =a;
		next = NULL;
	}
};

int main()
{
	Node *T1,*T2,*T3,*T4;
	int x;
	
	cout<<"Enter the data : "<<endl;
	cin>>x;
	
	T1 = new Node(x);
	cout<<"Enter the data : "<<endl;
	cin>>x;
	T2 = new Node (x);
	
	cout<<"Enter the data : "<<endl;
	cin>>x;
	
	T3 = new Node(x);
	
	cout<<"Enter the data : "<<endl;
	cin>>x;
	
	T4 = new Node(x);
	
	T1->next = T2;
	T2->next = T3;
	T3->next = T4;
	T4->next = NULL;
	
	cout<<T1->data<<endl;
	cout<<T1->next->data<<endl;
	cout<<T1->next->next->data<<endl;
	cout<<T1->next->next->next->data<<endl;
	
	return 0;
	
	
	
}
