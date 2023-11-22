/*
Q1.Fill in the blanks.Draw stackframes on paper provided in class.Submit at the end of practical.
Write your name on answersheet.
1.
void yourfun(--- x,--- y)
{
    ---;
    ---;
}

void myfun(--- m, --- n)
{
    yourfun(m,n);
}

int main()
{
    int a, b;
    a = 5;
    b = 8;
    cout << "\na = " << a << " b = " << b;
    myfun(a, b);
    cout << "\na = " << a << " b = " << b;
}
*/

#include<iostream>
using namespace std;

void yourfun(int & x,int & y)
{
    x = 10;
    y = 20;
}

void myfun(int & m, int & n)
{
    yourfun(m,n);
}

int main()
{
    int a, b;
    a = 5;
    b = 8;
    cout << "\na = " << a << " b = " << b;
    myfun(a, b);
    cout << "\na = " << a << " b = " << b;
}
