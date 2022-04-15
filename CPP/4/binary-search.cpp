#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int A[n]={0,1,2,3,4,5,6,7,8,9};     //for binary search elements must be in sorted order
    int key=8;
    int l=0,h=9,m;
    for(;l<=h;)
    {
        m=(l+h)/2;
        if(key<A[m])
        h=m-1;
        else if(key>A[m])
        l=m+1;
        else if(key==A[m])
        {cout<<"found at index "<<m;
        return 0;}
    }
    cout<<"not found";
    return 0;
}