/*
Q11.Complete the remaining code for following main() function.
1)
int main()
{
	
	cout<<"\nHow many integers you want to store?"
	int n;
	cin>>n;
	int * p ;
	p = createstorage(n);
	scandata(p,n);
	printdata(p,n);
	//Do not change main() function here..
}
*/

#include<iostream>
using namespace std;

void printdata(int * q, int n);
void scandata(int *q,int n);
int* createstorage(int n);

int main()
{
	
	cout<<"\nHow many integers you want to store?"<<endl;
	int n;
	cin>>n;
	int * p ;
	p = createstorage(n);
	scandata(p,n);
	printdata(p,n);
	//Do not change main() function here..
}

int * createstorage(int n)
{
	int * q = new int[n];
	
	return q;
}

void scandata(int *q,int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the data : "<<endl;
		cin>>*(q+i);
	}
}

void printdata(int * q, int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<*(q+i)<<" ";
	}
}
