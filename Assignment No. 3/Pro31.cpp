/*
Q14.For following class Student, create a linked list of 3 compiletime objects.
Scan details for each object from user.Print the data.
class Student
{
	public:
		char name[30];
		int age;
		Student * next;
};
*/

#include<iostream>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		Student * next;
};

int main()
{
	Student s1,s2,s3,s4;
	
	cout<<"Enetr the name : "<<endl;
	cin.getline(s1.name,30);
	cout<<"Enter the age : "<<endl;
	cin>>s1.age;
	cin.ignore(1);
	
	cout<<"Enter the name : "<<endl;
	cin.getline(s2.name,30);
	cout<<"Enter the age : "<<endl;
	cin>>s2.age;
	cin.ignore(1);
	
	cout<<"Enter the name : "<<endl;
	cin.getline(s3.name,30);
	cout<<"Enter the age : "<<endl;
	cin>>s3.age;
	cin.ignore(1);
	
	cout<<"Enter the name : "<<endl;
	cin.getline(s4.name,30);
	cout<<"Enter the age : "<<endl;
	cin>>s4.age;
	
	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	s4.next = NULL;
	
	cout<<s1.name<<" "<<s1.age<<endl;
	cout<<s1.next->name<<" "<<s1.next->age<<endl;
	cout<<s1.next->next->name<<" "<<s1.next->age<<endl;
	cout<<s1.next->next->next->name<<" "<<s1.next->next->next->age<<endl;
	
	return 0;
}
