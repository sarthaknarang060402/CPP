#include<iostream>
using namespace std;
int main()
{
    int sum=0,n=10,A[n]={0,1,2,3,4,5,6,7,8,9};
    float avg;
    for(int i=0;i<n;i++)sum+=A[i];
    avg=sum/(float)n;
    cout<<avg;
    return 0;
}