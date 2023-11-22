/*
2)
int main()
{
	char name[20];
	
	//Scan name of employee here and find its length.	
	//Do not use library function strlen()
}
*/

#include<iostream>
using namespace std;

int main()
{
	char name[20];
	
	cout<<"Enter the employee name : "<<endl;
	cin.getline(name,20);
	
	int i,p=0;
	
	while(name[i]!='\0')
	{
		p++;
		
		i++;
	}
	
	cout<<"length = "<<p;
	
	return 0;
	
	//Scan name of employee here and find its length.	
	//Do not use library function strlen()
}
