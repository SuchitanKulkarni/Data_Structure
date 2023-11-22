/*
Q9.Complete the remaining code for following main() function.
int main()
{
	int num[6];
	int addition;
	//passing array to function
	scanarray(&num[0]);
	addition = findaddition(num);
	cout<<"\nAddition = "<<addition;
}
*/

#include<iostream>
using namespace std;

void scanarray(int * n);
int findaddition(int * p);

int main()
{
	int num[6];
	int addition;
	//passing array to function
	scanarray(&num[0]);
	addition = findaddition(num);
	cout<<"\nAddition = "<<addition;
}

void scanarray(int * n)
{
	cout<<"Enter the 6 integers : "<<endl;
	int i;
	
	for(i=0;i<6;i++)
	{
		cin>>*(n+i);
	}
}

int findaddition(int * p)
{
	int i,sum =0;
	
	for(i=0;i<6;i++)
	{
		sum = sum + *(p+i);
	}
	
	return sum;
}
