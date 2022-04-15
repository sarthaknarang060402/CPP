#include<iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5,6};
    int *p=A,d;
    int *q=&A[4];
    cout<<*p<<endl;
    cout<<*q<<endl;
    d=q-p;
    cout<<d<<endl;
    cout<<*p++<<endl;//prints 1 and then increments
    cout<<*p--<<endl;//prints incremented 1 to 2 and then decrements back to 1 
    cout<<*p<<endl;//prints decremented 1
    cout<<*q-2;
    return 0;
}