#include<iostream>
using namespace std;

int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
int min(int x,int y)
{
    if(x<y)return x;
    else return y;
}
float min(float x,float y)
{
    if(x<y)return x;
    else return y;
}
int min(int x,int y,int z)
{
    if(x<y&&x<z)return x;
    else if(y<z)return y;
    else return z;
}
int main()
{
    int a,b,c;
    float d,e;
    cout<<"enter three numbers and two floats"<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"sum is "<<add(a,b)<<endl;
    cout<<"sum is "<<add(a,b,c)<<endl;
    cout<<"min is "<<min(a,b,c)<<endl;
    cout<<"min is "<<min(a,b)<<endl;
    cout<<"min is "<<min(d,e);
    
    return 0;
}