/*
Q5.
class Student
{
	private:
		char name[30];
		int age;
		char hometown[30];
};
Create a database of 6 students containing name,age and hometown.
Scan a name from user.Search all students of given name.If found,print their details.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		char name[30];
		int age;
		char hometown[30];
		
	public:
		
		void scan()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,30);
			cout<<"enter the age : "<<endl;
			cin>>age;
			cin.ignore(1);
			cout<<"Enter the hometown : "<<endl;
			cin.getline(hometown,30);
		}
		
		void show()
		{
			cout<<name<<" "<<age<<" "<<hometown<<endl;
		}
		
		int compair(char * p)
		{
			if(strcmp(name,p)==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	Student s[6];
	int i;
	for(i=0;i<6;i++)
	{
		s[i].scan();
	}
	
	char str[89];
	cout<<"Enter the name to search : "<<endl;
	cin.getline(str,89);
	
	for(i=0;i<6;i++)
	{
		if(s[i].compair(str)==1)
		{
			s[i].show();
		}
	}
	
	return 0;
}

