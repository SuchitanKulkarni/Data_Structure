/*
class Node
{
	public:
		int data;
		Node * next;
}

Q12.Write program to create a linkedlist for 4 compiletime objects of class Node.
Print data of all the nodes
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
	
     Node T1,T2,T3,T4;
     
    cout<<"Enter data :"<<endl;
    cin>>T1.data;
    cout<<"Enter data : "<<endl;
    cin>>T2.data;
    cout<<"Enter the data : "<<endl;
    cin>>T3.data;
    cout<<"Enter data : "<<endl;
    cin>>T4.data;
	 
	 T1.next = &T2;
	 T2.next = &T3;
	 T3.next = &T4;
	 T4.next = NULL;
	 
	cout<<T1.data<<endl;
	cout<<T1.next->data<<endl;
	cout<<T1.next->next->data<<endl;
	cout<<T1.next->next->next->data<<endl;
	 
	 
	return 0;
	
	
}
