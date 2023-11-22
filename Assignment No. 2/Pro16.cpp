/*
2.For following main() function,scan 3 integers from user.
Print addition of 3 integers.Do not declare any variable of your own.
int main()
{
	int * p;
}
*/

#include<iostream>
using namespace std;

int main()
{
	int *p;
	
	int i,sum = 0;
	
	p = new int[3];
	
	cout<<"Enter 3 integers : "<<endl;
	
	for(i=0;i<3;i++)
	{
		cin>>*(p+i);
		
		sum = sum + *(p+i);
	}
	
	cout<<" ADDITION = "<<sum<<endl;
	
	return 0;
	
	
}
