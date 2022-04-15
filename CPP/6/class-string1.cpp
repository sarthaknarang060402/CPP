#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter name\n";
    getline(cin,a);
    cout<<a<<endl;
    cout<<a.length()<<endl;
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    a.resize(50);
    cout<<a.size()<<endl;
    cout<<a.max_size()<<endl;


    a.clear();
    cout<<a<<endl;
    cout<<a.length()<<endl;
    cout<<a.size()<<endl;
    if(a.empty())cout<<"true";
    
    return 0;
}