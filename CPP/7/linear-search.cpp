#include<iostream>
using namespace std;

void linsearch(int A[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)cout<<"found at "<<i<<endl;
    }
}
int main()
{
    int n=10;
    int A[n]={1,2,3,5,6,4,7,8,9,0};
    int key=0;
    linsearch(A,key,n);
    return 0;
}