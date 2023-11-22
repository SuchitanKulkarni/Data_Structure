/*
7.
class Node
{
	//define class here
};
int main()
{
	Node T1,T2,T3;
	//For these three objects,create a compiletime linked list.
	//Print data of all objects using T only.
}
*/

#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node*next;
		
	Node()
	{
		data= 0;
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
	Node T1,T2,T3;
	
	cout<<"Enter the data : "<<endl;
	cin>>T1.data;
	cout<<"Enter the data : "<<endl;
	cin>>T2.data;
	cout<<"Enter the data : "<<endl;
	cin>>T3.data;
	
	T1.next = &T2;
	T2.next = &T3;
	T3.next = NULL;
	
	cout<<T1.data<<endl;
	cout<<T1.next->data<<endl;
	cout<<T1.next->next->data<<endl;
	
	return 0;
	
}
