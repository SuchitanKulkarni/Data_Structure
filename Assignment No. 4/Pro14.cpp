/*
Q7.Create a linkedlist for for following class Student.
class Student
{
	public:
		char name[30];
		int age;
		Student * next;
}
class SLL
{
	Stuednt * head;
};
Implement following functions.
-create()
-show()
-count()
-searchbyage()
-searchbyname()
-addatbeg()
-addatend()
-delatbeg()
-delatend()
*/

#include<iostream>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		Student * next;
}
class SLL
{
	Stuednt * head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
	    void create();
	    void show();
	    int count();
	    int searchbyage(int);
	    int searchbyname(char *);
	    void addatbeg(char * , int);
	    void addatend(char *,int);
	    void delatbeg();
	    void delatend();
	    
};


