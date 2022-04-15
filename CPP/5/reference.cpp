#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p=&x;
    int &y=x;
    int *&z=p;
    cout<<*p<<endl;
    cout<<&y<<endl;//reference doesnt have separate memory 
    cout<<&x<<endl;
    cout<<y<<endl;
    cout<<x<<endl;
    y++;
    cout<<y<<endl;
    cout<<x<<endl;
    x++;
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<z<<endl;
    return 0;
}