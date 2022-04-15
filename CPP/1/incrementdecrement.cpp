#include<iostream>
using namespace std;
int main()
{
    int n=5,y;
    y=n++;
    cout<<y<<endl<<n<<endl;//y will be 5 and n will be 6
    y=++n;
    cout<<y<<endl<<n<<endl;//y will be 7 and n will be 7
    y=n--;
    cout<<y<<endl<<n<<endl;//y will be 7 and n will be 6
    y=--n;
    cout<<y<<endl<<n<<endl;//y will be 5 and n will be 5
    return 0;
}