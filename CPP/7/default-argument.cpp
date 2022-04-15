#include<iostream>
using namespace std;

int add(int x,int y,int z=0)
{
    return x+y+z;
}

int main()
{
    int a,b,c;
    cout<<"enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"sum2 is "<<add(a,b)<<endl;
    cout<<"sum3 is "<<add(a,b,c);
    return 0;
}