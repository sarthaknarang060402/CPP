#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter n ";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        if(n%i==0){
            cout<<i<<endl;
            sum+=i;
        }
    }
    if(sum==n*2)cout<<"perfect number";
    else cout<<"not perfect";
    return 0;
}