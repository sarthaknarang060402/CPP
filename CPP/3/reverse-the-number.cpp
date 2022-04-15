#include<iostream>
using namespace std;
int main()
{
    int n,d,r=0;
    cout<<"enter n ";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        n/=10;
        r=r*10+d;
    }
    cout<<r;
    return 0;
}