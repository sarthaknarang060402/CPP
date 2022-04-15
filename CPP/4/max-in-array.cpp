#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int A[n];
    int max;
    cout<<"enter 10 elements one by one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    max=A[0];
    
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
        {max=A[i];}
    }
    cout<<"max is "<<max;
    return 0;
}