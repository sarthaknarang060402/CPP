#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int A[n];
    int min;
    cout<<"enter 10 elements one by one"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    min=A[0];
    
    for(int i=1;i<n;i++)
    {
        if(A[i]<min)
        {min=A[i];}
    }
    cout<<"min is "<<min;
    return 0;
}