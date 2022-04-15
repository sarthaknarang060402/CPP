#include<iostream>
using namespace std;
int main()
{
    string a="hello";
    string b="hiii";
    
    cout<<a<<endl;
    cout<<b<<endl;

    a.append("world");
    cout<<a<<endl;

    a.insert(5," ");//insert one space
    cout<<a<<endl;

    a.insert(6,"* _",2);//insert * only
    cout<<a<<endl;

    a.replace(5,3,"___");
    cout<<a<<endl;

    a.swap(b);
    cout<<a<<endl;
    cout<<b<<endl;

    a.push_back('$');
    cout<<a<<endl;

    a.pop_back();
    cout<<a<<endl;

    b.erase();
    cout<<b<<endl;

    return 0;
}