#include<iostream>
using namespace std;
int main()
{
    string a="hello world";
    string::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<endl;
    
    string::reverse_iterator it2;
    for(it2=a.rbegin();it2!=a.rend();it2++)
    {
        cout<<*it2<<endl;
    }
    return 0;
}