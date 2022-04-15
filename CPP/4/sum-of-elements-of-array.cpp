#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int sum=0;
    int A[n];
    cout<<"enter 10 element one by one";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    cout<<"sum"<<sum;
    return 0;
}