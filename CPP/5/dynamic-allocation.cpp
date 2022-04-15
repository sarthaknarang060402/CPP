#include<iostream>
using namespace std;
int main()
{
    int *p=new int[20];

    delete []p;//20x4 memory gets freed
    p=new int[40];
    cout<<p<<endl;
    delete []p;//40x4 memory gets freed
    cout<<p<<endl;
    p=nullptr;//pointer gets freed
    cout<<p;
    return 0;
}