#include<iostream>
using namespace std;
int max(int x,int y,int z)
{
    if(x>y&&x>z)return x;
    else if(y>z)return y;
    else return z;
}
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"max is "<<max(a,b,c);
    return 0;
}