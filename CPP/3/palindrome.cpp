#include<iostream>
using namespace std;
int main()
{
    int n,d,r=0,n0;
    cout<<"enter n ";
    cin>>n;
    n0=n;
    while(n>0)
    {
        d=n%10;
        n/=10;
        r=r*10+d;
    }
    if(r==n0)
    cout<<"palindrome";
    else 
    cout<<"not plaindrome";
    return 0;
}