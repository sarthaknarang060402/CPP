#include<iostream>
using namespace std;
int main()
{
    int  n=10;
    int A[n]={1,2,3,4,5,6,7,8,9,0};
    int key=7;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<key<<" found at index "<<i;
            return 0;
        }
    }
    cout<<"key not found";
    return 0;
}