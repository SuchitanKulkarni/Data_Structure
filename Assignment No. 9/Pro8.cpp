/*
Q8.Create a database of students using SLL.Use following class Node for creation of database.

class Node
{
	public:
		char name[30];
		int age;
		char hometown[20];
		Node * next;
};

Implement following functions on database.
-create database
-add new student in existing database
-search student by name
-search students belonging to specific hometown
-delete student by name(This will delete only one student found first.If database contains more than one students
having same name,wil delete only first one.)
-delete all students belonging to specific hometown
-sort students by name.
-display whole list.
*/

#include<iostream>
using namespace std;

class Node
{
	public:
		char name[30];
		int age;
		char hometown[20];
		Node * next;
		
	node()
	{
		next = NULL;
	}
	node(char *  p,int a,char *q)
	{
		strcmp(name,p);
		strcmp(hometown,q);
		age = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode deleted"<<endl;
	}
};


