/*
Q5.Scan a binary from user(In string format).Create DLL for that binary
where each node will contain one bit.DLL must contain 8 bit binary.
User may give binary containing different number of bits.
Now convert that binary into decimal. 
*/

#include<iostream>
using namespace std;

class node
{
	public:
		
		int data;
		node*next;
		node*prev;
		
	node()
	{
		next = NULL;
		prev = NULL;
	}
	
	node(int a)
	{
		data = a;
		next = NULL;
		prev = NULL;
	}
};

class DLL
{
	node*head;
	
	public:
		
		DLL()
		{
			head = NULL;
		}
		
		void addatbeg(int x);
		void show();
		int power(int);
		
};

void DLL::addatbeg(int x)
{
	node*p = new node(x);
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		p->next = head;
		head->prev = p;
		head = p;
	}
}

void DLL::show()
{
	node*p = head;
	int sum = 0;
	int i = 0;
	
	while(p!=NULL)
	{
		int q = power(i);
		sum = sum + (p->data * q);
		
		i++;
		p =p->next;
	}
	
	cout<<"decimal = "<<sum;
	
}

int DLL::power(int i)
{
	int sum = 1;
	
	if(i==0)
	{
		return 1;
	}
	
	else
	{
		 for(int j=0;j<i;j++)
     	{
	       sum = sum * 2;
	    }
	}
	
	return sum;
}

int main()
{
	char str[90];
	
	DLL d1;
	
	cout<<"Enter the binary : "<<endl;
	cin.getline(str,90);
	
	int i =0;
	
	while(str[i]!='\0')
	{
		d1.addatbeg(str[i]-48);
		
		i++;
	}
	
	d1.show();
	
}
