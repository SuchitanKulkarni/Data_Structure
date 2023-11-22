/*
8.
class Node
{
	private:
		int age;
		int roll;
};
Create a compiletime linked list of 4 objects.Print all the objects.
Use constructors here.(friend)
*/

#include<iostream>
using namespace std;

class Node
{
	private:
		int age;
		int roll;
		
	public:
		Node*next;
		
		Node()
		{
			cout<<"Enter the roll and age : "<<endl;
			cin>>roll>>age;
			next = NULL;
		}
	friend int main();
};
int main()
{
	Node T1,T2,T3,T4;
	
	T1.next = &T2;
	T2.next = &T3;
	T3.next = &T4;
	T4.next = NULL;
	
	cout<<T1.roll<<" "<<T1.age<<endl;
	cout<<T1.next->roll<<" "<<T1.next->age<<endl;
	cout<<T1.next->next->roll<<" "<<T1.next->next->age<<endl;
	cout<<T1.next->next->next->roll<<T1.next->next->next->age<<endl;
	
	return 0;
	
	
}
