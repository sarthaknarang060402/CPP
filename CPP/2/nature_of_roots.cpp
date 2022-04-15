#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter a,b,c";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0)cout<<"real and unequal roots";
    else if(d==0)cout<<"real and equal roots";
    else cout<<"non real roots";
    return 0;
}