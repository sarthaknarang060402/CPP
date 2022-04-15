#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=15;//00001111
    c=11;//00001011

    b=a<<1;//00011110 left shift by n makes number*2^n
    cout<<b<<endl;

    b=a>>1;//00000111 right shift by n makes number/2^n
    cout<<b<<endl;

    b=c&a;//00001011
    cout<<b<<endl;

    b=c|a;//00001111
    cout<<b<<endl;

    b=~c;//11110100
    cout<<b<<endl;

    b=a^c;//00000100
    cout<<b<<endl;
    return 0;
}