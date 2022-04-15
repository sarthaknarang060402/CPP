#include<iostream>
using namespace std;
int main()
{
    //armstrong number is that which is equal to the sum of cubes of its digits.
    int n,d=0,sum=0,n0;
    cout<<"enter n ";
    cin>>n;
    n0=n;
    while(n0>0)
    {
        d=n0%10;
        sum+=d*d*d;
        n0/=10;
    }
    if(sum==n)cout<<"armstrong";
    else cout<<"not armstrong";
    return 0;
}