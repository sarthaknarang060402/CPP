#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers to calculate gcd"<<endl;
    cin>>a>>b;
    for(;a!=b;)
    {
        if(a>b)a-=b;
        else if(b>a)b-=a;
    }
    cout<<"gcd "<<a;
    return 0;
}