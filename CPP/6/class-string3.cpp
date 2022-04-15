#include<iostream>
using namespace std;
int main()
{
    string a="hello";
    string b="world";
    string c;
    char str[10];
    a.copy(str,3);//  , a.length() to copy full string
    cout<<str<<endl;
    str[3]='\0';
    cout<<str<<endl;
    
    cout<<a.find("he")<<endl;
    cout<<a.rfind("l")<<endl;//chooses second l as rfind searches from right side
    cout<<a.find_first_of("le")<<endl;//order of character does not matter
    cout<<a.find_last_of("lo")<<endl;//order of character does not mtter 
    cout<<a.substr(2)<<endl;//prints from given index to end 
    cout<<a.substr(2,2)<<endl;//prints from given index and given numbers
    cout<<a.compare(b)<<endl;
    cout<<a.at(4)<<endl;// same as a[4]
    cout<<a[4]<<endl;
    cout<<a+b<<endl;
    c=a+b;
    cout<<c;

    return 0;
}