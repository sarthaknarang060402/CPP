#include<iostream>
using namespace std;
int main()
{
    float basic,net,allow,deduc;
    cout<<"enter basic salary";
    cin>>basic;

    cout<<"enter percentage dedutions ";
    cin>>deduc;

    cout<<"enter percentage allowance ";
    cin>>allow;

    net= basic + (basic*allow/100) -(basic*deduc/100);
    cout<<"net salary "<<net;
    return 0;
}