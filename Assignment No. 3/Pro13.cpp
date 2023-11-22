/*
Q8. Read instructions carefully given in question below.
int main()
{
	int  num [ 10 ] = { 10, 5 , 67 , 21 , 45 , 61 , 3 , 49 , 21 , 17 };
	//The address of 0 th element is 1000
	
	int * p = &num[ 0 ] ;
	
	//Now find the output of following cout.
	//You must know pointer arithmetic here.If you don't know,first read it.
	cout<<*p<<endl;
	cout<<*(p+2)<<endl;
	cout<<p+4<<endl;
	cout<<*(p+6)<<endl;
	
	p = p + 2;

	cout<< *p << endl;
	cout<< *(p+3) << endl;
	cout<< *p - 3 << endl;
	cout<< *(p-3) << endl; 
		
	p--;

	cout<<*p + 5;
	cout<< p - 1 << endl;
	
	*p = *p + 5 ;
	
	cout<< num[1] << endl;
	
	return 0;
}
*/


