/*
12.
class Student
{
	public:
		char name[30];
		int age;
		Node * next;
};
Create a linked list of 4 students.Check if a student having name "sachin" is present 
in the list or not.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		Student * next;
		
	Student()
	{
		name[0]= '\0';
		age = 0;
		next = NULL;
	}
	Student(int a,char * p)
	{
		age = a;
		strcpy(name,p);
		next = NULL;
	}
	
	
};

int main()
{
	Student * p = NULL, *q = NULL;
	char str[90];
	int age,i;
	cout<<"Enter the name : "<<endl;
	cin.getline(str,90);
	cout<<"Enter the age : "<<endl;
	cin>>age;
	cin.ignore(1);
	
	p = new Student(age,str);
	
	q = p;
	
	for(i=1;i<4;i++)
	{
		cout<<"Enter the name : "<<endl;
	    cin.getline(str,90);
	    cout<<"Enter the age : "<<endl;
	    cin>>age;
	    cin.ignore(1);
	
	   p->next = new Student(age,str);
	   
	   p = p->next;
	}
	p  = q;
	
	char ch[80] = "sachin";
	
	while(p!=NULL)
	{
		if(strcmp(p->name,ch))
		{
			cout<<"found"<<endl;
			break;
		}
	}
	
	if(p == NULL)
	{
		cout<<"NOT found";
	}
	
	return 0;
	
}
