#include<iostream>
using namespace std;
int main()
{
    int n=6;
    int A[n]={0,-3,3,-1,-4,4};
    int pcount=0,zeros=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>0)pcount++;
        if(A[i]==0)zeros++;
    }
    cout<<pcount<<" positives found"<<endl;
    cout<<n-pcount-zeros<<" negatives found"<<endl;
    cout<<zeros<<" zeros found";
    return 0;
}