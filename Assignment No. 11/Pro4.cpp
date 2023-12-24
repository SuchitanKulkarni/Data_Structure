/*
Q4.WAP for tower of hanoi.Print total number of transactions also.
Test your code for different number of discs.
*/

#include<iostream>
#define MAX 34
using namespace std;



int TOH(int n,char S,char D,char I)
{

		
	if(n==0)
	{
		return 0;
	}
	else
	{
	    int c;
        int b;
	
	    c = TOH(n-1,S,I,D);
	    cout<<S<<"->"<<D<<endl;
	    b = TOH(n-1,I,D,S);
	    
	    return c+b+1;
	    
	}
	
	
	
}

int main()
{
	int n;
	
	cout<<"Enter the number of disc  : "<<endl;
	cin>>n;
	
	int c = 0;
	
    TOH(n,'s','d','i');
    
    cout<<"number of tranactions : "<<TOH(n,'s','d','i')<<endl;
	
	return 0;
}
