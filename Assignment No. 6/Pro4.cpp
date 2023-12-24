/*
4.
class student
{
	public:
		char name[30];
		int age; 
		char hometown[30];
} 
Create a database of a students.Print all the students who belong to “pune”.
Write whole code in main() only.Do not use linked list.This is simple
array of objects code. Do not define any member function.
*/

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public:
		char name[30];
		int age; 
		char hometown[30];
};

int main()
{
	student std[6];
	
	for(int i=0;i<6;i++)
	{
		cout<<"Enter the name : "<<endl;
		cin.getline(std[i].name,30);
		cout<<"Enter the age : "<<endl;
		cin>>std[i].age;
		cin.ignore(1);
		cout<<"Enter the home town : "<<endl;
		cin.getline(std[i].hometown,30);
	}
	
	for(int i=0;i<6;i++)
	{
		if(strcmp(std[i].hometown,"pune")==0)
		{
			cout<<std[i].name<<" "<<std[i].age<<" "<<std[i].hometown<<endl;
		}
	}
	
	return 0;
}
