#include<iostream>
using namespace std;
int main()
{
    
    string a="hello world";
    for(int i=0;a[i]!='\0';i++)
    {
        a[i]=a[i]-32;
    }
    cout<<a;
    return 0;
}