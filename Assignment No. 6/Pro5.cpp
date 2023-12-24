/*
5.
class student
{
	private: 
		char name[30];
		int age;
		char home[30];
};
create a database of 6 students.Check if “virat” is present in database or not.If present
replace name “virat” by “Sachin”.
*/

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private: 
		char name[30];
		int age;
		char home[30];
	
	public:	
		void getdata()
		{
			cout<<"Enter the name : "<<endl;
			cin.getline(name,30);
			cout<<"enter the age : "<<endl;
			cin>>age;
			cin.ignore(1);
			cout<<"Enter the home town : "<<endl;
			cin.getline(home,30);
		}
		
		void showdata()
		{
			cout<<name<<" "<<age<<" "<<home<<endl;
		}
		
		void replace()
		{
			if(strcmp(name,"virat")==0)
			{
				strcpy(name,"sachin");
			}
		}
};

int main()
{
	student std[6];
	
	for(int i=0;i<6;i++)
	{
		std[i].getdata();
	}
	
	for(int i=0;i<6;i++)
	{
		std[i].replace();
	}
	
	for(int i=0;i<6;i++)
	{
		std[i].showdata();
	}
	
	return 0;
}

