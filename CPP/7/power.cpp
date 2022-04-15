#include<iostream>
using namespace std;
int power(int x,int y)
{
    int ans=1;
    for(int i=1;i<=y;i++)
    {
        ans=ans*x;
    }
    return ans;
}
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"a power b is "<<power(a,b);
    return 0;
}