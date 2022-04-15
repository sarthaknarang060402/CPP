#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"enter year "<<endl;
    cin>>y;
    if(y%4==0&&y%100!=0)cout<<"leap";
    else if(y%400==0)cout<<"leap";
    else cout<<"not leap";
    return 0;
}