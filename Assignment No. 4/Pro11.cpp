/*
Q4.
class Student
{
	public:
		char name[30];
		int age;
		char hometown[30];
};
Create a database of 6 students containing name,age and hometown.
Scan a name from user.Search all students of given name.If found,print their details.
Do not define any member function.Write whole code in main().
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		char name[30];
		int age;
		char hometown[30];
};

int main()
{
	Student s[6];
	
	int i;
	
	for(i=0;i<6;i++)
	{
		cout<<"Enter the name : "<<endl;
		cin.getline(s[i].name,30);
		cout<<"Enter age : "<<endl;
		cin>>s[i].age;
		cin.ignore(1);
		cout<<"enter the hometown : "<<endl;
		cin.getline(s[i].hometown,30);
	}
	
	char str[90];
	cout<<"Enter the name search : "<<endl;
	cin.getline(str,89);
	
	for(i=0;i<6;i++)
	{
		if(strcmp(s[i].name,str)==0)
		{
			cout<<s[i].name<<" "<<s[i].age<<" "<<s[i].hometown<<endl;
		}
	}
	
	return 0;
}
