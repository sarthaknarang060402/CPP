#include<iostream>
using namespace std;
int main()
{
    string e="sarthaknarang666666@gmail.com";
    string username="";
    int i=e.find("@");
    username=e.substr(0,i);
    cout<<username<<endl;
    return 0;
}