#include<iostream>
using namespace std;

template <class T>
T maxim(T x,T y)//cant use max() as it is inbuilt in c++
{
    if(x>y)return x;
    else return y;
}

int main()
{
    int a,b;
    float d,e;
    cout<<"enter two numbers and two floats"<<endl;
    cin>>a>>b>>d>>e;
    cout<<"max is "<<maxim(a,b)<<endl;
    cout<<"max is "<<maxim(d,e)<<endl;
    return 0;
}