#include<iostream>
using namespace std;
int main()
{
    int count=0;
    string a="hello world";
    for(int i=0;a[i]!='\0';i++)
    {
        count++;
    }
    cout<<count;
    return 0;
}