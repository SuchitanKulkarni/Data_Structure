/*
9.Scan 8 integers from user in an array.Write a menu driven program for following options.
(menu driven means using switch case)
-find smallest element
-find largest element
-sort in ascending order
-sort in descending order
*/

#include<iostream>
using namespace std;

int main()
{
	int num[8];
	
	cout<<"Enter the 8 integers : "<<endl;
	
	int i,j,temp,min,max,n;
	
	min = num[0];
	max = num[0];
	
	for(i=0;i<8;i++)
	{
		cin>>num[i];
	}
	
	while(1)
	{
		
		cout<<"------------------MENU-------------------------------"<<endl;
		cout<<"1. Find smallest \n 2. Find Largest \n 3. Sort in ascending \n 4. Sort decending \n"<<endl;
		cout<<"\nEnter your choice : "<<endl;
		cin>>n;
		
		
		switch(n)
	{
		case 1 :    min = num[0];
		            for(i=0;i<8;i++)
	         	   {
	         	   	if(min > num[i])
	         	   	{
	         	   		min = num[i];
					}
			
	             	}
	             	
	             	cout<<"Smallest = "<<min<<endl;
	             	
	             	break;
	             	
	    case 2 :max = num[0]; 
		        for(i=0;i<8;i++)
	              {
	              	if(max < num[i])
	              	{
	              		max = num[i];
					  }
	    	
	            	}
	            	
	            	cout<<"Laregest = "<<max<<endl;
	            	
	            	break;
	            	
	    case 3 :  
	    
	               for(i=0;i<8;i++)
	               {
	               	for(j=i+1;j<8;j++)
	               	{
	               		if(num[i]>num[j])
	               		{
	               			temp = num[i];
	               			num[i] = num[j];
	               			num[j] = temp;
						   }
					   }
				   }
				   
				   for(i=0;i<8;i++)
				   {
				   	cout<<num[i]<<" ";
				   }
				   
				   break;
				   
		case 4 : 
		
		       		for(i=0;i<8;i++)
		       		{
		       			for(j=i+1;j<8;j++)
		       			{
		       				if(num[i]<num[j])
		       				{
		       					temp = num[i];
		       					num[i] = num[j];
		       					num[j] = temp;
							   }
						   }
					   }
					   
					   for(i=0;i<8;i++)
					   {
					   	cout<<num[i]<<" ";
					   }
					   
					   break;
					   
		default : cout<<"\nWRONG INPUT"<<endl;
	}
	
	int p;
	
	cout<<"Do ou want to repeat : (1 for yes , 0 for no)"<<endl;
	cin>>p;
	
	if(p == 0)
	{
		break;
	}
	}
	
	
	return 0;
}
