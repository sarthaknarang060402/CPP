#include<iostream>
using namespace std;
int main()
{
    float billamount;
    cout<<"enter total amount"<<endl;
    cin>>billamount;
    if(billamount<100)billamount=billamount;
    else if(billamount>100&&billamount<500)billamount=0.90*billamount;
    else if (billamount>=500) billamount=billamount*0.80;
    cout<<"discounted amount is "<<(float)billamount;
    return 0;
}