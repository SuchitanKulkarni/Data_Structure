/*
4)
class Time has 2 private data members.(hours and minutes)

	int main()
	{
		Time T1,T2;
		T1.getdata();
		T2.getdata();
		int total1,total2;
		total1 = T1.total();
		total2 = T2.total();
		cout<<"\nTotal1 = "<<total1;
		cout<<"\nTotal2 = "<<total2;
		return 0;
}
*/

#include<iostream>
using namespace std;

class Time
{
	int hr,min;
	
	public:
		
		void getdata()
		{
			cout<<"Enter the hr and min : "<<endl;
			cin>>hr>>min;
		}
		
		int total()
		{
			int p = hr*60 + min;
			
			return p;
		}
};



	int main()
	{
		Time T1,T2;
		T1.getdata();
		T2.getdata();
		int total1,total2;
		total1 = T1.total();
		total2 = T2.total();
		cout<<"\nTotal1 = "<<total1;
		cout<<"\nTotal2 = "<<total2;
		return 0;
	}
